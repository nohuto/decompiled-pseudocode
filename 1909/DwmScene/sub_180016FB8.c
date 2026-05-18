/*
 * XREFs of sub_180016FB8 @ 0x180016FB8
 * Callers:
 *     sub_180015CD4 @ 0x180015CD4 (sub_180015CD4.c)
 * Callees:
 *     sub_18000DFA8 @ 0x18000DFA8 (sub_18000DFA8.c)
 *     sub_180095218 @ 0x180095218 (sub_180095218.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180016FB8(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x148uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::Mesh>::`vftable';
    sub_180095218(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  sub_18000DFA8((__int64)a1, (__int64)(v3 + 4));
  return a1;
}
