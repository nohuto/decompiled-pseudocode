/*
 * XREFs of sub_180123D38 @ 0x180123D38
 * Callers:
 *     sub_180123F3C @ 0x180123F3C (sub_180123F3C.c)
 * Callees:
 *     sub_180123DA8 @ 0x180123DA8 (sub_180123DA8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180123D38(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xB8uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::ThreadPool::TaskHandler>::`vftable';
    sub_180123DA8(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
