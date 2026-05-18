/*
 * XREFs of sub_1800963AC @ 0x1800963AC
 * Callers:
 *     sub_180095EDC @ 0x180095EDC (sub_180095EDC.c)
 * Callees:
 *     sub_180094A78 @ 0x180094A78 (sub_180094A78.c)
 */

_QWORD *__fastcall sub_1800963AC(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    sub_180094A78(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
