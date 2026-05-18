/*
 * XREFs of sub_18002007C @ 0x18002007C
 * Callers:
 *     sub_1800213F0 @ 0x1800213F0 (sub_1800213F0.c)
 * Callees:
 *     sub_18004259C @ 0x18004259C (sub_18004259C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002007C(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xA8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::VertexLayoutD3D11>::`vftable';
    sub_18004259C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
