/*
 * XREFs of sub_18008E250 @ 0x18008E250
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008E07C @ 0x18008E07C (sub_18008E07C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18008E250(_QWORD *a1, char a2)
{
  sub_18008E07C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
