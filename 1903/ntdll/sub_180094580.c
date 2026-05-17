/*
 * XREFs of sub_180094580 @ 0x180094580
 * Callers:
 *     atan @ 0x18008E870 (atan.c)
 *     atan2 @ 0x18008EAD0 (atan2.c)
 *     cos @ 0x18008F550 (cos.c)
 *     sin @ 0x18008F970 (sin.c)
 *     tan @ 0x180091CE0 (tan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180094580(int a1, int a2)
{
  return sub_1800942BC(a1, a2 & 0xFFF7FFFF);
}
