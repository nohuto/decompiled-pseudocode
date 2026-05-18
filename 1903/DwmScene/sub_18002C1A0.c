/*
 * XREFs of sub_18002C1A0 @ 0x18002C1A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_18002C1A0(_QWORD *a1, char a2)
{
  sub_18002C0E4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
