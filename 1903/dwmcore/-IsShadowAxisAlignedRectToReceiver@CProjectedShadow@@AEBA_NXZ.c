/*
 * XREFs of ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x1801F1FE8
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801F020C (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001113C (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801F2798 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 */

bool __fastcall CProjectedShadow::IsShadowAxisAlignedRectToReceiver(CProjectedShadowCaster **this)
{
  bool IsRectangular; // al
  const struct D2D_MATRIX_3X2_F *v3; // rdx
  float v4; // xmm1_4
  float v5; // xmm1_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  char v11; // al
  _DWORD v13[6]; // [rsp+20h] [rbp-28h] BYREF

  IsRectangular = CProjectedShadowCaster::IsRectangular(this[8]);
  LOBYTE(v3) = 0;
  if ( IsRectangular )
  {
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 43)) & _xmm);
    if ( v4 < 0.000081380211 )
    {
      v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 46)) & _xmm);
      if ( v5 < 0.000081380211 )
      {
        v6 = *((_DWORD *)this + 42);
        v13[0] = *((_DWORD *)this + 41);
        v7 = *((_DWORD *)this + 44);
        v13[1] = v6;
        v8 = *((_DWORD *)this + 45);
        v13[2] = v7;
        v9 = *((_DWORD *)this + 47);
        v13[3] = v8;
        v10 = *((_DWORD *)this + 48);
        v13[4] = v9;
        v13[5] = v10;
        v11 = D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v13, v3);
        if ( v11 != (_BYTE)v3 )
          LOBYTE(v3) = 1;
      }
    }
  }
  return (char)v3;
}
