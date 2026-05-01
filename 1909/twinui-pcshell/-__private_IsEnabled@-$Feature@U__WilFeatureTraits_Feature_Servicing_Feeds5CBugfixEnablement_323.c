/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691@@@wil@@SA_NXZ @ 0x1800C6220
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C5620 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnabl.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800C5D00 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_Feeds5CBugfixEnablement_32315691>::ReportUsageToService(v2, v3, v4);
  return v1;
}
