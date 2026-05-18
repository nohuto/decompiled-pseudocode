/*
 * XREFs of sub_180033250 @ 0x180033250
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033108 @ 0x180033108 (sub_180033108.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180033250(_QWORD *a1, char a2)
{
  sub_180033108(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
