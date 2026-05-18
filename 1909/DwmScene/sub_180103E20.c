/*
 * XREFs of sub_180103E20 @ 0x180103E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180103CFC @ 0x180103CFC (sub_180103CFC.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180103E20(_QWORD *a1, char a2)
{
  sub_180103CFC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
