/*
 * XREFs of ?ExitContactCard@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1801C04B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ExperienceManager_ExitContactCard@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z @ 0x1801BE000 (--$ExperienceManager_ExitContactCard@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1804300B8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CQuickConnectExperienceManager::ExitContactCard(CQuickConnectExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  QuickConnectTelemetry::ExperienceManager_ExitContactCard<_GUID &>((__int128 *)((char *)this + 264));
  v2 = CSingleViewShellExperience::DestroyView((CQuickConnectExperienceManager *)((char *)this + 48));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
