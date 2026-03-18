/*
 * XREFs of efSin @ 0x1C00124F0
 * Callers:
 *     efCos @ 0x1C00124C0 (efCos.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00C06A0 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     eFraction @ 0x1C0013460 (eFraction.c)
 *     bFToL @ 0x1C006312C (bFToL.c)
 */

__int64 __fastcall efSin(__int64 a1)
{
  int v1; // edi
  int v2; // ebx
  double v3; // xmm0_8
  __m128 v4; // xmm4
  int v5; // r8d
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  __m128 v8; // xmm3
  int v10; // [rsp+38h] [rbp+10h] BYREF

  if ( *(float *)&a1 < 0.0 )
  {
    v1 = 1;
    v2 = 0;
  }
  else
  {
    v1 = 0;
    v2 = 1;
  }
  bFToL(a1, &v10, 5LL);
  v3 = eFraction();
  if ( ((v10 >> 5) & 2) == 0 )
    v2 = v1;
  v5 = v10 & 0x1F;
  if ( ((v10 >> 5) & 1) != 0 )
  {
    v6 = (__m128)LODWORD(gaefSin[32 - v5]);
    v7 = v6;
    v7.m128_f32[0] = (float)(v6.m128_f32[0] - gaefSin[32 - v5 - 1]) * *(float *)&v3;
    v8 = _mm_xor_ps(v7, v4);
    v8.m128_f32[0] = v8.m128_f32[0] + v6.m128_f32[0];
  }
  else
  {
    v8 = (__m128)LODWORD(gaefSin[v5 + 1]);
    v8.m128_f32[0] = (float)((float)(v8.m128_f32[0] - gaefSin[v10 & 0x1F]) * *(float *)&v3) + gaefSin[v10 & 0x1F];
  }
  if ( v2 )
    v8 = _mm_xor_ps(v8, v4);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v8);
}
