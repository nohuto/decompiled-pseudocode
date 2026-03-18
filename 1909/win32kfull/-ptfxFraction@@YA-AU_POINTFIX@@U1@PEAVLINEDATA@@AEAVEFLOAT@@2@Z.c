/*
 * XREFs of ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02C7218
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00F3050 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C004B1FC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 */

struct _POINTFIX __fastcall ptfxFraction(
        struct _POINTFIX a1,
        struct LINEDATA *a2,
        struct EFLOAT *a3,
        struct EFLOAT *a4)
{
  __int64 v5; // rdx
  float *v6; // r8
  float *v7; // r9
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  unsigned int v13; // r8d
  int v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+24h] [rbp-14h] BYREF
  __int64 v16; // [rsp+28h] [rbp-10h]

  if ( EFLOAT::bIsZero(a4) )
    return a1;
  if ( (*(_DWORD *)v5 & 0x10) == 0 )
  {
    v9 = (float)*(int *)(v5 + 40);
    v10 = (float)*(int *)(v5 + 44);
    *(float *)(v5 + 80) = v9;
    *(float *)(v5 + 84) = v10;
    v11 = FP_1_0 / *v7;
    *(float *)(v5 + 80) = v11 * v9;
    *(float *)(v5 + 84) = v11 * v10;
    *(_DWORD *)v5 |= 0x10u;
  }
  v12 = *(float *)(v5 + 84) * *v6;
  bFToL(*(float *)(v5 + 80) * *v6, &v14, 6u);
  bFToL(v12, &v15, v13);
  HIDWORD(v16) = v15 + a1.y;
  LODWORD(v16) = a1.x + v14;
  return (struct _POINTFIX)v16;
}
