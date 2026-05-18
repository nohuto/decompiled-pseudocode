/*
 * XREFs of sub_180123E48 @ 0x180123E48
 * Callers:
 *     sub_18012404C @ 0x18012404C (sub_18012404C.c)
 * Callees:
 *     sub_180123EB8 @ 0x180123EB8 (sub_180123EB8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180123E48(_QWORD *a1)
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
    sub_180123EB8(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
