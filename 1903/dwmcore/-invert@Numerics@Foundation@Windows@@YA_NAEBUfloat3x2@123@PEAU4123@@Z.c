/*
 * XREFs of ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat3x2@123@PEAU4123@@Z @ 0x1801EF054
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EE158 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::invert(
        Windows::Foundation::Numerics *this,
        const struct Windows::Foundation::Numerics::float3x2 *a2,
        struct Windows::Foundation::Numerics::float3x2 *a3)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  bool result; // al
  __m128 v6; // xmm2
  unsigned __int64 v7; // xmm1_8
  __m128 v8; // xmm3
  __m128 v9; // xmm2
  float v10; // xmm0_4
  __m128 v11; // [rsp+0h] [rbp-28h]

  v3 = (float)(*(float *)this * *((float *)this + 3)) - (float)(*((float *)this + 1) * *((float *)this + 2));
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
  if ( v4 >= 0.00000011920929 )
  {
    result = 1;
    v8 = (__m128)*((unsigned int *)this + 4);
    v11.m128_f32[0] = *((float *)this + 3) * (float)(1.0 / v3);
    v11.m128_i32[1] = COERCE_UNSIGNED_INT(*((float *)this + 1) * (float)(1.0 / v3)) ^ _xmm;
    v9 = (__m128)*((unsigned int *)this + 5);
    v11.m128_i32[2] = COERCE_UNSIGNED_INT(*((float *)this + 2) * (float)(1.0 / v3)) ^ _xmm;
    v11.m128_f32[3] = *(float *)this * (float)(1.0 / v3);
    v10 = v8.m128_f32[0] * *((float *)this + 3);
    v8.m128_f32[0] = (float)((float)(v8.m128_f32[0] * *((float *)this + 1))
                           - (float)(*((float *)this + 5) * *(float *)this))
                   * (float)(1.0 / v3);
    v9.m128_f32[0] = (float)((float)(v9.m128_f32[0] * *((float *)this + 2)) - v10) * (float)(1.0 / v3);
    v7 = _mm_unpacklo_ps(v9, v8).m128_u64[0];
  }
  else
  {
    result = 0;
    v6 = _mm_shuffle_ps(DirectX::g_XMQNaN, DirectX::g_XMQNaN, 0);
    v7 = _mm_unpacklo_ps(v6, v6).m128_u64[0];
    v11 = v6;
  }
  *(__m128 *)a2 = v11;
  *((_QWORD *)a2 + 2) = v7;
  return result;
}
