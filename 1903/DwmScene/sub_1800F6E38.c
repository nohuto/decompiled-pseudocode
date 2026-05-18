/*
 * XREFs of sub_1800F6E38 @ 0x1800F6E38
 * Callers:
 *     sub_1800F68B0 @ 0x1800F68B0 (sub_1800F68B0.c)
 * Callees:
 *     sub_1800D155C @ 0x1800D155C (sub_1800D155C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800F6E38(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xC0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::VertexLayout>::`vftable';
    sub_1800D155C((__int64)(v2 + 4));
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
