/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004F934
 * Callers:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@SA_NXZ @ 0x18004F998 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@SA_NX.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002299C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004F7E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@w.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::ReportUsageToService(
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
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 2;
  v5 = 0;
  v6 = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2011c_29716884>::GetFeaturePropertyCache'::`2'::data,
    29716884LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    v3,
    3);
}
