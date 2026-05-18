/*
 * XREFs of sub_18000E950 @ 0x18000E950
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E8AC @ 0x18000E8AC (sub_18000E8AC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18000E950(_QWORD *a1, char a2)
{
  sub_18000E8AC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
