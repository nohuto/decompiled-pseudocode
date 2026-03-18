/*
 * XREFs of efSin @ 0x1C0002440
 * Callers:
 *     efCos @ 0x1C0002410 (efCos.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00F6C40 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     eFraction @ 0x1C0002DBC (eFraction.c)
 *     bFToL @ 0x1C0068BEC (bFToL.c)
 */

__int64 __fastcall efSin(__int64 a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // r8d
  double v4; // xmm0_8
  __m128 v5; // xmm4
  __int64 v6; // rcx
  __m128 v7; // xmm1
  __m128 v8; // xmm3
  __m128 v9; // xmm3
  int v11; // [rsp+38h] [rbp+10h] BYREF

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
  bFToL(a1, &v11, 5LL);
  v4 = eFraction();
  if ( ((v11 >> 5) & 2) == 0 )
    v2 = v1;
  v6 = v11 & 0x1F;
  if ( ((v11 >> 5) & 1) != 0 )
  {
    v7 = (__m128)*((unsigned int *)&unk_1C01CB270 - v6);
    v8 = v7;
    v8.m128_f32[0] = (float)(v7.m128_f32[0] - gaefSin[v3 + 27 - (int)v6 - 1]) * *(float *)&v4;
    v9 = _mm_xor_ps(v8, v5);
    v9.m128_f32[0] = v9.m128_f32[0] + v7.m128_f32[0];
  }
  else
  {
    v9 = (__m128)LODWORD(gaefSin[(int)v6 + 1]);
    v9.m128_f32[0] = (float)((float)(v9.m128_f32[0] - gaefSin[v11 & 0x1F]) * *(float *)&v4) + gaefSin[v11 & 0x1F];
  }
  if ( v2 )
    v9 = _mm_xor_ps(v9, v5);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v9);
}
