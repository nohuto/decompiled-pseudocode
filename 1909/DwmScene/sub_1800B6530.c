/*
 * XREFs of sub_1800B6530 @ 0x1800B6530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CFDD0 @ 0x1800CFDD0 (sub_1800CFDD0.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_1800B6530(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_1800CFDD0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
