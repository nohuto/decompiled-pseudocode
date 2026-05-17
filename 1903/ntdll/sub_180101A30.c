/*
 * XREFs of sub_180101A30 @ 0x180101A30
 * Callers:
 *     sub_180101C80 @ 0x180101C80 (sub_180101C80.c)
 * Callees:
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 */

__int64 __fastcall sub_180101A30(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = xmmword_1801638B0;
  return sub_18004F690(a1, &v2);
}
