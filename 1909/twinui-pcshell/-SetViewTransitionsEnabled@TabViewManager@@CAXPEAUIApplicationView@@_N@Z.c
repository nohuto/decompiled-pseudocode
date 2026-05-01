/*
 * XREFs of ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x180257280
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x180253A20 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180261098 (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

void __fastcall TabViewManager::SetViewTransitionsEnabled(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  char v2; // bl
  HWND WindowForView; // rax
  int v4; // ecx
  int pvAttribute; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char)a2;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a1, a2);
  v4 = 0;
  if ( WindowForView )
  {
    LOBYTE(v4) = v2 == 0;
    pvAttribute = v4;
    DwmSetWindowAttribute(WindowForView, 3u, &pvAttribute, 4u);
  }
}
