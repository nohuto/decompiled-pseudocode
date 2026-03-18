/*
 * XREFs of fsc_AddXReversal @ 0x1C02C3150
 * Callers:
 *     fsc_MeasureGlyph @ 0x1C02B6BE8 (fsc_MeasureGlyph.c)
 * Callees:
 *     AddReversal @ 0x1C02C2804 (AddReversal.c)
 */

__int64 __fastcall fsc_AddXReversal(_QWORD *a1, int a2, __int16 a3)
{
  __int64 v4; // rdx
  __int64 v6; // r11

  v4 = a1[2];
  if ( (unsigned __int64)(v4 + 16) > a1[3] )
    return 6656LL;
  AddReversal(a1 + 1, v4, a2, a3);
  *(_QWORD *)(v6 + 16) += 16LL;
  return 0LL;
}
