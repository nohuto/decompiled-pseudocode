/*
 * XREFs of ??$_Range_construct_or_tidy@PEAPEAVCCompositionLight@@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@AEAAXPEAPEAVCCompositionLight@@0Uforward_iterator_tag@1@@Z @ 0x1801B1C44
 * Callers:
 *     ??$?0V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1801B1BB8 (--$-0V-$span_iterator@V-$span@PEAVCCompositionLight@@$0-0@gsl@@$0A@@details@gsl@@X@-$vector@PEAV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<CCompositionLight *>::_Range_construct_or_tidy<CCompositionLight * *>(
        __int64 a1,
        const void *a2,
        __int64 a3)
{
  char *result; // rax
  size_t v4; // r14
  unsigned __int64 v5; // rbx
  SIZE_T v8; // rbx
  char *v9; // rax
  char *v10; // rdi

  result = 0LL;
  v4 = a3 - (_QWORD)a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v5 = (a3 - (__int64)a2) >> 3;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v8 = 8 * v5;
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v9;
    v10 = v9;
    *(_QWORD *)(a1 + 16) = &v9[v8];
    memmove_0(v9, a2, v4);
    result = &v10[v4];
    *(_QWORD *)(a1 + 8) = &v10[v4];
  }
  return result;
}
