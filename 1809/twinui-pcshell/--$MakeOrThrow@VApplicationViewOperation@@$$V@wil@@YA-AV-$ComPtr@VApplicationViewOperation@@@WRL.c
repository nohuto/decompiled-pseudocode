/*
 * XREFs of ??$MakeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1801CFAE4
 * Callers:
 *     ?UngroupAndCloakForDrag@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE68C (-UngroupAndCloakForDrag@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows.c)
 *     ?AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F6FD0 (-AttachTitleBarToView@TitleBarController@@UEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 *     ?OnViewRecovered@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1801F8570 (-OnViewRecovered@TitleBarController@@UEAAXPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Composa.c)
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x180207170 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<ApplicationViewOperation,>(_QWORD *a1)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(a1);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, 56LL, (__int64)"internal\\sdk\\inc\\wil\\wrl.h", v2);
    __debugbreak();
  }
  return a1;
}
