/*
 * XREFs of ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NXZ @ 0x1801F0858
 * Callers:
 *     ?ComputeShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801EEA9C (-ComputeShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000F930 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x1801F1008 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 */

char __fastcall CProjectedShadow::IsShadowAxisAlignedRectToReceiver(CProjectedShadow *this)
{
  bool IsRectangular; // al
  char v3; // r8
  char v4; // al
  char v5; // al
  const struct D2D_MATRIX_3X2_F *v6; // rdx
  int v7; // xmm1_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  char v12; // al
  _DWORD v14[6]; // [rsp+20h] [rbp-28h] BYREF

  IsRectangular = CProjectedShadowCaster::IsRectangular(*((CProjectedShadowCaster **)this + 8));
  v3 = 0;
  if ( IsRectangular )
  {
    v4 = IsCloseRealZero(*((float *)this + 43), 0.000081380211);
    if ( v4 != v3 )
    {
      v5 = IsCloseRealZero(*((float *)this + 46), 0.000081380211);
      if ( v5 != v3 )
      {
        v7 = *((_DWORD *)this + 42);
        v14[0] = *((_DWORD *)this + 41);
        v8 = *((_DWORD *)this + 44);
        v14[1] = v7;
        v9 = *((_DWORD *)this + 45);
        v14[2] = v8;
        v10 = *((_DWORD *)this + 47);
        v14[3] = v9;
        v11 = *((_DWORD *)this + 48);
        v14[4] = v10;
        v14[5] = v11;
        v12 = D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)v14, v6);
        if ( v12 != v3 )
          return 1;
      }
    }
  }
  return v3;
}
