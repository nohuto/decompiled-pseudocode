/*
 * XREFs of ?GetShapeTransformRealization@CProxyGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801F32F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BC3A0 (-GetShapeTransformRealization@CGeometry@@MEBAXPEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801FBAD0 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

void __fastcall CProxyGeometry::GetShapeTransformRealization(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  bool v3; // zf
  __int128 v4; // xmm2
  unsigned __int64 v6; // xmm3_8
  CViewBox *v9; // rcx
  __int64 v10; // xmm1_8
  D2D_SIZE_F v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h]
  struct D2D_MATRIX_3X2_F v14; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_MATRIX_3X2_F v15; // [rsp+58h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 9) == 0LL;
  v4 = _xmm;
  v6 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)&v15.m[2][0] = v6;
  *(_OWORD *)&v15.m11 = _xmm;
  if ( !v3 )
  {
    CGeometry::GetShapeTransformRealization(this, a2, &v15);
    v6 = *(_QWORD *)&v15.m[2][0];
    v4 = *(_OWORD *)&v15.m11;
  }
  v9 = (CViewBox *)*((_QWORD *)this + 18);
  if ( v9 )
  {
    v11 = 0LL;
    if ( a2 )
      v11 = *a2;
    CViewBox::GetRealization(v9, &v11, &v14);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v12,
      (const struct D2D1::Matrix3x2F *)&v14,
      (const struct D2D1::Matrix3x2F *)&v15);
    v10 = v13;
    *(_OWORD *)&a3->m11 = v12;
    *(_QWORD *)&a3->m[2][0] = v10;
  }
  else
  {
    *(_OWORD *)&a3->m11 = v4;
    *(_QWORD *)&a3->m[2][0] = v6;
  }
}
