/*
 * XREFs of ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180010D24
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180010230 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180010D6C (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18022A33C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  const struct D2D_MATRIX_3X2_F *v8; // rdx
  D2DMatrixHelper *v9; // rcx
  float *v10; // r8
  float *v11; // r9
  float v12; // xmm2_4
  float v13; // xmm0_4
  unsigned __int64 v14; // xmm1_8
  struct D2D_MATRIX_3X2_F *v15; // [rsp+20h] [rbp-28h]
  __int128 v16; // [rsp+20h] [rbp-28h]

  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(this, a2, a3, a4, v15) )
  {
    D2DMatrixHelper::GetScaleDimensions(v9, v8, v10, v11);
    v12 = 1.0 / *a3;
    v13 = 1.0 / a2->m11;
    *((float *)&v16 + 1) = v13 * *((float *)this + 1);
    *(float *)&v16 = v13 * *(float *)this;
    *((float *)&v16 + 2) = v12 * *((float *)this + 2);
    *((float *)&v16 + 3) = v12 * *((float *)this + 3);
    v14 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 4), (__m128)*((unsigned int *)this + 5)).m128_u64[0];
    *(_OWORD *)a4 = v16;
    *((_QWORD *)a4 + 2) = v14;
  }
}
