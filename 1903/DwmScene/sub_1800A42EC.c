/*
 * XREFs of sub_1800A42EC @ 0x1800A42EC
 * Callers:
 *     sub_1800A4330 @ 0x1800A4330 (sub_1800A4330.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

_QWORD *__fastcall sub_1800A42EC(__int64 a1, _QWORD *a2, int a3)
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
    sub_18000F3F4(a2, a1 + 32 * (a3 + 1LL));
  }
  return a2;
}
