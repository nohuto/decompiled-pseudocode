/*
 * XREFs of ?OnSetForegroundFailed@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016E310
 * Callers:
 *     <none>
 * Callees:
 *     ?FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ @ 0x18016D91C (-FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnSetForegroundFailed(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CJumpViewExperienceManager::FireCancelledEvent((CJumpViewExperienceManager *)((char *)this - 64));
  return 0LL;
}
