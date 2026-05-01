/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800C61F8
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C555C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@CA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800C5CA0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@CAX_NW4Rep.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsageToService(v2, v3, v4);
  return v1;
}
