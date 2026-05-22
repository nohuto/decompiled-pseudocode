/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18001D25C
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18001CCF4 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     ?ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ @ 0x180077A20 (-ShouldInjectViaSynthesize@ControllerProcessor@@AEAA_NXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001D2BC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001D4EC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_Onecore_Narrator_ConnectedTo_ISM>::GetFeaturePropertyCache'::`2'::data,
           18983602LL,
           &v5,
           1LL,
           3);
}
