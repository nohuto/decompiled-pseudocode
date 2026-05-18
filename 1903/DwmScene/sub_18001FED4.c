/*
 * XREFs of sub_18001FED4 @ 0x18001FED4
 * Callers:
 *     sub_180021394 @ 0x180021394 (sub_180021394.c)
 * Callees:
 *     sub_1800CF3E8 @ 0x1800CF3E8 (sub_1800CF3E8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FED4(_QWORD *a1)
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
    sub_1800CF3E8(v3 + 4);
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
