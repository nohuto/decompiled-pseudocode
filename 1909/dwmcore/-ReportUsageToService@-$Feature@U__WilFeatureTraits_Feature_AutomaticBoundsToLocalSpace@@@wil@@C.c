/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000E140
 * Callers:
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18000E0C8 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18000E0EC (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18000E11C (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000E204 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180077A14 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetFeaturePropertyCache'::`2'::data,
           16043029LL,
           &v5,
           0LL,
           3);
}
