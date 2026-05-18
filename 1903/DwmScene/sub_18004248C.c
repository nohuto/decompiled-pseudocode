/*
 * XREFs of sub_18004248C @ 0x18004248C
 * Callers:
 *     sub_18001FF6C @ 0x18001FF6C (sub_18001FF6C.c)
 * Callees:
 *     sub_1800D1514 @ 0x1800D1514 (sub_1800D1514.c)
 */

_QWORD *__fastcall sub_18004248C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800D1514();
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  return result;
}
