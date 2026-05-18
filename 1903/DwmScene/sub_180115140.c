/*
 * XREFs of sub_180115140 @ 0x180115140
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180115140(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::ITimeProvider::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
