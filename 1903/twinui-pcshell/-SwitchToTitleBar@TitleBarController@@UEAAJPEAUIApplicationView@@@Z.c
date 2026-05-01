/*
 * XREFs of ?SwitchToTitleBar@TitleBarController@@UEAAJPEAUIApplicationView@@@Z @ 0x18024A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationView@@_N@Z @ 0x180249D00 (-SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate@TitleBarController@@AEAAXPEAUIApplicationVi.c)
 */

__int64 __fastcall TitleBarController::SwitchToTitleBar(TitleBarController *this, struct IApplicationView *a2)
{
  TitleBarController *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (TitleBarController *)((char *)this - 8);
  try
  {
    TitleBarController::SetPseudoActiveViewAndSwitchToTitleBarIfAppropriate(v2, a2, 0);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x209,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
                           v3);
  }
  return result;
}
