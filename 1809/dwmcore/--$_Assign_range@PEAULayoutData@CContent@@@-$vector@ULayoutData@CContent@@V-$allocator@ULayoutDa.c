/*
 * XREFs of ??$_Assign_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXPEAULayoutData@CContent@@0Uforward_iterator_tag@1@@Z @ 0x180194DC8
 * Callers:
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801951B8 (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?_Buy@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z @ 0x18019550C (-_Buy@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEAA_N_K@Z.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18019557C (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
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
  __int64 v10; // rbx
  __int64 v11; // r10
  char *v12; // rbx
  __int64 result; // rax
  __int64 v14; // rbx
  char *v15; // rdx
  char *v16; // rbx
  size_t v17; // r15
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (char *)*a1;
  v5 = a3 - (_QWORD)a2;
  v8 = (a3 - (__int64)a2) / 40;
  v9 = ((_BYTE *)a1[1] - (_BYTE *)*a1) / 40;
  if ( v8 > ((_BYTE *)a1[2] - (_BYTE *)*a1) / 40 )
  {
    if ( v8 > 0x666666666666666LL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v10 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v8, v9);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 40 * v11);
    std::vector<CContent::LayoutData>::_Buy(a1, v10);
    v12 = (char *)*a1;
    memmove_0(*a1, a2, v5);
    result = (__int64)&v12[v5];
    goto LABEL_9;
  }
  if ( v8 > v9 )
  {
    v14 = 40 * v9;
    memmove_0(v3, a2, 40 * v9);
    v15 = &a2[v14];
    v16 = (char *)a1[1];
    v17 = a3 - (_QWORD)v15;
    memmove_0(v16, v15, v17);
    result = (__int64)&v16[v17];
LABEL_9:
    a1[1] = (void *)result;
    return result;
  }
  memmove_0(v3, a2, v5);
  result = 5 * v8;
  a1[1] = &v3[40 * v8];
  return result;
}
