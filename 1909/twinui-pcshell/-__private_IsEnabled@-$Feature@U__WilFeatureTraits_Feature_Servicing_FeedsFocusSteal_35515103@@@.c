/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103@@@wil@@SA_NXZ @ 0x18009FDD0
 * Callers:
 *     ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@TwinUI@@@Z @ 0x18009FAC0 (-Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@T.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009CB20 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009F380 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103@@.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103>::__private_IsEnabled(
        __int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103>::ReportUsageToService(v2, v3, v4);
  return v1;
}
