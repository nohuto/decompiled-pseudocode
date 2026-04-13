/*
 * XREFs of ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x18009D550
 * Callers:
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x18009D898 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x18009D9F8 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180041D24 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 */

LPCWCH __fastcall CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(
        LPCWCH lpString1,
        const wchar_t *a2)
{
  char v2; // si
  const wchar_t near *const *v4; // rbx
  __int16 v6; // [rsp+64h] [rbp+1Ch]
  int v7; // [rsp+68h] [rbp+20h] BYREF
  __int16 v8; // [rsp+6Ch] [rbp+24h]

  v2 = (char)a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState();
  LOBYTE(v6) = 3;
  v7 = 0;
  v8 = v6;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetFeaturePropertyCache'::`2'::data,
    0x7EA375u,
    (const struct FEATURE_LOGGED_TRAITS *)&v7,
    3);
  v4 = &off_1800F1990;
  while ( CompareStringOrdinal(lpString1, -1, *v4, -1, 1) != 2 )
  {
    v4 += 3;
    if ( v4 == &off_1800F1B58 )
      return lpString1;
  }
  if ( v2 )
    return (LPCWCH)*((_QWORD *)v4 + 1);
  else
    return (LPCWCH)*((_QWORD *)v4 + 2);
}
