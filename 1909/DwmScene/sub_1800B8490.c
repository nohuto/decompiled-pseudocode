/*
 * XREFs of sub_1800B8490 @ 0x1800B8490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B7FA4 @ 0x1800B7FA4 (sub_1800B7FA4.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800B8490(_QWORD *a1, char a2)
{
  sub_1800B7FA4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
