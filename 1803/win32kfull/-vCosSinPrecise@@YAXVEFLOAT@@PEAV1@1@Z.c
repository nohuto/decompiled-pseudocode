/*
 * XREFs of ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C0281748
 * Callers:
 *     GreAngleArc @ 0x1C026F194 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02818C0 (NtGdiArcInternal.c)
 * Callees:
 *     eFraction @ 0x1C022AD98 (eFraction.c)
 */

__int64 __fastcall vCosSinPrecise(unsigned int a1, float *a2)
{
  double v2; // xmm3_8
  int v4; // r9d
  float *v5; // r10
  float *v6; // r11
  double v7; // xmm0_8
  int v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  BOOL v12; // r8d
  int v13; // edx
  float v14; // xmm3_4
  __int64 result; // rax
  float v16; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm0_4

  *(_QWORD *)&v2 = _mm_cvtsi32_si128(a1).m128i_u64[0];
  if ( *(float *)&v2 < 0.0 )
    *(_QWORD *)&v2 ^= (unsigned int)_xmm;
  *(float *)&v2 = *(float *)&v2 / FP_360_0;
  v7 = eFraction(v2);
  v10 = *(float *)&v7 * *v5;
  v11 = v10;
  v12 = v9 > (float)(FP_180_0 - v10);
  if ( v9 > (float)(FP_180_0 - v10) )
    v11 = *v5 - v10;
  if ( v9 <= (float)(FP_90_0 - v11) )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    v11 = FP_180_0 - v11;
  }
  v14 = FP_2_0;
  LODWORD(result) = 2;
  v17 = FP_1_0;
  v18 = FP_2_0;
  v19 = (float)(FP_PI * v11) / FP_180_0;
  v16 = v19;
  v20 = v19;
  do
  {
    v20 = v20 * v16;
    v21 = v20 / v18;
    if ( (result & 2) != 0 )
      LODWORD(v21) ^= v8;
    if ( (result & 1) != 0 )
      v19 = v19 + v21;
    else
      v17 = v17 + v21;
    v14 = v14 + FP_1_0;
    result = (unsigned int)(result + 1);
    v18 = v18 * v14;
  }
  while ( (unsigned int)result < 0xD );
  if ( !v4 )
  {
    if ( !v12 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( !v12 )
LABEL_19:
    LODWORD(v19) ^= v8;
LABEL_20:
  if ( v13 )
    LODWORD(v17) ^= v8;
  *a2 = v17;
  *v6 = v19;
  return result;
}
