/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@SA_NXZ @ 0x18002D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180033EC8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::IsEnabled()
{
  __int16 v1; // [rsp+34h] [rbp+Ch]
  int v2; // [rsp+38h] [rbp+10h] BYREF
  __int16 v3; // [rsp+3Ch] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 3;
  v2 = 0;
  v3 = v1;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_MinuteZeroExperiences>::GetFeaturePropertyCache'::`2'::data,
    0x81AA4Au,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    3);
  return 1;
}
