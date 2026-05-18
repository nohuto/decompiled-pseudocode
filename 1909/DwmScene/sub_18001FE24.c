/*
 * XREFs of sub_18001FE24 @ 0x18001FE24
 * Callers:
 *     sub_18002160C @ 0x18002160C (sub_18002160C.c)
 * Callees:
 *     sub_18003E228 @ 0x18003E228 (sub_18003E228.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FE24(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x98uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::RenderStateD3D11>::`vftable';
    sub_18003E228(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
