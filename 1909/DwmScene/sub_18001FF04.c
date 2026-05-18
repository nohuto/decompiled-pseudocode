/*
 * XREFs of sub_18001FF04 @ 0x18001FF04
 * Callers:
 *     sub_180021558 @ 0x180021558 (sub_180021558.c)
 * Callees:
 *     sub_180041DDC @ 0x180041DDC (sub_180041DDC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FF04(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xD0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::SamplerD3D11>::`vftable';
    sub_180041DDC(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
