/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180012780
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800125F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180250550 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180013108 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CA-AW.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180077A14 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::GetFeaturePropertyCache'::`2'::data,
           18368047LL,
           &v5,
           0LL,
           3);
}
