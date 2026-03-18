/*
 * XREFs of ?GetProjectionMatrix@CProjectedShadow@@CA?AVCMILMatrix@@UD2D_VECTOR_3F@@UD2D_VECTOR_4F@@_N@Z @ 0x1801CAD80
 * Callers:
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@PEAVCMILMatrix@@@Z @ 0x1801CC0A4 (-ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectedShadow::GetProjectionMatrix(__int64 a1, float *a2, float *a3, char a4)
{
  float v4; // xmm11_4
  float v5; // xmm12_4
  float v6; // xmm13_4
  float v7; // xmm10_4
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  __int64 result; // rax
  float v12; // xmm9_4
  float v13; // xmm7_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm12_4
  float v18; // xmm0_4
  float v19; // xmm13_4
  __int128 v20; // [rsp+0h] [rbp-80h]

  v20 = *(_OWORD *)a3;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  *(float *)&v20 = *a3;
  *(_OWORD *)a3 = v20;
  if ( a4 )
    v7 = FLOAT_1_0;
  else
    v7 = 0.0;
  v8 = a3[2];
  v9 = *a3;
  v10 = a3[1];
  result = a1;
  v12 = a3[3] * v7;
  *(float *)(a1 + 8) = v6 * *a3;
  *(float *)(a1 + 36) = v5 * v8;
  LODWORD(v13) = COERCE_UNSIGNED_INT((float)((float)((float)(v4 * v9) + (float)(v5 * v10)) + (float)(v6 * v8)) + v12) ^ _xmm;
  v14 = (float)(v5 * v10) + v13;
  v15 = (float)(v6 * v8) + v13;
  *(float *)a1 = (float)(v4 * v9) + v13;
  v16 = v5;
  v17 = v5 * a3[3];
  *(float *)(a1 + 4) = v16 * v9;
  *(float *)(a1 + 52) = v17;
  *(float *)(a1 + 16) = v4 * v10;
  v18 = v6;
  v19 = v6 * a3[3];
  *(float *)(a1 + 24) = v18 * v10;
  *(float *)(a1 + 48) = v4 * a3[3];
  *(float *)(a1 + 44) = v8 * v7;
  *(float *)(a1 + 56) = v19;
  *(float *)(a1 + 60) = v12 + v13;
  *(float *)(a1 + 12) = v9 * v7;
  *(float *)(a1 + 20) = v14;
  *(float *)(a1 + 28) = v10 * v7;
  *(float *)(a1 + 32) = v4 * v8;
  *(float *)(a1 + 40) = v15;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
