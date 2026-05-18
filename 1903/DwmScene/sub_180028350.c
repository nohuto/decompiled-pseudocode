/*
 * XREFs of sub_180028350 @ 0x180028350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028174 @ 0x180028174 (sub_180028174.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

_QWORD *__fastcall sub_180028350(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11Window::`vftable';
  sub_180028174((__int64)a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
