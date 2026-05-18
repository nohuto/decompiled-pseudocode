/*
 * XREFs of sub_18001F8D4 @ 0x18001F8D4
 * Callers:
 *     sub_180021288 @ 0x180021288 (sub_180021288.c)
 * Callees:
 *     sub_18004382C @ 0x18004382C (sub_18004382C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001F8D4(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::GeometryShaderD3D11>::`vftable';
    sub_18004382C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
