/*
 * XREFs of sub_180041E60 @ 0x180041E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180041E08 @ 0x180041E08 (sub_180041E08.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180041E60(_QWORD *a1, char a2)
{
  sub_180041E08(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
