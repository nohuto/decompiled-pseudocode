/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800C5CA0
 * Callers:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800C61F8 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@SA_NW4Repor.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800C555C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_BrowserReplacement@@@wil@@CA.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int8 v3; // bl
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  v3 = a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 2;
  v5 = 0;
  v6 = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_BrowserReplacement>::GetFeaturePropertyCache'::`2'::data,
    0x142FEC4u,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    v3,
    0);
}
