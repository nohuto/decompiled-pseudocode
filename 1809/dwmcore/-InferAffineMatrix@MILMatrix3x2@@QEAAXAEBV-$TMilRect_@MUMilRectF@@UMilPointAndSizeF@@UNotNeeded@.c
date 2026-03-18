/*
 * XREFs of ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800B17F8
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028330 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x1800B18C8 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801FE5DC (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  double v3; // xmm3_8
  float v4; // xmm0_4
  float v5; // xmm0_4
  double v6; // xmm3_8
  float v7; // xmm0_4

  *(_QWORD *)(a1 + 12) = 1065353216LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = 1065353216LL;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = (a3[2] - *a3) / (a2[2] - *a2);
  v4 = v3;
  *(float *)a1 = v4;
  v5 = *a3 - *a2 * v3;
  *(float *)(a1 + 16) = v5;
  v6 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v7 = v6;
  *(float *)(a1 + 12) = v7;
  *(float *)(a1 + 20) = a3[1] - a2[1] * v6;
}
