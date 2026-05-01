/*
 * XREFs of ?GetTrustLevel@CVirtualTouchpadExperienceManager@@UEAAJPEAW4TrustLevel@@@Z @ 0x180081D80
 * Callers:
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18009E110 (-GetTrustLevel@CActionCenterExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18009E120 (-GetTrustLevel@CVirtualTouchpadExperienceManager@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z @ 0x18009E130 (-GetTrustLevel@CActionCenterExperienceManager@@WFA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x18009E450 (-GetTrustLevel@CControlCenterExperienceManager@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18009E890 (-GetTrustLevel@CTaskContinuityActivitiesExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CToastCenterExperienceManager@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x18009EA30 (-GetTrustLevel@CToastCenterExperienceManager@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x18009EA40 (-GetTrustLevel@CStartExperienceManager@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18009EE20 (-GetTrustLevel@CStartExperienceManager@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z @ 0x1800A03F0 (-GetTrustLevel@HolographicPositioner@@WJI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::GetTrustLevel(
        CVirtualTouchpadExperienceManager *this,
        enum TrustLevel *a2)
{
  *a2 = FullTrust;
  return 0LL;
}
