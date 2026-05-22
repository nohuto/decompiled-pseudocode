/*
 * XREFs of ST::mult_Ax_3x3_float_ @ 0x18016A358
 * Callers:
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x180169E24 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18016A020 (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ST::mult_ABt_3x3x3_float_ @ 0x18016A274 (ST--mult_ABt_3x3x3_float_.c)
 * Callees:
 *     <none>
 */

void __fastcall ST::mult_Ax_3x3_float_(float *a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm4_4
  float v5; // xmm6_4
  float v6; // xmm1_4
  float v7; // xmm2_4

  v3 = a3[2];
  v4 = v3 * a2[2];
  v5 = (float)(a3[1] * a2[1]) + (float)(*a3 * *a2);
  v6 = v3 * a2[8];
  v7 = (float)(a3[1] * a2[7]) + (float)(*a3 * a2[6]);
  a1[1] = (float)((float)(a3[1] * a2[4]) + (float)(*a3 * a2[3])) + (float)(a3[2] * a2[5]);
  *a1 = v5 + v4;
  a1[2] = v7 + v6;
}
