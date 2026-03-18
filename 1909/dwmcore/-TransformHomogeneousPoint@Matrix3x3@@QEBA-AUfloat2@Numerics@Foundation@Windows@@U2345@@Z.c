/*
 * XREFs of ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x180013E18
 * Callers:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180013DC8 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 * Callees:
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 */

float *__fastcall Matrix3x3::TransformHomogeneousPoint(float *a1, __int64 a2, __int64 a3)
{
  float v3; // xmm3_4
  float *v4; // rdx
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v7; // xmm5_4
  float *result; // rax

  v3 = (float)((float)(*((float *)&a3 + 1) * a1[3]) + (float)(*(float *)&a3 * *a1)) + a1[6];
  if ( !IsCloseRealZero(
          (float)((float)(*((float *)&a3 + 1) * a1[5]) + (float)(*(float *)&a3 * a1[2])) + a1[8],
          0.000081380211)
    && !IsCloseRealOne(v6, 0.000081380211) )
  {
    v3 = v3 / v7;
    v5 = v5 / v7;
  }
  *v4 = v3;
  result = v4;
  v4[1] = v5;
  return result;
}
