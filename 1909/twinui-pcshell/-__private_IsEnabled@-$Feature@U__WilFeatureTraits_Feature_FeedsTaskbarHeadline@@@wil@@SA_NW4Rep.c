/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800965BC
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x180093528 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsHoverClickOptions@@@wi.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1800C0C2C (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@C.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800932B8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180094650 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CAX_NW4R.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::ReportUsageToService(v2, 0, v3);
  return v1;
}
