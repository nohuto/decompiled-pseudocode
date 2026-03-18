/*
 * XREFs of ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C0294B0C
 * Callers:
 *     GreAngleArc @ 0x1C02500CC (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C0294C80 (NtGdiArcInternal.c)
 * Callees:
 *     eFraction @ 0x1C02C22D0 (eFraction.c)
 */

__int64 __fastcall vCosSinPrecise(__int64 a1, float *a2)
{
  float *v3; // r8
  int v4; // r9d
  int v5; // r10d
  float *v6; // r11
  double v7; // xmm0_8
  int v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  int v12; // edx
  float v13; // xmm3_4
  __int64 result; // rax
  float v15; // xmm6_4
  float v16; // xmm1_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  float v20; // xmm0_4

  v7 = eFraction(a1, a2, FP_360_0, 0LL);
  v10 = *(float *)&v7 * *v3;
  v11 = v10;
  if ( v9 > (float)(FP_180_0 - v10) )
  {
    v4 = 1;
    v11 = *v3 - v10;
  }
  if ( v9 <= (float)(FP_90_0 - v11) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    v11 = FP_180_0 - v11;
  }
  v13 = FP_2_0;
  LODWORD(result) = 2;
  v16 = FP_1_0;
  v17 = FP_2_0;
  v18 = (float)(FP_PI * v11) / FP_180_0;
  v15 = v18;
  v19 = v18;
  do
  {
    v19 = v19 * v15;
    v20 = v19 / v17;
    if ( (result & 2) != 0 )
      LODWORD(v20) ^= v8;
    if ( (result & 1) != 0 )
      v18 = v18 + v20;
    else
      v16 = v16 + v20;
    v13 = v13 + FP_1_0;
    result = (unsigned int)(result + 1);
    v17 = v17 * v13;
  }
  while ( (unsigned int)result < 0xD );
  if ( !v5 )
  {
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( !v4 )
LABEL_17:
    LODWORD(v18) ^= v8;
LABEL_18:
  if ( v12 )
    LODWORD(v16) ^= v8;
  *a2 = v16;
  *v6 = v18;
  return result;
}
