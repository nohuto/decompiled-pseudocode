/*
 * XREFs of sub_18003E118 @ 0x18003E118
 * Callers:
 *     sub_18001FD14 @ 0x18001FD14 (sub_18001FD14.c)
 * Callees:
 *     sub_180063DA8 @ 0x180063DA8 (sub_180063DA8.c)
 */

_QWORD *__fastcall sub_18003E118(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180063DA8(a1, 9LL, 4LL);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = a1;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
