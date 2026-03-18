/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000F4EC
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000F4A4 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000F930 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 */

bool __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // r9
  float *v7; // rcx
  float *v8; // r8
  float *v9; // r9
  float *v10; // r10
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  bool v15; // cc
  float v16; // xmm0_4
  float v17; // xmm0_4

  result = D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2);
  if ( result )
  {
    *(_OWORD *)v6 = *(_OWORD *)v5;
    *(_QWORD *)(v6 + 16) = *(_QWORD *)(v5 + 16);
    if ( IsCloseRealZero(*(float *)v5, 0.000081380211) && IsCloseRealZero(v7[3], 0.000081380211) )
    {
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7[1]) & _xmm);
      *v10 = v11;
      v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7[2]) & _xmm);
      *v8 = v12;
      v13 = FLOAT_N1_0;
      if ( v9[1] >= 0.0 )
        v14 = *(float *)&FLOAT_1_0;
      else
        v14 = FLOAT_N1_0;
      v15 = v9[2] >= 0.0;
      v9[1] = v14;
      if ( v15 )
        v13 = *(float *)&FLOAT_1_0;
      v9[2] = v13;
    }
    else
    {
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v7) & _xmm);
      *v10 = v16;
      *v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7[3]) & _xmm);
      if ( *v9 >= 0.0 )
        v17 = *(float *)&FLOAT_1_0;
      else
        v17 = FLOAT_N1_0;
      v15 = v9[3] >= 0.0;
      *v9 = v17;
      if ( v15 )
        v9[3] = 1.0;
      else
        v9[3] = -1.0;
    }
    return 1;
  }
  return result;
}
