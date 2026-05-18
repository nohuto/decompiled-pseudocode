/*
 * XREFs of sub_18002C1C8 @ 0x18002C1C8
 * Callers:
 *     sub_18001FE94 @ 0x18001FE94 (sub_18001FE94.c)
 * Callees:
 *     sub_18006479C @ 0x18006479C (sub_18006479C.c)
 */

_QWORD *__fastcall sub_18002C1C8(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18006479C();
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  result = a1;
  a1[16] = 0LL;
  return result;
}
