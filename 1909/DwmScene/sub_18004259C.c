/*
 * XREFs of sub_18004259C @ 0x18004259C
 * Callers:
 *     sub_18002007C @ 0x18002007C (sub_18002007C.c)
 * Callees:
 *     sub_1800D1624 @ 0x1800D1624 (sub_1800D1624.c)
 */

_QWORD *__fastcall sub_18004259C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800D1624();
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  return result;
}
