/*
 * XREFs of SScaleY @ 0x1C02B83B0
 * Callers:
 *     sbit_GetMetrics @ 0x1C02BA440 (sbit_GetMetrics.c)
 * Callees:
 *     UScaleY @ 0x1C02B8B84 (UScaleY.c)
 */

__int16 __fastcall SScaleY(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a1 + 28) != 3 )
    return a2;
  if ( (a2 & 0x8000u) == 0LL )
    return UScaleY(a1, a2);
  LOWORD(a2) = -(__int16)a2;
  return -(__int16)UScaleY(a1, a2);
}
