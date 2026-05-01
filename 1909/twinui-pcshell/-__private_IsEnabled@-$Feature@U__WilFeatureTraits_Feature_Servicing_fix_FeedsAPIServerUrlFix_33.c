/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731@@@wil@@SA_NXZ @ 0x1800D2FD4
 * Callers:
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C6DAC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServer.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800D2D28 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_3.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_fix_FeedsAPIServerUrlFix_33902731>::ReportUsageToService(v2, v3, v4);
  return v1;
}
