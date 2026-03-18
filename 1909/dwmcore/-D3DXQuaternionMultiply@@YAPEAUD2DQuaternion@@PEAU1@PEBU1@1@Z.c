/*
 * XREFs of ?D3DXQuaternionMultiply@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1@Z @ 0x1802278AC
 * Callers:
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x180094150 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1800943D0 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x1801FED64 (-Concatenate@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DQuaternion *__fastcall D3DXQuaternionMultiply(
        struct D2DQuaternion *a1,
        const struct D2DQuaternion *a2,
        const struct D2DQuaternion *a3)
{
  float v3; // xmm4_4
  float v4; // xmm7_4
  float v5; // xmm8_4
  float v6; // xmm10_4
  float v7; // xmm1_4
  struct D2DQuaternion *result; // rax
  __int128 v9; // [rsp+0h] [rbp-58h]

  v3 = *((float *)a3 + 3);
  v4 = *((float *)a2 + 1);
  v5 = *((float *)a3 + 2);
  v6 = *((float *)a2 + 3);
  *(float *)&v9 = (float)((float)((float)(*(float *)a3 * v6) + (float)(*(float *)a2 * v3))
                        + (float)(*((float *)a3 + 1) * *((float *)a2 + 2)))
                - (float)(v5 * v4);
  v7 = *((float *)a3 + 1);
  *((float *)&v9 + 1) = (float)((float)((float)(v4 * v3) - (float)(*((float *)a2 + 2) * *(float *)a3)) + (float)(v7 * v6))
                      + (float)(v5 * *(float *)a2);
  *((float *)&v9 + 2) = (float)((float)((float)(v4 * *(float *)a3) + (float)(*((float *)a2 + 2) * v3))
                              - (float)(v7 * *(float *)a2))
                      + (float)(v5 * v6);
  *((float *)&v9 + 3) = (float)((float)((float)(v6 * v3) - (float)(*(float *)a3 * *(float *)a2)) - (float)(v4 * v7))
                      - (float)(v5 * *((float *)a2 + 2));
  result = a1;
  *(_OWORD *)a1 = v9;
  return result;
}
