/*
 * XREFs of ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x180229574
 * Callers:
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801E580C (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?Vector3Cross@CExpressionValueStack@@QEAAJXZ @ 0x180204DB8 (-Vector3Cross@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector3 *__fastcall D3DXVec3Cross(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3)
{
  __m128 v3; // xmm4
  __m128 v4; // xmm3
  float v6; // [rsp+8h] [rbp-10h]

  v3 = (__m128)*((unsigned int *)a3 + 2);
  v4 = (__m128)*(unsigned int *)a3;
  v3.m128_f32[0] = (float)(v3.m128_f32[0] * *((float *)a2 + 1)) - (float)(*((float *)a3 + 1) * *((float *)a2 + 2));
  v4.m128_f32[0] = (float)(v4.m128_f32[0] * *((float *)a2 + 2)) - (float)(*(float *)a2 * *((float *)a3 + 2));
  v6 = (float)(*(float *)a2 * *((float *)a3 + 1)) - (float)(*(float *)a3 * *((float *)a2 + 1));
  *(_QWORD *)a1 = _mm_unpacklo_ps(v3, v4).m128_u64[0];
  *((float *)a1 + 2) = v6;
  return a1;
}
