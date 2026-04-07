/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002BE00
 * Callers:
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18002BB14 (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18004AEBC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  return wil::details::ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data,
           11786145LL,
           &v5,
           0LL,
           3);
}
