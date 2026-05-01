/*
 * XREFs of ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180195CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180195D28 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnMessage(
        CActionCenterExperienceManager *this,
        int a2,
        char *a3,
        unsigned __int16 a4)
{
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 == 26 && (_DWORD)a3 == 67 )
    {
      v4 = CActionCenterExperienceManager::OnTargetedMessage((char *)this - 64, 2LL);
      if ( v4 < 0 )
      {
        v5 = 442LL;
LABEL_9:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v5,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
      }
    }
  }
  else
  {
    v6 = (char *)this - 64;
    if ( a3 == v6 )
    {
      v4 = CActionCenterExperienceManager::OnTargetedMessage(v6, a4);
      if ( v4 < 0 )
      {
        v5 = 436LL;
        goto LABEL_9;
      }
    }
  }
  return 0LL;
}
