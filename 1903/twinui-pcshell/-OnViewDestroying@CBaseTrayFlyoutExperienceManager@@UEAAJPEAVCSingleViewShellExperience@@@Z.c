/*
 * XREFs of ?OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800932C4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewDestroying(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
