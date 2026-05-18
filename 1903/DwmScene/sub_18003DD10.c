/*
 * XREFs of sub_18003DD10 @ 0x18003DD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003DC94 @ 0x18003DC94 (sub_18003DC94.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18003DD10(_QWORD *a1, char a2)
{
  sub_18003DC94(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
