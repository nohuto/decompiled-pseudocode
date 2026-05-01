/*
 * XREFs of wil::details::ScopeExitFn__lambda_c47f0ea8137cd547171fc37abdfbde96___::_ScopeExitFn__lambda_c47f0ea8137cd547171fc37abdfbde96___ @ 0x1800A9C68
 * Callers:
 *     ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180330BD8 (-OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c47f0ea8137cd547171fc37abdfbde96___::_ScopeExitFn__lambda_c47f0ea8137cd547171fc37abdfbde96___(
        __int64 a1)
{
  int PolicyData; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    if ( **(_QWORD **)a1 )
    {
      PolicyData = PolicyManager_FreeGetPolicyData();
      if ( PolicyData < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8C6,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)PolicyData);
    }
  }
}
