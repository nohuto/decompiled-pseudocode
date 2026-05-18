/*
 * XREFs of sub_180041CCC @ 0x180041CCC
 * Callers:
 *     sub_18001FDF4 @ 0x18001FDF4 (sub_18001FDF4.c)
 * Callees:
 *     sub_18009EEC0 @ 0x18009EEC0 (sub_18009EEC0.c)
 */

_QWORD *__fastcall sub_180041CCC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18009EEC0();
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  result = a1;
  a1[23] = 0LL;
  return result;
}
