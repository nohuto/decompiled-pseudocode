/*
 * XREFs of sub_180041DDC @ 0x180041DDC
 * Callers:
 *     sub_18001FF04 @ 0x18001FF04 (sub_18001FF04.c)
 * Callees:
 *     sub_18009EFD0 @ 0x18009EFD0 (sub_18009EFD0.c)
 */

_QWORD *__fastcall sub_180041DDC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18009EFD0();
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  result = a1;
  a1[23] = 0LL;
  return result;
}
