/*
 * XREFs of sub_1800CF620 @ 0x1800CF620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D23A8 @ 0x1800D23A8 (sub_1800D23A8.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CF620(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  sub_1800D23A8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
