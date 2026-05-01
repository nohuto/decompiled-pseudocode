/*
 * XREFs of ?GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x18009E450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CControlCenterExperienceManager::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CVirtualTouchpadExperienceManager::GetTrustLevel((CVirtualTouchpadExperienceManager *)(a1 - 64), a2);
}
