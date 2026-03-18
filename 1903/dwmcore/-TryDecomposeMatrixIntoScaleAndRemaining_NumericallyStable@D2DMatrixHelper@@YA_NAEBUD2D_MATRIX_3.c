/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180010D6C
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180010D24 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001113C (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float *v4; // rdx
  __int64 v5; // rcx
  float *v6; // r8
  __int64 v7; // r9
  float v8; // xmm4_4
  float v9; // xmm0_4
  bool v10; // cc
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2) )
    return 0;
  *(_OWORD *)v7 = *(_OWORD *)v5;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v5 + 16);
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v5) & _xmm);
  if ( v8 >= 0.000081380211
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v5 + 12)) & _xmm), v12 >= 0.000081380211) )
  {
    *v4 = v8;
    *v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v5 + 12)) & _xmm);
    if ( *(float *)v7 < 0.0 )
      v9 = FLOAT_N1_0;
    else
      v9 = *(float *)&FLOAT_1_0;
    v10 = *(float *)(v7 + 12) >= 0.0;
    *(float *)v7 = v9;
    if ( v10 )
      *(_DWORD *)(v7 + 12) = 1065353216;
    else
      *(_DWORD *)(v7 + 12) = -1082130432;
  }
  else
  {
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v5 + 4)) & _xmm);
    *v4 = v13;
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v5 + 8)) & _xmm);
    *v6 = v14;
    v15 = FLOAT_N1_0;
    if ( *(float *)(v7 + 4) >= 0.0 )
      v16 = *(float *)&FLOAT_1_0;
    else
      v16 = FLOAT_N1_0;
    *(float *)(v7 + 4) = v16;
    if ( *(float *)(v7 + 8) >= 0.0 )
      v15 = *(float *)&FLOAT_1_0;
    *(float *)(v7 + 8) = v15;
  }
  return 1;
}
