/*
 * XREFs of ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x180015524
 * Callers:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x1800154D4 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Matrix3x3::TransformHomogeneousPoint(float *a1, float *a2, __int64 a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float *result; // rax

  v3 = (float)((float)(*((float *)&a3 + 1) * a1[3]) + (float)(*(float *)&a3 * *a1)) + a1[6];
  v4 = (float)((float)(*((float *)&a3 + 1) * a1[4]) + (float)(*(float *)&a3 * a1[1])) + a1[7];
  v5 = (float)((float)(*((float *)&a3 + 1) * a1[5]) + (float)(*(float *)&a3 * a1[2])) + a1[8];
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  if ( v6 >= 0.000081380211 )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v5 - 1.0)) & _xmm);
    if ( v7 >= 0.000081380211 )
    {
      v3 = v3 / v5;
      v4 = v4 / v5;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v4;
  return result;
}
