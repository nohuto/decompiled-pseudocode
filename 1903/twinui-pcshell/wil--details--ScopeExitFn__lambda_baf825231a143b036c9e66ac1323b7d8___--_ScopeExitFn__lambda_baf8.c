/*
 * XREFs of wil::details::ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___::_ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___ @ 0x18009CA84
 * Callers:
 *     ?OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180311708 (-OnAutoInvokeInDesktopModePolicyChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___::_ScopeExitFn__lambda_baf825231a143b036c9e66ac1323b7d8___(
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
          (void *)0x8A3,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)PolicyData);
    }
  }
}
