/*
 * XREFs of sub_18001FE94 @ 0x18001FE94
 * Callers:
 *     sub_180021774 @ 0x180021774 (sub_180021774.c)
 * Callees:
 *     sub_18002C1C8 @ 0x18002C1C8 (sub_18002C1C8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FE94(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x98uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::RenderTargetD3D11>::`vftable';
    sub_18002C1C8(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
