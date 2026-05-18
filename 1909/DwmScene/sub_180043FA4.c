/*
 * XREFs of sub_180043FA4 @ 0x180043FA4
 * Callers:
 *     sub_18001F9B4 @ 0x18001F9B4 (sub_18001F9B4.c)
 * Callees:
 *     sub_1800CD9E4 @ 0x1800CD9E4 (sub_1800CD9E4.c)
 */

_QWORD *__fastcall sub_180043FA4(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CD9E4(a1);
  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
