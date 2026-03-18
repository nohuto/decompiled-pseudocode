/*
 * XREFs of ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180038570 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180039AF0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003C400 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800669C0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18007D530 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180096170 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EE5A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF1A0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C1400 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D115C (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x18021B1A0 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18025197C (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

void __fastcall CMILMatrix::Get2DScaleDimensions(CMILMatrix *this, float *a2, float *a3)
{
  float v6; // xmm6_4
  float v7; // xmm0_4

  v6 = sqrtf_0((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)));
  v7 = sqrtf_0((float)(*((float *)this + 4) * *((float *)this + 4)) + (float)(*((float *)this + 5) * *((float *)this + 5)));
  *a2 = v6;
  *a3 = v7;
}
