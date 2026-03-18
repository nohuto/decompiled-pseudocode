/*
 * XREFs of ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z @ 0x1800B903C
 * Callers:
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAAEAVCMegaRect@@AEAPEAVCHWDrawListEntry@@@Z @ 0x1800B8F14 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void *__fastcall std::deque<CMegaRect>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  const char *v3; // rcx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  SIZE_T v6; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r15
  size_t v11; // rbx
  const void *v12; // rdx
  char *v13; // rbx
  size_t v14; // r8
  char *v15; // rcx
  void *result; // rax
  __int64 v17; // rcx
  SIZE_T v18; // rcx
  LPVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 1LL;
  v3 = (const char *)a1[2];
  if ( v3 )
    v2 = (unsigned __int64)v3;
  while ( 1 )
  {
    v4 = v2 - (_QWORD)v3;
    if ( v2 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0x249249249249249LL - v2 < v2 )
      std::_Xlength_error(v3);
    v2 *= 2LL;
  }
  v5 = a1[3];
  v6 = 8 * v2;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    v6 = -1LL;
  if ( v6 >= 0x1000 )
  {
    v18 = v6 + 39;
    if ( v6 + 39 < v6 )
      v18 = -1LL;
    v19 = operator new(v18);
    if ( !v19 )
    {
      _o__invalid_parameter_noinfo_noreturn(v21, v20);
      JUMPOUT(0x180141EAALL);
    }
    v8 = (_QWORD *)(((unsigned __int64)v19 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v8 - 1) = v19;
  }
  else if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    v8 = HeapAlloc(ProcessHeap, 0, v6);
    if ( !v8 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v9);
  }
  else
  {
    v8 = 0LL;
  }
  v10 = 8 * v5;
  v11 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v8[v5], (const void *)(a1[1] + 8 * v5), v11);
  v12 = (const void *)a1[1];
  v13 = (char *)&v8[v5] + v11;
  if ( v5 > v4 )
  {
    memmove_0(v13, v12, 8 * v4);
    memmove_0(v8, (const void *)(8 * v4 + a1[1]), v10 - 8 * v4);
    v15 = (char *)v8 + v10 - 8 * v4;
    v14 = 8 * v4;
  }
  else
  {
    memmove_0(v13, v12, 8 * v5);
    memset_0(&v13[v10], 0, 8 * (v4 - v5));
    v14 = 8 * v5;
    v15 = (char *)v8;
  }
  result = memset_0(v15, 0, v14);
  v17 = a1[1];
  if ( v17 )
    result = (void *)std::_Deallocate<16,0>(v17, 8LL * a1[2]);
  a1[1] = v8;
  a1[2] += v4;
  return result;
}
