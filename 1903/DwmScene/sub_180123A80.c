/*
 * XREFs of sub_180123A80 @ 0x180123A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801239E0 @ 0x1801239E0 (sub_1801239E0.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180123A80(_QWORD *a1, char a2)
{
  sub_1801239E0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
