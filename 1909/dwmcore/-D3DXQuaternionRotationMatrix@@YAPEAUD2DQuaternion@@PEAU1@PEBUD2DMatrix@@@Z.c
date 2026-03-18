/*
 * XREFs of ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180009AF0
 * Callers:
 *     EncodeTBNFrameToQuaternion @ 0x180009850 (EncodeTBNFrameToQuaternion.c)
 *     ?QuaternionFromRotationMatrix@CExpressionValueStack@@QEAAJXZ @ 0x180202368 (-QuaternionFromRotationMatrix@CExpressionValueStack@@QEAAJXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022FAAC (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionRotationMatrix(struct D2DQuaternion *a1, const struct D2DMatrix *a2)
{
  float v3; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  float v14; // xmm0_4
  __int64 v15; // r8
  float v16[4]; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+34h] [rbp-24h]

  v3 = *((float *)a2 + 5);
  v5 = *((float *)a2 + 10);
  v6 = *(float *)a2 + v3;
  if ( (float)(v6 + v5) <= 0.0 )
  {
    v9 = *(float *)a2 - v3;
    v17 = 1;
    v10 = v3 - *(float *)a2;
    v11 = 2LL;
    v18 = 2LL;
    v16[0] = v9 - v5;
    v16[1] = v10 - v5;
    v16[2] = v5 - v6;
    if ( v16[(float)(v9 - v5) < (float)(v10 - v5)] >= (float)(v5 - v6) )
      v11 = (float)(v9 - v5) < (float)(v10 - v5);
    v12 = (unsigned int)v11;
    v13 = (unsigned int)*(&v17 + v11);
    v14 = sqrtf_0(v16[v11] + 1.0) * 0.5;
    v15 = (unsigned int)*(&v17 + v13);
    *((float *)a1 + v12) = v14;
    *((float *)a1 + v13) = (float)(*((float *)a2 + 4 * v12 + v13) + *((float *)a2 + 4 * v13 + v12))
                         * (float)(0.25 / v14);
    *((float *)a1 + v15) = (float)(*((float *)a2 + 4 * v12 + v15) + *((float *)a2 + 4 * v15 + v12))
                         * (float)(0.25 / v14);
    *((float *)a1 + 3) = (float)(*((float *)a2 + 4 * v13 + v15) - *((float *)a2 + 4 * v15 + v13)) * (float)(0.25 / v14);
  }
  else
  {
    v7 = sqrtf_0((float)(v6 + v5) + 1.0) * 0.5;
    *((float *)a1 + 3) = v7;
    *(float *)a1 = (float)(*((float *)a2 + 6) - *((float *)a2 + 9)) * (float)(0.25 / v7);
    *((float *)a1 + 1) = (float)(*((float *)a2 + 8) - *((float *)a2 + 2)) * (float)(0.25 / v7);
    *((float *)a1 + 2) = (float)(*((float *)a2 + 1) - *((float *)a2 + 4)) * (float)(0.25 / v7);
  }
  return a1;
}
