/*
 * XREFs of sub_18009637C @ 0x18009637C
 * Callers:
 *     sub_18009570C @ 0x18009570C (sub_18009570C.c)
 *     sub_180095A3C @ 0x180095A3C (sub_180095A3C.c)
 *     sub_180095EDC @ 0x180095EDC (sub_180095EDC.c)
 * Callees:
 *     sub_180094A78 @ 0x180094A78 (sub_180094A78.c)
 */

_QWORD *__fastcall sub_18009637C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 272);
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
