#include <GLFW/glfw3.h>
#include <iostream>

// Принудительное подключение библиотек
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glfw3.lib")

int main()
{
    
    if (!glfwInit()) return -1;

    
    GLFWwindow* Okno = glfwCreateWindow(512, 512, "Pipchenko_Nikolay_EBMb_24_1", NULL, NULL);
    if (!Okno)
    {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(Okno);

    
    while (!glfwWindowShouldClose(Okno))
    {
        
        glClearColor(0.4, 1.0, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        
        glBegin(GL_TRIANGLES);

        
        glColor3f(1.0, 0.5, 1.0);

        
        glVertex2f(-0.6, -0.4);
        glVertex2f(0.6, -0.4);
        glVertex2f(0.3, 0.4);
        glVertex2f(-0.6, -0.4);
        glVertex2f(0.3, 0.4);
        glVertex2f(-0.3, 0.4);

        glEnd();

       
        glfwSwapBuffers(Okno);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}