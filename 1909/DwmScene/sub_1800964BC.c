/*
 * XREFs of sub_1800964BC @ 0x1800964BC
 * Callers:
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 * Callees:
 *     sub_180094B88 @ 0x180094B88 (sub_180094B88.c)
 */

_QWORD *__fastcall sub_1800964BC(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    sub_180094B88(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
