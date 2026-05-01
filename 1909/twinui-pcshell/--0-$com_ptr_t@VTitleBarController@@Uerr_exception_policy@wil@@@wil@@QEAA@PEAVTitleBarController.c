/*
 * XREFs of ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x180266638
 * Callers:
 *     ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180267600 (-AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802686B4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 *     ?OnViewFocusChanged@TitleBarController@@UEAAXPEAUIApplicationView@@_N@Z @ 0x180268890 (-OnViewFocusChanged@TitleBarController@@UEAAXPEAUIApplicationView@@_N@Z.c)
 *     ?OnViewPositionChanged@TitleBarController@@UEAAXPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802689E0 (-OnViewPositionChanged@TitleBarController@@UEAAXPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z.c)
 *     ?OnViewRemoved@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180268C30 (-OnViewRemoved@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Composabl.c)
 *     ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x180269320 (-SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationVi.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

_QWORD *__fastcall wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r10
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  *a1 = a2;
  v2 = a1;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a2 + 72);
    while ( v3 >= 0 )
    {
      if ( (_DWORD)v3 != 0x7FFFFFFF )
      {
        v4 = v3;
        v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 72), v3 + 1, v3);
        if ( v4 != v3 )
          continue;
      }
      return v2;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v3 + 16),
      (volatile int *)a2);
  }
  return v2;
}
