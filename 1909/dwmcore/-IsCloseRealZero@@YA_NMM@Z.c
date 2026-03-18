/*
 * XREFs of ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C
 * Callers:
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000F4EC (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000F7A8 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000F930 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x180013E18 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUfloat2@Numerics@Foundation@Windows@@U2345@@Z.c)
 *     ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x1800154AC (-CalcMatrixEpsilonValue@@YA-AW4MatrixEpsilonValue@@M@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800502C4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800917D0 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EF8F0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x1801F0858 (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021BAB0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsCloseRealZero(float a1, float a2)
{
  return a2 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
}
