/*
 * XREFs of sub_180017074 @ 0x180017074
 * Callers:
 *     sub_180015D84 @ 0x180015D84 (sub_180015D84.c)
 * Callees:
 *     sub_18000DF58 @ 0x18000DF58 (sub_18000DF58.c)
 *     sub_18009EF0C @ 0x18009EF0C (sub_18009EF0C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180017074(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xA0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::Sampler>::`vftable';
    sub_18009EF0C(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  sub_18000DF58((__int64)a1, (__int64)(v3 + 4));
  return a1;
}
