/*
 * XREFs of ?GetSubscriptionAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@78@@Z @ 0x18007A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041D24 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetSubscriptionAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int16 v6; // [rsp+24h] [rbp-14h]
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int16 v8; // [rsp+5Ch] [rbp+24h]

  v7 = -2LL;
  *a4 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState();
  LOBYTE(v8) = 3;
  v5 = 0;
  v6 = v8;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data,
    0x7EA375u,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    3);
  return 2147500033LL;
}
