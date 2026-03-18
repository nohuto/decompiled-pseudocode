/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02815C8
 * Callers:
 *     GreAngleArc @ 0x1C026F194 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02818C0 (NtGdiArcInternal.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     eFraction @ 0x1C022AD98 (eFraction.c)
 */

__int64 __fastcall vCosSin(int a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  int v6; // edi
  int v7; // ebx
  double v8; // xmm1_8
  double v9; // xmm0_8
  int v10; // xmm4_4
  int v11; // r8d
  float v12; // xmm5_4
  int v13; // r9d
  int v14; // eax
  float v15; // xmm3_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  char v18; // r9
  __int64 v19; // r8
  __int64 result; // rax
  float v21; // xmm3_4
  int v22; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(float *)&a1;
  if ( *(float *)&a1 >= 0.0 )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v6 = 1;
    v7 = 0;
    LODWORD(v3) = a1 ^ _xmm;
  }
  *(_QWORD *)&v8 = FP_SINE_FACTOR;
  *(float *)&v8 = FP_SINE_FACTOR * v3;
  bFToL(FP_SINE_FACTOR * v3, &v22, 5);
  v9 = eFraction(v8);
  LOBYTE(v11) = v22;
  v12 = *(float *)&v9;
  v13 = v22 >> 5;
  if ( ((v22 >> 5) & 2) == 0 )
    v7 = v6;
  if ( (v13 & 1) != 0 )
  {
    v14 = v22 & 0x1F;
    v15 = gaefSin[32 - v14];
    v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v15 - gaefSin[32 - v14 - 1]) * *(float *)&v9) ^ v10) + v15;
  }
  else
  {
    v11 = v22 & 0x1F;
    v17 = gaefSin[v22 & 0x1F];
    v16 = (float)((float)(gaefSin[v11 + 1] - v17) * v12) + v17;
  }
  if ( v7 )
    LODWORD(v16) ^= v10;
  v18 = v13 + 1;
  *a3 = v16;
  v19 = v11 & 0x1F;
  if ( (v18 & 1) != 0 )
  {
    result = (unsigned int)(32 - v19 - 1);
    v21 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32 - (int)v19] - gaefSin[(int)result]) * v12) ^ v10)
        + gaefSin[32 - (int)v19];
  }
  else
  {
    result = (unsigned int)(v19 + 1);
    v21 = (float)((float)(gaefSin[(int)result] - gaefSin[v19]) * v12) + gaefSin[v19];
  }
  if ( (v18 & 2) != 0 )
    LODWORD(v21) ^= v10;
  *a2 = v21;
  return result;
}
