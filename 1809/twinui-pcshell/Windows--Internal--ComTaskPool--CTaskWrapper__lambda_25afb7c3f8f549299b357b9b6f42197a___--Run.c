/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___::Run @ 0x18029CA80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ @ 0x18029B794 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAJXZ.c)
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25afb7c3f8f549299b357b9b6f42197a___::Run()
{
  int v0; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = XamlLauncher::LogErrorIfStartOrCortanaArentInstalled();
  if ( v0 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      416LL,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v0);
}
