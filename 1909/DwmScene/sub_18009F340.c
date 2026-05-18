/*
 * XREFs of sub_18009F340 @ 0x18009F340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009F094 @ 0x18009F094 (sub_18009F094.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_18009F340(_QWORD *a1, char a2)
{
  sub_18009F094(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
