/*
 * XREFs of ceilf_0 @ 0x1800EFFF7
 * Callers:
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800143EC (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18002F22C (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180037760 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F790 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z @ 0x18005F4A0 (-DiscardRectangle@CHwDisplayRenderTarget@@UEAAXAEBUMilRectF@@@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18005F5E8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18008DF04 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800984E0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800AB640 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800ABC60 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1800AC0B0 (-Add@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800C22F8 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162930 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180176B28 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     TryFillRenderState @ 0x180178338 (TryFillRenderState.c)
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x18019CBD4 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801C4580 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?Ceil@CExpressionValueStack@@QEAAJXZ @ 0x1801CDF18 (-Ceil@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x1801D2A6C (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1801FFCF0 (-IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl ceilf_0(float X)
{
  return ceilf(X);
}
