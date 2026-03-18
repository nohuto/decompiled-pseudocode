/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@Z @ 0x1800E4FAC
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E4F18 (-_Init@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x180154974 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVIRende.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void **__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        void ***a3)
{
  void **result; // rax
  void ***v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  void ***i; // rcx
  unsigned __int64 j; // rsi
  unsigned __int64 v16; // rsi
  void ***v17; // r8
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(void ****)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v21 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v22 = v21 + v7;
      if ( v21 + v7 < a2 )
        v22 = a2;
    }
    else
    {
      v22 = a2;
    }
    if ( v4 )
      std::_Deallocate<16,0>(v4, 8 * v7);
    result = (void **)std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>>>>::_Buy(
                        a1,
                        v22);
    for ( i = *(void ****)a1; a2; --a2 )
    {
      result = *a3;
      *i++ = *a3;
    }
    goto LABEL_15;
  }
  v10 = 0LL;
  if ( a2 > v8 )
  {
    v11 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4 + 7LL) >> 3;
    if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 8) )
      v11 = 0LL;
    if ( v11 )
    {
      if ( v11 >= 2 )
      {
        result = *a3;
        if ( v4 > a3 || &v4[v11 - 1] < a3 )
        {
          v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v10 += 2LL;
          while ( v10 != v12 );
          v13 = 8 * v12;
          memset64(v4, (unsigned __int64)result, v13 >> 3);
          v4 = (void ***)((char *)v4 + v13);
        }
      }
      while ( v10 != v11 )
      {
        result = *a3;
        ++v10;
        *v4++ = *a3;
      }
    }
    i = *(void ****)(a1 + 8);
    for ( j = a2 - v8; j; --j )
    {
      result = *a3;
      *i++ = *a3;
    }
LABEL_15:
    *(_QWORD *)(a1 + 8) = i;
    return result;
  }
  v16 = a2;
  v17 = &v4[v16];
  v18 = (v16 * 8) >> 3;
  if ( v4 > v17 )
    v18 = 0LL;
  if ( v18 )
  {
    if ( v18 >= 2 )
    {
      result = *a3;
      if ( v4 > a3 || &v4[v18 - 1] < a3 )
      {
        v19 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v10 += 2LL;
        while ( v10 != v19 );
        v20 = 8 * v19;
        memset64(v4, (unsigned __int64)result, v20 >> 3);
        v4 = (void ***)((char *)v4 + v20);
      }
    }
    while ( v10 != v18 )
    {
      result = *a3;
      ++v10;
      *v4++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v17;
  return result;
}
