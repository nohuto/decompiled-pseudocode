/*
 * XREFs of sub_180124790 @ 0x180124790
 * Callers:
 *     sub_18011F568 @ 0x18011F568 (sub_18011F568.c)
 *     sub_180120150 @ 0x180120150 (sub_180120150.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 */

_QWORD *__fastcall sub_180124790(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001115C(a2, a1 + 8);
  return a2;
}
