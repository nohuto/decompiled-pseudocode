/*
 * XREFs of ?ToggleVerticalMaximize@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025E650
 * Callers:
 *     ?OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerViewEventArgs@3456@@Z @ 0x180253A20 (-OnTabViewOperationRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Intern.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::ToggleVerticalMaximize(
        TabViewManager *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 WindowForView; // r10
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( !WindowForView )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(**((_QWORD **)this + 53) + 24LL))(
         *((_QWORD *)this + 53),
         WindowForView,
         0LL,
         0LL,
         4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC05,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
