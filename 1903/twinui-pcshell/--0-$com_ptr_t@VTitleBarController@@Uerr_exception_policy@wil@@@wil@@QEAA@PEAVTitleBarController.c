/*
 * XREFs of ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x180247058
 * Callers:
 *     ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180248000 (-AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802490B4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 *     ?OnViewFocusChanged@TitleBarController@@UEAAXPEAUIApplicationView@@_N@Z @ 0x180249290 (-OnViewFocusChanged@TitleBarController@@UEAAXPEAUIApplicationView@@_N@Z.c)
 *     ?OnViewPositionChanged@TitleBarController@@UEAAXPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802493E0 (-OnViewPositionChanged@TitleBarController@@UEAAXPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z.c)
 *     ?OnViewRemoved@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180249630 (-OnViewRemoved@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Composabl.c)
 *     ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x180249D00 (-SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationVi.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  *a1 = a2;
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 72);
    while ( v2 >= 0 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 72), v2 + 1, v2);
      if ( v3 == v2 )
        return a1;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 16));
  }
  return a1;
}
