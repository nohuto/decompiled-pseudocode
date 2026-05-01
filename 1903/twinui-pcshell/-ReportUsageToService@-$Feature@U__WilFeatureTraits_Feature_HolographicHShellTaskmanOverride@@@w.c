/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180011C68
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x180011BF8 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007FF38 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOver.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::GetFeaturePropertyCache'::`2'::data,
           9318646LL,
           &v5,
           1LL,
           3);
}
