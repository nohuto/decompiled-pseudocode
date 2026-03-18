/*
 * XREFs of ?Intersects@CLineSegment@@QEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18020D834
 * Callers:
 *     ?FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@@Z @ 0x18020D5AC (-FindOverlappingPoint@CVisualDepthGeometry@@AEBA_NAEBV1@PEAUfloat2@Numerics@Foundation@Windows@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLineSegment::Intersects(
        CLineSegment *this,
        const struct CLineSegment *a2,
        struct Windows::Foundation::Numerics::float2 *a3)
{
  __m128 v3; // xmm6
  float v4; // xmm5_4
  __m128 v5; // xmm7
  float v6; // xmm4_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm3_4
  bool result; // al

  v3 = (__m128)*((unsigned int *)this + 2);
  v4 = *((float *)this + 2) * *((float *)a2 + 3);
  *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v5 = (__m128)*((unsigned int *)this + 3);
  v6 = *((float *)this + 3) * *((float *)a2 + 2);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 - v6)) & _xmm);
  result = 0;
  if ( v7 >= 0.0000011920929 )
  {
    v8 = (float)((float)((float)(*(float *)a2 - *(float *)this) * *((float *)a2 + 3))
               - (float)((float)(*((float *)a2 + 1) - *((float *)this + 1)) * *((float *)a2 + 2)))
       / (float)(v4 - v6);
    v9 = (float)(*((float *)this + 1) - *((float *)a2 + 1)) * v3.m128_f32[0];
    v3.m128_f32[0] = (float)(v3.m128_f32[0] * v8) + *(float *)this;
    v10 = (float)((float)(*(float *)this - *(float *)a2) * v5.m128_f32[0]) - v9;
    v5.m128_f32[0] = (float)(v5.m128_f32[0] * v8) + *((float *)this + 1);
    v11 = v10 / (float)(v6 - v4);
    *(_QWORD *)a3 = _mm_unpacklo_ps(v3, v5).m128_u64[0];
    if ( v11 >= 0.0 && v11 <= 1.0 && v8 >= 0.0 && v8 <= 1.0 )
      return 1;
  }
  return result;
}
