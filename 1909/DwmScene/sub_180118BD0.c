/*
 * XREFs of sub_180118BD0 @ 0x180118BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180118A68 @ 0x180118A68 (sub_180118A68.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180118BD0(_QWORD *a1, char a2)
{
  sub_180118A68(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
