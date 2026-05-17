/*
 * XREFs of sub_180101A00 @ 0x180101A00
 * Callers:
 *     sub_180101C80 @ 0x180101C80 (sub_180101C80.c)
 * Callees:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 */

void *__fastcall sub_180101A00(unsigned __int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = xmmword_1801638B0;
  return sub_18004CF00(a1, a1, 0, &v2);
}
