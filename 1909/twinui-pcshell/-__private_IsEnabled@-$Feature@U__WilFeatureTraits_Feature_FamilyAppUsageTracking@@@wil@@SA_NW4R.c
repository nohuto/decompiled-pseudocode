/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800B3DE8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoStart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800B1678 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTrackingAutoS.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800B146C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800B3374 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@CAX_NW.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::ReportUsageToService(v2, 0, v3);
  return v1;
}
