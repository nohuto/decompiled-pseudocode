/*
 * XREFs of ?GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x18007BF10
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180042F64 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 */

__int64 ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetContentByIdAsync()
{
  int v1; // [rsp+30h] [rbp-18h] BYREF
  __int16 v2; // [rsp+34h] [rbp-14h]
  __int64 v3; // [rsp+38h] [rbp-10h]
  __int16 v4; // [rsp+6Ch] [rbp+24h]

  v3 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v1 = 0;
  v2 = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data,
    0x7EA375u,
    (const struct FEATURE_LOGGED_TRAITS *)&v1,
    1,
    3);
  return 2147500033LL;
}
