/*
 * XREFs of sub_18001FFE4 @ 0x18001FFE4
 * Callers:
 *     sub_1800214A4 @ 0x1800214A4 (sub_1800214A4.c)
 * Callees:
 *     sub_1800CF4F8 @ 0x1800CF4F8 (sub_1800CF4F8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FFE4(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::VertexBufferD3D11>::`vftable';
    memset(v2 + 4, 0, 0x70uLL);
    sub_1800CF4F8(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::D3D11::VertexBufferD3D11::`vftable';
    *((_QWORD *)v3 + 15) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
