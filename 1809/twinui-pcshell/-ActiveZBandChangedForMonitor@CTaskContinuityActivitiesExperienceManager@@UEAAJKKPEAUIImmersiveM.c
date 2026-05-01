/*
 * XREFs of ?ActiveZBandChangedForMonitor@CTaskContinuityActivitiesExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801571F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x180113330 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 *     ?Hide@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ @ 0x1801575D0 (-Hide@CTaskContinuityActivitiesExperienceManager@@UEAAJXZ.c)
 */

__int64 __fastcall CTaskContinuityActivitiesExperienceManager::ActiveZBandChangedForMonitor(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v3; // r8d
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 88) != 2 || !ZBandHelpers::IsBelowImmersiveLauncher(a3) && v3 != 13 )
    return 0LL;
  v5 = CTaskContinuityActivitiesExperienceManager::Hide((CTaskContinuityActivitiesExperienceManager *)(v4 - 24));
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
