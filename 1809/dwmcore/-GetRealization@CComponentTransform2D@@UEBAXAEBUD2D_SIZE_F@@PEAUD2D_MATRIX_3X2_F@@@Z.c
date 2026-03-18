/*
 * XREFs of ?GetRealization@CComponentTransform2D@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180037250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __m128 v3; // xmm0
  __m128 v5; // xmm1
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  FLOAT v11; // xmm9_4
  float m12; // xmm2_4
  float m11; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  FLOAT v16; // xmm7_4
  __m128 v17; // xmm8
  float v18; // xmm4_4
  __m128 v19; // xmm6
  float v20; // xmm5_4
  FLOAT v21; // xmm3_4
  float m21; // xmm2_4
  FLOAT v23; // xmm3_4
  float v24; // xmm2_4
  __int64 v25; // xmm1_8
  __int64 v26; // xmm1_8
  D2D1_POINT_2F center; // [rsp+28h] [rbp-29h]
  __int128 v28; // [rsp+30h] [rbp-21h] BYREF
  __int64 v29; // [rsp+40h] [rbp-11h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+48h] [rbp-9h] BYREF

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
    v24 = *((float *)this + 45);
    matrix.m21 = 0.0;
    *(_QWORD *)&matrix.m11 = LODWORD(v7);
    matrix.m22 = v24;
    matrix.dx = v8 - (float)(v8 * v7);
    matrix.dy = v9 - (float)(v9 * v24);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v28,
      (const struct D2D1::Matrix3x2F *)a3,
      (const struct D2D1::Matrix3x2F *)&matrix);
    v25 = v29;
    *(_OWORD *)&a3->m11 = v28;
    *(_QWORD *)&a3->m[2][0] = v25;
  }
  v10 = *((float *)this + 46);
  if ( v10 != 0.0 )
  {
    D2D1MakeRotateMatrix(v10 * 57.295776, center, &matrix);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v28,
      (const struct D2D1::Matrix3x2F *)a3,
      (const struct D2D1::Matrix3x2F *)&matrix);
    v26 = v29;
    *(_OWORD *)&a3->m11 = v28;
    *(_QWORD *)&a3->m[2][0] = v26;
  }
  v11 = *((float *)this + 42) + a3->dx;
  m12 = a3->m12;
  m11 = a3->m11;
  v14 = m12;
  v15 = a3->m11;
  a3->dx = v11;
  v16 = *((float *)this + 43) + a3->dy;
  a3->dy = v16;
  v17 = (__m128)*((unsigned int *)this + 47);
  v18 = *((float *)this + 50);
  v19 = (__m128)*((unsigned int *)this + 48);
  v20 = *((float *)this + 49);
  v21 = (float)(m11 * v19.m128_f32[0]) + (float)(m12 * v18);
  m21 = a3->m21;
  matrix.m11 = (float)(v15 * v17.m128_f32[0]) + (float)(v14 * v20);
  matrix.m12 = v21;
  v23 = (float)(a3->m22 * v18) + (float)(m21 * v19.m128_f32[0]);
  matrix.m21 = (float)(m21 * v17.m128_f32[0]) + (float)(a3->m22 * v20);
  matrix.m22 = v23;
  v17.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v11) + (float)(v20 * v16)) + *((float *)this + 51);
  v19.m128_f32[0] = (float)((float)(v19.m128_f32[0] * v11) + (float)(v18 * v16)) + *((float *)this + 52);
  *(_OWORD *)&a3->m11 = *(_OWORD *)&matrix.m11;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(v17, v19).m128_u64[0];
}
