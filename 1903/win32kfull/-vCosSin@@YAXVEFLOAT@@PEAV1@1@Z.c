/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A9D94
 * Callers:
 *     GreAngleArc @ 0x1C0269D50 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02AA0A0 (NtGdiArcInternal.c)
 * Callees:
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     eFraction @ 0x1C02D535C (eFraction.c)
 */

__int64 __fastcall vCosSin(int a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  int v6; // edi
  int v7; // ebx
  double v8; // xmm0_8
  int v9; // xmm4_4
  char v10; // r8
  int v11; // r9d
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  char v15; // r9
  __int64 v16; // r8
  __int64 result; // rax
  float v18; // xmm3_4
  int v19; // [rsp+48h] [rbp+10h] BYREF

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
  bFToL(FP_SINE_FACTOR * v3, &v19, 5u);
  v8 = eFraction();
  v10 = v19;
  v11 = v19 >> 5;
  v12 = *(float *)&v8;
  if ( ((v19 >> 5) & 2) == 0 )
    v7 = v6;
  if ( (v11 & 1) != 0 )
  {
    v13 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32LL - (v19 & 0x1F)] - gaefSin[31LL - (v19 & 0x1F)]) * *(float *)&v8) ^ v9)
        + gaefSin[32LL - (v19 & 0x1F)];
  }
  else
  {
    v10 = v19 & 0x1F;
    v14 = gaefSin[v19 & 0x1F];
    v13 = (float)((float)(gaefSin[(v19 & 0x1F) + 1] - v14) * v12) + v14;
  }
  if ( v7 )
    LODWORD(v13) ^= v9;
  v15 = v11 + 1;
  *a3 = v13;
  v16 = v10 & 0x1F;
  if ( (v15 & 1) != 0 )
  {
    result = (unsigned int)v16;
    v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[32LL - (unsigned int)v16] - gaefSin[31LL - (unsigned int)v16]) * v12) ^ v9)
        + gaefSin[32LL - (unsigned int)v16];
  }
  else
  {
    result = (unsigned int)(v16 + 1);
    v18 = (float)((float)(gaefSin[(int)result] - gaefSin[v16]) * v12) + gaefSin[v16];
  }
  if ( (v15 & 2) != 0 )
    LODWORD(v18) ^= v9;
  *a2 = v18;
  return result;
}
