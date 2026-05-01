/*
 * XREFs of ?HideFlyout@MeetNowExperienceManager@@UEAAJXZ @ 0x1800982F0
 * Callers:
 *     ?OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z @ 0x180098E60 (-OnIdleStateChanged@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z.c)
 *     ?OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099170 (-OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ @ 0x180097A2C (-CancelShowFlyoutActivityTimeout@MeetNowExperienceManager@@AEAAXXZ.c)
 *     ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x18009826C (-HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::HideFlyout(CBaseTrayFlyoutExperienceManager **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  MeetNowExperienceManager::CancelShowFlyoutActivityTimeout((MeetNowExperienceManager *)this);
  v2 = CBaseTrayFlyoutExperienceManager::HideFlyout(this[7]);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x87,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
