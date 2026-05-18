/*
 * XREFs of sub_180043E94 @ 0x180043E94
 * Callers:
 *     sub_18001F8A4 @ 0x18001F8A4 (sub_18001F8A4.c)
 * Callees:
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 */

_QWORD *__fastcall sub_180043E94(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CD8D4(a1);
  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
