/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x18009656C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800935B4 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@.c)
 *     ?GetCurrentVariantState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4Variant_FeedsTaskbarHeadline@@PEAIPEAH1@Z @ 0x180093644 (-GetCurrentVariantState@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA-AW4.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009312C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CA-AW4wil_d.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009457C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@CAX_NW4ReportingKin.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::ReportUsageToService(v2, 0, v3);
  return v1;
}
