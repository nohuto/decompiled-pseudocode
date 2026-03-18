/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180046C28
 * Callers:
 *     ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x180046878 (--0CDrawingContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CPreComputeContext@@IEAA@PEAVCComposition@@PEAVCVisualTree@@@Z @ 0x1800EC034 (--0CPreComputeContext@@IEAA@PEAVCComposition@@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008AC50 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800AD1D0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA-AW.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetFeaturePropertyCache'::`2'::data,
           10769683LL,
           &v5,
           1LL,
           0);
}
