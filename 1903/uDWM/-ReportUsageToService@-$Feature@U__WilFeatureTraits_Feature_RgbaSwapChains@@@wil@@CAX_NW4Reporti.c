/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002ECD8
 * Callers:
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18002E9EC (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002299C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004D380 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data,
    11786145LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
