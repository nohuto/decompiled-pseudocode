/*
 * XREFs of sub_180123B90 @ 0x180123B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123AF0 @ 0x180123AF0 (sub_180123AF0.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180123B90(_QWORD *a1, char a2)
{
  sub_180123AF0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
