/*
 * XREFs of ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x18024E838
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18024CC00 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x18024E648 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBezier<float,CMilPoint2F>::TrimToStartAt(float *a1, float a2)
{
  float v2; // xmm5_4
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm1_4

  v2 = a2 * a1[3];
  v4 = 1.0 - a2;
  v5 = (float)(1.0 - a2) * a1[1];
  *a1 = (float)((float)(1.0 - a2) * *a1) + (float)(a2 * a1[2]);
  v6 = v2 + v5;
  a1[1] = v6;
  v7 = a2 * a1[5];
  v8 = (float)(a2 * a1[4]) + (float)((float)(1.0 - a2) * a1[2]);
  v9 = v6 * (float)(1.0 - a2);
  v10 = (float)(1.0 - a2) * a1[3];
  a1[2] = v8;
  v11 = v8 * a2;
  v12 = v7 + v10;
  a1[3] = v12;
  v13 = (float)(1.0 - a2) * a1[4];
  v14 = a2 * a1[6];
  v15 = a2 * a1[7];
  v16 = v14 + v13;
  v17 = v4 * a1[5];
  a1[4] = v16;
  v18 = v9 + (float)(v12 * a2);
  a1[5] = v15 + v17;
  *a1 = v11 + (float)(v4 * *a1);
  a1[1] = v18;
  v19 = a2 * a1[5];
  v20 = (float)(a2 * a1[4]) + (float)(v4 * a1[2]);
  v21 = v4 * a1[3];
  a1[2] = v20;
  v22 = v19 + v21;
  a1[3] = v22;
  *a1 = (float)(v20 * a2) + (float)(v4 * *a1);
  a1[1] = (float)(v18 * v4) + (float)(v22 * a2);
}
