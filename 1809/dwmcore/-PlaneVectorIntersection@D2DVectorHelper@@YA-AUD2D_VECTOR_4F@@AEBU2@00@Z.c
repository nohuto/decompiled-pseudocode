/*
 * XREFs of ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801BFDD8
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BE678 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_VECTOR_4F *__fastcall D2DVectorHelper::PlaneVectorIntersection(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        __m128 *a3,
        const struct D2D_VECTOR_4F *a4)
{
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm11_4
  float z; // xmm13_4
  float w; // xmm14_4
  float v10; // xmm5_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm9_4
  unsigned int v17; // xmm10_4
  unsigned int v18; // xmm11_4
  __m128 v19; // xmm0
  struct D2D_VECTOR_4F *result; // rax
  __m128 v21; // [rsp+8h] [rbp-49h]
  __m128 v22; // [rsp+8h] [rbp-49h]

  v4 = a3->m128_f32[0];
  v5 = a3->m128_f32[1];
  v6 = a3->m128_f32[2];
  v7 = a3->m128_f32[3];
  v21.m128_f32[0] = a4->x - a3->m128_f32[0];
  v21.m128_f32[1] = a4->y - v5;
  z = retstr->z;
  w = retstr->w;
  v21.m128_f32[2] = a4->z - v6;
  v21.m128_f32[3] = a4->w - v7;
  v10 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
  v11 = _mm_shuffle_ps(v21, v21, 170).m128_f32[0];
  v12 = _mm_shuffle_ps(v21, v21, 255).m128_f32[0];
  v13 = (float)((float)((float)(retstr->y * v10) + (float)(retstr->x * v21.m128_f32[0])) + (float)(z * v11))
      + (float)(w * v12);
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v13) & _xmm);
  if ( v14 < 0.0000011920929 )
  {
    v19 = *a3;
  }
  else
  {
    v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(retstr->y * v5) + (float)(retstr->x * v4)) + (float)(z * v6))
                       + (float)(w * v7)) ^ _xmm)
        / v13;
    v22.m128_f32[0] = v21.m128_f32[0] * v15;
    v22.m128_f32[1] = v10 * v15;
    v22.m128_f32[2] = v11 * v15;
    v22.m128_f32[3] = v12 * v15;
    v16 = v5 + _mm_shuffle_ps(v22, v22, 85).m128_f32[0];
    *(float *)&v17 = v6 + _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
    *(float *)&v18 = v7 + _mm_shuffle_ps(v22, v22, 255).m128_f32[0];
    v22.m128_f32[0] = v4 + v22.m128_f32[0];
    v22.m128_f32[1] = v16;
    v22.m128_u64[1] = __PAIR64__(v18, v17);
    v19 = v22;
  }
  result = this;
  *this = (struct D2D_VECTOR_4F)v19;
  return result;
}
