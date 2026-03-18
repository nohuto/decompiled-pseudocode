/*
 * XREFs of ?InverseTransformPoint@@YA?AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F34B0
 * Callers:
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C00F35B0 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InverseTransformPoint(float *a1, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm4_4
  float v9; // xmm8_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  __int64 v14; // [rsp+50h] [rbp+8h]

  v2 = a2[7];
  v3 = a1[1];
  v4 = a2[3];
  v5 = (float)(v3 * v2) - a2[5];
  v6 = (float)(*a1 * v4) - *a2;
  v7 = (float)(*a1 * v2) - a2[4];
  v8 = (float)(v4 * v3) - a2[1];
  if ( (float)(v6 * v5) == (float)(v7 * v8) )
    return 0x7F7FFFFF7F7FFFFFLL;
  v9 = (float)(v6 * v5) - (float)(v7 * v8);
  v10 = a2[15];
  v11 = (float)(v10 * *a1) - a2[12];
  v12 = (float)(v10 * v3) - a2[13];
  *(float *)&v14 = (float)((float)(v12 * v7) - (float)(v11 * v5)) / v9;
  *((float *)&v14 + 1) = (float)((float)(v11 * v8) - (float)(v12 * v6)) / v9;
  return v14;
}
