/*
 * XREFs of ?TrimToEndAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x18024E6EC
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18024CC00 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18024E648 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CBezier<float,CMilPoint2F>::TrimToEndAt(float *a1, float a2)
{
  _UNKNOWN **result; // rax
  float v4; // xmm7_4
  float v6; // xmm3_4
  float v7; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm4_4
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 1.0 - a2;
  v6 = (float)((float)(1.0 - a2) * a1[4]) + (float)(a2 * a1[6]);
  v7 = (float)(a2 * a1[7]) + (float)((float)(1.0 - a2) * a1[5]);
  a1[6] = v6;
  v9 = v6 * a2;
  a1[7] = v7;
  v10 = (float)(1.0 - a2) * a1[3];
  v11 = (float)(v4 * a1[2]) + (float)(a2 * a1[4]);
  v12 = v7 * a2;
  v13 = a2 * a1[5];
  a1[4] = v11;
  v14 = v10 + v13;
  v15 = (float)(v11 * v4) + v9;
  a1[5] = v14;
  v16 = v4 * a1[1];
  v17 = (float)(a2 * a1[2]) + (float)(v4 * *a1);
  v18 = a2 * a1[3];
  a1[6] = v15;
  v19 = v12 + (float)(v14 * v4);
  v20 = v16 + v18;
  a1[2] = v17;
  a1[7] = v19;
  a1[3] = v20;
  v21 = (float)(v17 * v4) + (float)(a2 * a1[4]);
  v22 = (float)(v20 * v4) + (float)(a2 * a1[5]);
  a1[4] = v21;
  a1[5] = v22;
  a1[6] = (float)(v15 * a2) + (float)(v21 * v4);
  a1[7] = (float)(v22 * v4) + (float)(v19 * a2);
  return result;
}
