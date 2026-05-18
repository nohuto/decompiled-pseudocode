/*
 * XREFs of sub_180016F48 @ 0x180016F48
 * Callers:
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 * Callees:
 *     sub_18000DF58 @ 0x18000DF58 (sub_18000DF58.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180016F48(_QWORD *a1)
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
    sub_180095108(v2 + 4);
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
