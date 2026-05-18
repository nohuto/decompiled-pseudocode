/*
 * XREFs of sub_180063440 @ 0x180063440
 * Callers:
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 * Callees:
 *     sub_180062DAC @ 0x180062DAC (sub_180062DAC.c)
 */

__int64 *__fastcall sub_180063440(__int64 a1, __int64 *a2)
{
  a2[1] = 0LL;
  *a2 = a1;
  *((_BYTE *)a2 + 8) = 1;
  sub_180062DAC(a1, 0);
  return a2;
}
