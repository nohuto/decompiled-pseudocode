/*
 * XREFs of wil::details::lambda_call__lambda_30d730196e42b556fb561c7f55dfa492___::_lambda_call__lambda_30d730196e42b556fb561c7f55dfa492___ @ 0x1801F61E4
 * Callers:
 *     __lambda_4583b2cd47151c5f4a6d744938b764a0_::operator()_::_1_::dtor$5 @ 0x1801F684D (__lambda_4583b2cd47151c5f4a6d744938b764a0_--operator()_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F8BF8 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 */

void __fastcall wil::details::lambda_call__lambda_30d730196e42b556fb561c7f55dfa492___::_lambda_call__lambda_30d730196e42b556fb561c7f55dfa492___(
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
        642LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v1);
  }
}
