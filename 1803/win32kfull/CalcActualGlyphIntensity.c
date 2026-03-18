/*
 * XREFs of CalcActualGlyphIntensity @ 0x1C0244CE8
 * Callers:
 *     AdjustGlyphIntenisty @ 0x1C0244BA8 (AdjustGlyphIntenisty.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall CalcActualGlyphIntensity(__int64 a1, unsigned int a2)
{
  int v2; // r9d
  int v3; // r11d
  _BYTE *v4; // r8
  __int64 v5; // r10
  __int128 v6; // xmm1

  v2 = 0;
  v3 = 0;
  if ( !a2 )
    return (__m128)0LL;
  v4 = (_BYTE *)(a1 + 16);
  v5 = a2;
  do
  {
    if ( *v4 )
    {
      ++v2;
      v3 += (unsigned __int8)dword_1C02D5B60[(unsigned __int8)*v4]
          + (unsigned __int8)BYTE1(dword_1C02D5B60[(unsigned __int8)*v4])
          + (unsigned __int8)BYTE2(dword_1C02D5B60[(unsigned __int8)*v4]);
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( !v2 )
    return (__m128)0LL;
  v6 = 0LL;
  *(float *)&v6 = (float)v3 / (float)v2;
  return (__m128)v6;
}
