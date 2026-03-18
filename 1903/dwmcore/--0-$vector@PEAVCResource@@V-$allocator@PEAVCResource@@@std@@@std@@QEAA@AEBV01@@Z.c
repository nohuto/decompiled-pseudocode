/*
 * XREFs of ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C7EB0
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800C7D94 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<CResource *>::vector<CResource *>(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  SIZE_T v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  size_t v9; // rbx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v6 = 8 * v4;
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
    *(_QWORD *)a1 = v7;
    v8 = v7;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = &v7[v6];
    v9 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v7, *(const void **)a2, v9);
    *(_QWORD *)(a1 + 8) = &v8[v9];
  }
  return a1;
}
