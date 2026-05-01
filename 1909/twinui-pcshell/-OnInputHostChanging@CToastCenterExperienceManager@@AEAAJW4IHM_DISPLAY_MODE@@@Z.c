/*
 * XREFs of ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x1801A6874
 * Callers:
 *     ?InputHostHiding@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801A5230 (-InputHostHiding@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801A5270 (-InputHostShowing@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MOD.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x1801A30EC (--$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A7690 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnInputHostChanging(CToastCenterExperienceManager *a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  if ( *((_DWORD *)a1 + 36) != 2 )
    return 0LL;
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(&v7);
  v3 = CToastCenterExperienceManager::PositionView(a1);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5FA,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
