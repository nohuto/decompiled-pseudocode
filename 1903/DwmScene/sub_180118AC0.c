/*
 * XREFs of sub_180118AC0 @ 0x180118AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180118958 @ 0x180118958 (sub_180118958.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180118AC0(_QWORD *a1, char a2)
{
  sub_180118958(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
