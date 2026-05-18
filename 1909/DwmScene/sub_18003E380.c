/*
 * XREFs of sub_18003E380 @ 0x18003E380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003E26C @ 0x18003E26C (sub_18003E26C.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18003E380(_QWORD *a1, char a2)
{
  sub_18003E26C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
