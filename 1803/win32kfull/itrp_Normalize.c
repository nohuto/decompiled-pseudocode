/*
 * XREFs of itrp_Normalize @ 0x1C02CCCD0
 * Callers:
 *     EmboldPoint @ 0x1C02BB384 (EmboldPoint.c)
 *     itrp_SDPVTL @ 0x1C02CDF50 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C02CE420 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C02CF8E0 (itrp_SPVTL.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     FracMul @ 0x1C02B3048 (FracMul.c)
 *     FracSqrt @ 0x1C02B3100 (FracSqrt.c)
 */

__int64 __fastcall itrp_Normalize(int a1, int a2, _WORD *a3)
{
  int v3; // r11d
  __int64 result; // rax
  int v6; // edi
  char v7; // cl
  int i; // r10d
  int v9; // eax
  int v10; // r10d
  int v11; // ebx
  int v12; // r11d

  v3 = a1;
  result = 0LL;
  v6 = a2;
  if ( a1 )
  {
    if ( (unsigned int)(a1 + 0x7FFF) > 0xFFFD )
      goto LABEL_14;
    goto LABEL_5;
  }
  if ( a2 )
  {
LABEL_5:
    if ( (unsigned int)(a2 + 0x7FFF) <= 0xFFFD )
    {
      v7 = 15;
      for ( i = a2 * a2 + v3 * v3; i < 0x20000000; i *= 4 )
        ++v7;
      v6 = a2 << v7;
LABEL_16:
      v11 = FracSqrt(i);
      *a3 = ((unsigned int)CompDiv(v11, (__int64)v12 << 30) + 0x8000) >> 16;
      result = (unsigned int)((int)(CompDiv(v11, (__int64)v6 << 30) + 0x8000) >> 16);
      goto LABEL_17;
    }
LABEL_14:
    while ( v3 < 0x20000000 && v3 > -536870912 && (unsigned int)(v6 + 0x1FFFFFFF) <= 0x3FFFFFFE )
    {
      v3 *= 2;
      v6 *= 2;
    }
    FracMul(v3, v3);
    v9 = FracMul(v6, v6);
    i = v9 + v10;
    goto LABEL_16;
  }
  *a3 = 0x4000;
LABEL_17:
  a3[1] = result;
  return result;
}
