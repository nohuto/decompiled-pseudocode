/*
 * XREFs of sub_18004371C @ 0x18004371C
 * Callers:
 *     sub_18001F7C4 @ 0x18001F7C4 (sub_18001F7C4.c)
 * Callees:
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 */

_QWORD *__fastcall sub_18004371C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CD8D4(a1);
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
