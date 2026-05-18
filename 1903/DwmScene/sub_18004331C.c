/*
 * XREFs of sub_18004331C @ 0x18004331C
 * Callers:
 *     sub_18001FFDC @ 0x18001FFDC (sub_18001FFDC.c)
 * Callees:
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall sub_18004331C(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800CD8D4(a1);
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
