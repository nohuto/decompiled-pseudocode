/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@SA_NXZ @ 0x180093CFC
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@SA_NXZ @ 0x180093C20 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180093AB8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@CA-AW4wi.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093C98 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PenDetachIWS@@@wil@@CAX_NW4Reporting.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_PenDetachIWS>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_PenDetachIWS>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_PenDetachIWS>::ReportUsageToService(v2, v3, v4);
  return v1;
}
