/*
 * XREFs of sub_18003E270 @ 0x18003E270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E15C @ 0x18003E15C (sub_18003E15C.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18003E270(_QWORD *a1, char a2)
{
  sub_18003E15C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
