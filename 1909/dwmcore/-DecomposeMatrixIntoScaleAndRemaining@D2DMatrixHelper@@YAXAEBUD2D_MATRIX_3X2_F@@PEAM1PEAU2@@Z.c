/*
 * XREFs of ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000F4A4
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000F050 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000F4EC (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180228C2C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  D2DMatrixHelper *v8; // rcx
  float *v9; // r8
  float *v10; // r9
  float v11; // xmm2_4
  float v12; // xmm0_4
  unsigned __int64 v13; // xmm1_8
  struct D2D_MATRIX_3X2_F *v14; // [rsp+20h] [rbp-28h]
  __int128 v15; // [rsp+20h] [rbp-28h]

  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(this, a2, a3, a4, v14) )
  {
    D2DMatrixHelper::GetScaleDimensions(v8, a2, v9, v10);
    v11 = 1.0 / *a3;
    v12 = 1.0 / a2->m11;
    *((float *)&v15 + 1) = v12 * *((float *)this + 1);
    *(float *)&v15 = v12 * *(float *)this;
    *((float *)&v15 + 2) = v11 * *((float *)this + 2);
    *((float *)&v15 + 3) = v11 * *((float *)this + 3);
    v13 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 4), (__m128)*((unsigned int *)this + 5)).m128_u64[0];
    *(_OWORD *)a4 = v15;
    *((_QWORD *)a4 + 2) = v13;
  }
}
