/*
 * XREFs of ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18008E800
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __m128 v3; // xmm0
  __m128 v5; // xmm1
  float v7; // xmm6_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  __int64 v11; // xmm1_8
  float v12; // xmm2_4
  __int64 v13; // xmm1_8
  __int64 v14; // xmm1_8
  D2D1_POINT_2F center; // [rsp+20h] [rbp-58h]
  __int128 v16; // [rsp+28h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+40h] [rbp-38h] BYREF

  v3 = (__m128)*((unsigned int *)this + 38);
  v5 = (__m128)*((unsigned int *)this + 39);
  v3.m128_f32[0] = v3.m128_f32[0] * a2->width;
  v5.m128_f32[0] = v5.m128_f32[0] * a2->height;
  *(_OWORD *)&a3->m11 = _xmm;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(_mm_xor_ps(v3, (__m128)_xmm), _mm_xor_ps(v5, (__m128)_xmm)).m128_u64[0];
  v7 = *((float *)this + 44);
  v8 = *((float *)this + 40);
  v9 = *((float *)this + 41);
  center = (D2D1_POINT_2F)__PAIR64__(LODWORD(v9), LODWORD(v8));
  if ( v7 != 1.0 || *((float *)this + 45) != 1.0 )
  {
    v12 = *((float *)this + 45);
    matrix.m11 = *((FLOAT *)this + 44);
    *(_QWORD *)&matrix.m[0][1] = 0LL;
    matrix.m22 = v12;
    matrix.dx = v8 - (float)(v8 * v7);
    matrix.dy = v9 - (float)(v9 * v12);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v16,
      (const struct D2D1::Matrix3x2F *)a3,
      (const struct D2D1::Matrix3x2F *)&matrix);
    v13 = v17;
    *(_OWORD *)&a3->m11 = v16;
    *(_QWORD *)&a3->m[2][0] = v13;
  }
  v10 = *((float *)this + 46);
  if ( v10 != 0.0 )
  {
    D2D1MakeRotateMatrix(v10 * 57.295776, center, &matrix);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v16,
      (const struct D2D1::Matrix3x2F *)a3,
      (const struct D2D1::Matrix3x2F *)&matrix);
    v14 = v17;
    *(_OWORD *)&a3->m11 = v16;
    *(_QWORD *)&a3->m[2][0] = v14;
  }
  a3->dx = *((float *)this + 42) + a3->dx;
  a3->dy = *((float *)this + 43) + a3->dy;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v16,
    (const struct D2D1::Matrix3x2F *)a3,
    (CComponentTransform2D *)((char *)this + 188));
  v11 = v17;
  *(_OWORD *)&a3->m11 = v16;
  *(_QWORD *)&a3->m[2][0] = v11;
}
