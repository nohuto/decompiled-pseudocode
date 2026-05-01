/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24847edcb696616e06d886fb92d2466e___::Run @ 0x1801F8D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801F8BF8 (-RemoveWin32View@TitleBarController@@AEAAJPEAUIWin32ApplicationView@@AEBUShellTabGroupId@Tabs@Co.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24847edcb696616e06d886fb92d2466e___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TitleBarController::RemoveWin32View(
         *(TitleBarController **)(a1 + 16),
         *(struct IWin32ApplicationView **)(a1 + 32),
         (const struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *)(a1 + 40));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v1);
}
