/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign@@@wil@@SA_NXZ @ 0x18002E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180035500 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign@.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign>::IsEnabled()
{
  __int16 v1; // [rsp+44h] [rbp+Ch]
  int v2; // [rsp+48h] [rbp+10h] BYREF
  __int16 v3; // [rsp+4Ch] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 3;
  v2 = 0;
  v3 = v1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_AppDefaultsEdgeCoinCampaign>::GetFeaturePropertyCache'::`2'::data,
    0xD53A25u,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    1,
    3);
  return 1;
}
