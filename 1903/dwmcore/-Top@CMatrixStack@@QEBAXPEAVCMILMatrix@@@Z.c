/*
 * XREFs of ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180012040 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x180012458 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180014584 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180015A98 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18005164C (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180051700 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180052440 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180053120 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18005AC60 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180070D54 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079C90 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18007A9BC (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009A820 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18016C52C (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180170E14 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18017192C (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019BE44 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D28CC (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801D30F0 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020E5EC (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020E7C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215040 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     TryFillRenderState @ 0x180251E48 (TryFillRenderState.c)
 * Callees:
 *     <none>
 */

void __fastcall CMatrixStack::Top(CMatrixStack *this, struct CMILMatrix *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( *(_DWORD *)this )
  {
    v3 = (unsigned int)(*(_DWORD *)this - 1);
    v4 = *((_QWORD *)this + 2);
    *(_OWORD *)a2 = *(_OWORD *)(68 * v3 + v4);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(68 * v3 + v4 + 16);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(68 * v3 + v4 + 32);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(68 * v3 + v4 + 48);
    *((_DWORD *)a2 + 16) = *(_DWORD *)(68 * v3 + v4 + 64);
  }
  else
  {
    *(_OWORD *)a2 = _xmm;
    *((_WORD *)a2 + 32) = 32085;
    *((_OWORD *)a2 + 1) = _xmm;
    *((_OWORD *)a2 + 2) = _xmm;
    *((_OWORD *)a2 + 3) = _xmm;
  }
}
