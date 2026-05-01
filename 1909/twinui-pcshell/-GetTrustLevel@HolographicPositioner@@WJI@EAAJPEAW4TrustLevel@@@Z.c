/*
 * XREFs of ?GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x1800D9A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CInsightsExperienceManager::GetTrustLevel((CInsightsExperienceManager *)(a1 - 152), a2);
}
