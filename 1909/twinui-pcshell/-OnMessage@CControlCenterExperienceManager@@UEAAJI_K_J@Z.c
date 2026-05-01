/*
 * XREFs of ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801996B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801997A0 (-OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnMessage(
        CControlCenterExperienceManager *this,
        int a2,
        char *a3,
        unsigned __int16 a4)
{
  char *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v4 = (char *)this - 48;
    if ( a3 == v4 )
    {
      v5 = CControlCenterExperienceManager::OnTargetedMessage(v4, a4);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x139,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  return 0LL;
}
