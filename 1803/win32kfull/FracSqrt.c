/*
 * XREFs of FracSqrt @ 0x1C02B3100
 * Callers:
 *     itrp_GetCVTScale @ 0x1C02C8320 (itrp_GetCVTScale.c)
 *     itrp_Normalize @ 0x1C02CCCD0 (itrp_Normalize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FracSqrt(int a1)
{
  int v1; // r8d
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r10d
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx

  v1 = 0;
  if ( a1 < 0 )
    return 0x80000000LL;
  v4 = 0x10000000;
  v5 = a1 - 0x40000000;
  v6 = (unsigned int)a1 >= 0x40000000 ? 0x40000000 : 0;
  if ( (unsigned int)a1 < 0x40000000 )
    v5 = a1;
  do
  {
    v7 = v4 + v6;
    if ( v5 >= v4 + v6 )
      v6 += 2 * v4;
    v8 = v5 - v7;
    if ( v5 < v7 )
      v8 = v5;
    v5 = 2 * v8;
    v4 >>= 1;
  }
  while ( v4 );
  if ( v5 <= v6 )
  {
    v10 = 4 * v8;
  }
  else
  {
    v9 = v5 - v6++;
    v10 = 2 * v9 - 1;
  }
  LOBYTE(v1) = v10 > v6;
  return v6 + v1;
}
