/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066DF0
 * Callers:
 *     AudioServerGetMixFormat @ 0x180046A60 (AudioServerGetMixFormat.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800481A8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GetMixFormatForVSS@@@wil@@CA.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18005B568 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GetMixFormatForVSS>::GetFeaturePropertyCache'::`2'::data,
    16620264LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
