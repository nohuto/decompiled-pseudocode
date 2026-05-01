/*
 * XREFs of ?SetViewTransitionsEnabled@TabViewManager@@CAXPEAUIApplicationView@@_N@Z @ 0x1801E5180
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x1801E14B0 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 *     ?UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EF41C (-UpdateViewAnimationStateForTab@TabViewManager@@AEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@Co.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

void __fastcall TabViewManager::SetViewTransitionsEnabled(
        __int64 (__fastcall ***a1)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  unsigned __int8 v2; // bl
  HWND WindowForView; // rax
  int pvAttribute; // [rsp+50h] [rbp+18h] BYREF

  v2 = (unsigned __int8)a2;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a1, a2);
  if ( WindowForView )
  {
    pvAttribute = v2 ^ 1;
    DwmSetWindowAttribute(WindowForView, 3u, &pvAttribute, 4u);
  }
}
