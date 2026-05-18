/*
 * XREFs of sub_1800A43FC @ 0x1800A43FC
 * Callers:
 *     sub_1800A4440 @ 0x1800A4440 (sub_1800A4440.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 */

_QWORD *__fastcall sub_1800A43FC(__int64 a1, _QWORD *a2, int a3)
{
  a2[2] = 0LL;
  if ( a3 == -1 )
  {
    a2[3] = 15LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    a2[3] = 0LL;
    sub_18000F444(a2, a1 + 32 * (a3 + 1LL));
  }
  return a2;
}
