/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647@@@wil@@SA_NXZ @ 0x1800C6270
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5418 (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C57B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgrou.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800C5DC8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIf.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_UnregisterBackgroundTaskIfFeedsNotAvailable_33824647>::ReportUsageToService(
    v2,
    v3,
    v4);
  return v1;
}
