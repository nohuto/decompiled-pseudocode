/*
 * XREFs of sub_180095788 @ 0x180095788
 * Callers:
 *     sub_1800945FC @ 0x1800945FC (sub_1800945FC.c)
 *     sub_180094E98 @ 0x180094E98 (sub_180094E98.c)
 * Callees:
 *     sub_1800A32A0 @ 0x1800A32A0 (sub_1800A32A0.c)
 */

__int64 __fastcall sub_180095788(char a1)
{
  unsigned int v2; // eax

  v2 = sub_1800A32A0();
  return sub_180096710(a1 & 0x3F | v2);
}
