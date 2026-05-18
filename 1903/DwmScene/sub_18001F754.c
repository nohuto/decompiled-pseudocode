/*
 * XREFs of sub_18001F754 @ 0x18001F754
 * Callers:
 *     sub_180020BD8 @ 0x180020BD8 (sub_180020BD8.c)
 * Callees:
 *     sub_180043AD4 @ 0x180043AD4 (sub_180043AD4.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001F754(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::DomainShaderD3D11>::`vftable';
    sub_180043AD4(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
