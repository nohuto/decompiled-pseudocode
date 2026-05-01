/*
 * XREFs of ?GetTrustLevel@CInsightsExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800848E0
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800B4140 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800B4150 (-GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x1800B4160 (-GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x1800B4520 (-GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800B49F0 (-GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CToastCenterExperienceManager@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800B4B90 (-GetTrustLevel@CToastCenterExperienceManager@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x1800B4BA0 (-GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x1800B4FE0 (-GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x1800B6E60 (-GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInsightsExperienceManager::GetTrustLevel(CInsightsExperienceManager *this, enum TrustLevel *a2)
{
  *a2 = FullTrust;
  return 0LL;
}
