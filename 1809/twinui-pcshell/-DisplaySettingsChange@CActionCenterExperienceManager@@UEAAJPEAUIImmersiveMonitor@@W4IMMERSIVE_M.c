/*
 * XREFs of ?DisplaySettingsChange@CActionCenterExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180149530
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180010C64 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x18014A230 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
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
    v6 = 494LL;
LABEL_9:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v6,
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
        504LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v5 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)(a1 - 72));
    if ( v5 < 0 )
    {
      v6 = 505LL;
      goto LABEL_9;
    }
  }
  return 0LL;
}
