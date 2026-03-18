/*
 * XREFs of ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000F930
 * Callers:
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000F4EC (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x18000F614 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009145C (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094470 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x1801F0858 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 * Callees:
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 */

char __fastcall D2DMatrixHelper::Is2DAxisAlignedPreserving(D2DMatrixHelper *this, const struct D2D_MATRIX_3X2_F *a2)
{
  float *v2; // rcx
  char v3; // al
  char v4; // dl
  char v5; // al
  char v6; // dl
  __int64 v7; // rcx
  char v8; // al

  if ( IsCloseRealZero(*((float *)this + 1), 0.000081380211) )
  {
    v3 = IsCloseRealZero(v2[2], 0.000081380211);
    if ( v3 != v4 )
      return 1;
  }
  v5 = IsCloseRealZero(*v2, 0.000081380211);
  if ( v5 != v6 )
  {
    v8 = IsCloseRealZero(*(float *)(v7 + 12), 0.000081380211);
    if ( v8 != v6 )
      return 1;
  }
  return v6;
}
