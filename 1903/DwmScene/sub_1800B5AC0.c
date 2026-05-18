/*
 * XREFs of sub_1800B5AC0 @ 0x1800B5AC0
 * Callers:
 *     sub_1800B61CC @ 0x1800B61CC (sub_1800B61CC.c)
 * Callees:
 *     sub_1800F9890 @ 0x1800F9890 (sub_1800F9890.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B5AC0(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::RenderStateGeneric>::`vftable';
    sub_1800F9890(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
