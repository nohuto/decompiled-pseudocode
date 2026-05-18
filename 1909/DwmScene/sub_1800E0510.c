/*
 * XREFs of sub_1800E0510 @ 0x1800E0510
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0510(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
