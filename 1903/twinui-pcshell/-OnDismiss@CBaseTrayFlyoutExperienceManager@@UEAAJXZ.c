/*
 * XREFs of ?OnDismiss@CBaseTrayFlyoutExperienceManager@@UEAAJXZ @ 0x180090FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180410A78 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  CSingleViewShellExperience::DestroyView((CBaseTrayFlyoutExperienceManager *)((char *)this + 64));
  return 0LL;
}
