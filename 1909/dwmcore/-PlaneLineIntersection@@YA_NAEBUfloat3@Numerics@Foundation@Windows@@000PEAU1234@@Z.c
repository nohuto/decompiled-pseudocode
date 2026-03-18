/*
 * XREFs of ?PlaneLineIntersection@@YA_NAEBUfloat3@Numerics@Foundation@Windows@@000PEAU1234@@Z @ 0x18020C344
 * Callers:
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1800072FC (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 *     ?FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundation@Windows@@PEAH@Z @ 0x18020BD04 (-FindIntersectionOfCornersAndLines@CVisualDepthGeometry@@AEBAXPEBV1@PEAUfloat3@Numerics@Foundati.c)
 * Callees:
 *     <none>
 */

char __fastcall PlaneLineIntersection(
        const struct Windows::Foundation::Numerics::float3 *a1,
        const struct Windows::Foundation::Numerics::float3 *a2,
        const struct Windows::Foundation::Numerics::float3 *a3,
        const struct Windows::Foundation::Numerics::float3 *a4,
        struct Windows::Foundation::Numerics::float3 *a5)
{
  __m128 v5; // xmm4
  __m128 v6; // xmm5
  float v7; // xmm6_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm6_4

  v5 = (__m128)*(unsigned int *)a4;
  v6 = (__m128)*((unsigned int *)a4 + 1);
  v7 = *((float *)a4 + 2);
  v8 = (float)((float)(*(float *)a4 * *(float *)a2) + (float)(*((float *)a2 + 1) * v6.m128_f32[0]))
     + (float)(*((float *)a2 + 2) * v7);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v8) & _xmm);
  if ( v9 < 0.0000011920929 )
    return 0;
  v11 = (float)((float)((float)((float)(*((float *)a1 + 1) - *((float *)a3 + 1)) * *((float *)a2 + 1))
                      + (float)((float)(*(float *)a1 - *(float *)a3) * *(float *)a2))
              + (float)((float)(*((float *)a1 + 2) - *((float *)a3 + 2)) * *((float *)a2 + 2)))
      / v8;
  v5.m128_f32[0] = (float)(v5.m128_f32[0] * v11) + *(float *)a3;
  v6.m128_f32[0] = (float)(v6.m128_f32[0] * v11) + *((float *)a3 + 1);
  v12 = (float)(v7 * v11) + *((float *)a3 + 2);
  *(_QWORD *)a5 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
  *((float *)a5 + 2) = v12;
  return 1;
}
