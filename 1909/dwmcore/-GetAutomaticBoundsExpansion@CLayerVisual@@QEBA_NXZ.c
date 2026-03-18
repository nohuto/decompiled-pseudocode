/*
 * XREFs of ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18000E11C
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000CE08 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18000D464 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D75C (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x18000DDB0 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180082C60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800BB4A0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800ECDA0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18000E140 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@C.c)
 */

bool __fastcall CLayerVisual::GetAutomaticBoundsExpansion(CLayerVisual *this)
{
  wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsageToService();
  return *((_BYTE *)this + 576) != 0;
}
