/*
 * XREFs of sub_1800B5BD0 @ 0x1800B5BD0
 * Callers:
 *     sub_1800B62DC @ 0x1800B62DC (sub_1800B62DC.c)
 * Callees:
 *     sub_1800F99A0 @ 0x1800F99A0 (sub_1800F99A0.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B5BD0(_QWORD *a1)
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
    sub_1800F99A0(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
