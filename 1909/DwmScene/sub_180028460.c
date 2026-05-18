/*
 * XREFs of sub_180028460 @ 0x180028460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028284 @ 0x180028284 (sub_180028284.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 */

_QWORD *__fastcall sub_180028460(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11Window::`vftable';
  sub_180028284((__int64)a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
