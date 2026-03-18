/*
 * XREFs of ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800679A4
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800678B8 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::vector<CResource *>::vector<CResource *>(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  SIZE_T v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  size_t v9; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v6 = 8 * v4;
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
    *a1 = v7;
    v8 = v7;
    a1[1] = v7;
    a1[2] = &v7[v6];
    v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v7, *(const void **)a2, v9);
    a1[1] = &v8[v9];
  }
  return a1;
}
