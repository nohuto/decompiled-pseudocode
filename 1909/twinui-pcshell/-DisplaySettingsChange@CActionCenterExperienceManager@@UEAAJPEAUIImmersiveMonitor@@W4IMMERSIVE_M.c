/*
 * XREFs of ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180194D30
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180048F44 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180195AE8 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v10);
  if ( v5 < 0 )
  {
    v6 = 508LL;
LABEL_9:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return 0LL;
  }
  if ( v10 && (a3 & 0x3F) != 0 )
  {
    v7 = CActionCenterExperienceManager::PositionView((CActionCenterExperienceManager *)(a1 - 72));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v5 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)(a1 - 72));
    if ( v5 < 0 )
    {
      v6 = 519LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
