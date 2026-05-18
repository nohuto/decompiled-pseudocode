/*
 * XREFs of sub_18001FD14 @ 0x18001FD14
 * Callers:
 *     sub_1800214FC @ 0x1800214FC (sub_1800214FC.c)
 * Callees:
 *     sub_18003E118 @ 0x18003E118 (sub_18003E118.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FD14(_QWORD *a1)
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
    sub_18003E118(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
