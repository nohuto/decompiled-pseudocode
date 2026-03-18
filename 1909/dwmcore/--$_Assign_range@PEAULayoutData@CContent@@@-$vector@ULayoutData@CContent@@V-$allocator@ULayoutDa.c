/*
 * XREFs of ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x1801C9750
 * Callers:
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801C9B28 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x1801C5364 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ?_Buy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z @ 0x1801CA020 (-_Buy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z.c)
 */

__int64 __fastcall std::vector<CContent::LayoutData>::_Assign_range<CContent::LayoutData *>(
        void **a1,
        char *a2,
        __int64 a3)
{
  char *v3; // rsi
  size_t v5; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r8
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  char *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rbx
  char *v16; // rdx
  void *v17; // rbx
  size_t v18; // r15

  v3 = (char *)*a1;
  v5 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) / 40;
  v9 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 40;
  v10 = (_BYTE *)a1[2] - (_BYTE *)*a1;
  if ( v8 > v10 / 40 )
  {
    if ( v8 > 0x666666666666666LL )
      std::_Xlength_error((const char *)v10);
    v11 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 40 * v12);
    std::vector<CContent::LayoutData>::_Buy(a1, v11);
    v13 = (char *)*a1;
    memmove_0(*a1, a2, v5);
    result = (__int64)&v13[v5];
    goto LABEL_9;
  }
  if ( v8 > v9 )
  {
    v15 = 40 * v9;
    memmove_0(v3, a2, 40 * v9);
    v16 = &a2[v15];
    v17 = a1[1];
    v18 = a3 - (_QWORD)v16;
    memmove_0(v17, v16, v18);
    result = (__int64)v17 + v18;
LABEL_9:
    a1[1] = (void *)result;
    return result;
  }
  memmove_0(v3, a2, v5);
  result = 5 * v8;
  a1[1] = &v3[40 * v8];
  return result;
}
