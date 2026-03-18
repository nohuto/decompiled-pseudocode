/*
 * XREFs of ?TrimToStartAt@?$CBezier@MVCMilPoint2F@@@@QEAAXM@Z @ 0x180220968
 * Callers:
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x18021ED88 (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 *     ?TrimBetween@?$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z @ 0x180220778 (-TrimBetween@-$CBezier@MVCMilPoint2F@@@@QEAA_NMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBezier<float,CMilPoint2F>::TrimToStartAt(float *a1, float a2)
{
  float v2; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm5_4
  float v20; // xmm0_4
  float v21; // xmm1_4

  v2 = a2 * a1[3];
  v4 = 1.0 - a2;
  v5 = (float)(1.0 - a2) * a1[1];
  *a1 = (float)(a2 * a1[2]) + (float)((float)(1.0 - a2) * *a1);
  v6 = v2 + v5;
  a1[1] = v6;
  v7 = (float)(1.0 - a2) * a1[3];
  v8 = (float)((float)(1.0 - a2) * a1[2]) + (float)(a2 * a1[4]);
  v9 = v6 * (float)(1.0 - a2);
  v10 = a2 * a1[5];
  a1[2] = v8;
  v11 = v8 * a2;
  v12 = v7 + v10;
  a1[3] = v12;
  v13 = (float)(1.0 - a2) * a1[5];
  v14 = (float)(a2 * a1[6]) + (float)((float)(1.0 - a2) * a1[4]);
  v15 = a2 * a1[7];
  a1[4] = v14;
  v16 = (float)(v12 * a2) + v9;
  v17 = v13 + v15;
  a1[5] = v17;
  v18 = v4 * *a1;
  a1[1] = v16;
  v19 = v11 + v18;
  *a1 = v19;
  v20 = (float)(v4 * a1[2]) + (float)(v14 * a2);
  v21 = (float)(v4 * a1[3]) + (float)(v17 * a2);
  a1[2] = v20;
  a1[3] = v21;
  *a1 = (float)(v19 * v4) + (float)(v20 * a2);
  a1[1] = (float)(v21 * a2) + (float)(v16 * v4);
}
