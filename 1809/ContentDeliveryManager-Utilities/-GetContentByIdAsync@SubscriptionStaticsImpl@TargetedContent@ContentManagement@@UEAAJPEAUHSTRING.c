/*
 * XREFs of ?GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x18007A310
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041D24 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 */

__int64 ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetContentByIdAsync()
{
  int v1; // [rsp+20h] [rbp-18h] BYREF
  __int16 v2; // [rsp+24h] [rbp-14h]
  __int64 v3; // [rsp+28h] [rbp-10h]
  __int16 v4; // [rsp+5Ch] [rbp+24h]

  v3 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v1 = 0;
  v2 = v4;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data,
    0x7EA375u,
    (const struct FEATURE_LOGGED_TRAITS *)&v1,
    3);
  return 2147500033LL;
}
