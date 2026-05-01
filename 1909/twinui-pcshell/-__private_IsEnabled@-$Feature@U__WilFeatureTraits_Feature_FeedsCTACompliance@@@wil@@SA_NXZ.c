/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@SA_NXZ @ 0x1800C4894
 * Callers:
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C0B68 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@CA.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800C1E6C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsCTACompliance@@@wil@@CAX_NW4Rep.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_FeedsCTACompliance>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_FeedsCTACompliance>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_FeedsCTACompliance>::ReportUsageToService(v2, v3, v4);
  return v1;
}
