/*
 * XREFs of ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A9A60
 * Callers:
 *     GreAngleArc @ 0x1C0269620 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02A9BF0 (NtGdiArcInternal.c)
 * Callees:
 *     eFraction @ 0x1C02D4EAC (eFraction.c)
 */

__int64 __fastcall vCosSinPrecise(__int64 a1, __int64 a2, __int64 a3)
{
  float *v3; // r8
  int v4; // r9d
  int v5; // r10d
  float *v6; // r11
  double v7; // xmm0_8
  int v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  int v11; // edx
  unsigned int v12; // ecx
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  __int64 result; // rax
  float v20; // xmm0_4

  v7 = eFraction(a1, a2, a3, 0LL);
  v10 = *(float *)&v7 * FP_360_0;
  if ( v9 > (float)(FP_180_0 - (float)(*(float *)&v7 * FP_360_0)) )
  {
    v4 = 1;
    v10 = FP_360_0 - (float)(*(float *)&v7 * FP_360_0);
  }
  if ( v9 <= (float)(FP_90_0 - v10) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    v10 = FP_180_0 - v10;
  }
  v12 = 2;
  v14 = FP_1_0;
  v15 = (float)(FP_PI * v10) / FP_180_0;
  v13 = v15;
  v16 = v15;
  v17 = FP_2_0;
  v18 = FP_2_0;
  result = FP_1_0;
  do
  {
    v16 = v16 * v13;
    v20 = v16 / v18;
    if ( (v12 & 2) != 0 )
      LODWORD(v20) ^= v8;
    if ( (v12 & 1) != 0 )
      v15 = v15 + v20;
    else
      v14 = v14 + v20;
    v17 = v17 + FP_1_0;
    ++v12;
    v18 = v18 * v17;
  }
  while ( v12 < 0xD );
  if ( !v5 )
  {
    if ( !v4 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( !v4 )
LABEL_17:
    LODWORD(v15) ^= v8;
LABEL_18:
  if ( v11 )
    LODWORD(v14) ^= v8;
  *v6 = v14;
  *v3 = v15;
  return result;
}
