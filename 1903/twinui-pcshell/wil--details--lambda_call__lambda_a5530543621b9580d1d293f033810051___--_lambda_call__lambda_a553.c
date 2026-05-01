/*
 * XREFs of wil::details::lambda_call__lambda_a5530543621b9580d1d293f033810051___::_lambda_call__lambda_a5530543621b9580d1d293f033810051___ @ 0x1802473D8
 * Callers:
 *     __lambda_c73351efc5a47bb1a53229d554a2998e_::operator()_::_1_::dtor$5 @ 0x180247DB1 (__lambda_c73351efc5a47bb1a53229d554a2998e_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180249AF0 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 */

void __fastcall wil::details::lambda_call__lambda_a5530543621b9580d1d293f033810051___::_lambda_call__lambda_a5530543621b9580d1d293f033810051___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    v1 = TitleBarController::RemoveWin32View(
           *(TitleBarController **)a1,
           **(struct IWin32ApplicationView ***)(a1 + 8),
           *(const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId **)(a1 + 16));
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v1);
  }
}
