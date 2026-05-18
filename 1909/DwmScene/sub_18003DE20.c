/*
 * XREFs of sub_18003DE20 @ 0x18003DE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003DDA4 @ 0x18003DDA4 (sub_18003DDA4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18003DE20(_QWORD *a1, char a2)
{
  sub_18003DDA4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
