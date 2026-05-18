/*
 * XREFs of sub_18002C2B0 @ 0x18002C2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C1F4 @ 0x18002C1F4 (sub_18002C1F4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18002C2B0(_QWORD *a1, char a2)
{
  sub_18002C1F4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
