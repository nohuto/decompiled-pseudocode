/*
 * XREFs of sub_180063330 @ 0x180063330
 * Callers:
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 * Callees:
 *     sub_180062C9C @ 0x180062C9C (sub_180062C9C.c)
 */

__int64 *__fastcall sub_180063330(__int64 a1, __int64 *a2)
{
  a2[1] = 0LL;
  *a2 = a1;
  *((_BYTE *)a2 + 8) = 1;
  sub_180062C9C(a1, 0);
  return a2;
}
