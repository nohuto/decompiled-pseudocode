/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675@@@wil@@SA_NXZ @ 0x1800D2FAC
 * Callers:
 *     ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800C76A0 (-GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C6CE4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableEx.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800D2CC4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedEr.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617675>::ReportUsageToService(
    v2,
    v3,
    v4);
  return v1;
}
