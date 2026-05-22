/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_19H2_Rollback@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800352F0
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_19H2_Enablement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180035004 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_19H2_Enablement@@@wil@@CA-A.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_19H2_Rollback@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180034E74 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_19H2_Rollback@@@wil@@CA-AW4w.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_19H2_Rollback@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035204 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_19H2_Rollback@@@wil@@CAX_NW4Reportin.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_19H2_Rollback>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_19H2_Rollback>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_19H2_Rollback>::ReportUsageToService(v2, v3, v4);
  return v1;
}
