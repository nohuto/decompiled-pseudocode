/*
 * XREFs of ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18022992C
 * Callers:
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801E5EEC (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 *     ?Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ @ 0x180205114 (-Vector3TransformNormal@CExpressionValueStack@@QEAAJXZ.c)
 *     _lambda_19d6a25917fce60deaaad219aba787fd_::operator() @ 0x1802214EC (_lambda_19d6a25917fce60deaaad219aba787fd_--operator().c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3TransformNormal(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  __m128 v3; // xmm5
  __m128 v4; // xmm2
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // eax

  v3 = (__m128)*((unsigned int *)a2 + 1);
  v4 = (__m128)*(unsigned int *)a2;
  v5 = v4.m128_f32[0] * *((float *)a3 + 2);
  v6 = *((float *)a2 + 1);
  v3.m128_f32[0] = (float)((float)(v3.m128_f32[0] * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
                 + (float)(*((float *)a2 + 2) * *((float *)a3 + 8));
  v4.m128_f32[0] = (float)((float)(v4.m128_f32[0] * *((float *)a3 + 1)) + (float)(v6 * *((float *)a3 + 5)))
                 + (float)(*((float *)a2 + 2) * *((float *)a3 + 9));
  v7 = (float)(v5 + (float)(v6 * *((float *)a3 + 6))) + (float)(*((float *)a2 + 2) * *((float *)a3 + 10));
  *(_QWORD *)a1 = _mm_unpacklo_ps(v3, v4).m128_u64[0];
  *((float *)a1 + 2) = v7;
  return a1;
}
