/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@Z @ 0x18017053C
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180170444 (-_Init@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVIRenderTarget@@V?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x180154974 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVIRende.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,unsigned int>>>>>::assign(
        __int64 *a1,
        unsigned __int64 a2,
        void ***a3)
{
  void **v3; // rax
  void ***v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  void ***i; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 j; // rsi
  unsigned __int64 v18; // rsi
  void ***v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = (void ***)*a1;
  v7 = (a1[2] - *a1) >> 3;
  v8 = (a1[1] - *a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v10 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v11 = v10 + v7;
      if ( v10 + v7 < a2 )
        v11 = a2;
    }
    else
    {
      v11 = a2;
    }
    if ( v4 )
      std::_Deallocate<16,0>(v4, 8 * v7);
    LOBYTE(v3) = std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IRenderTarget * const,Microsoft::WRL::ComPtr<CRenderTargetImageSource>>>>>>::_Buy(
                   a1,
                   v11);
    for ( i = (void ***)*a1; a2; --a2 )
    {
      v3 = *a3;
      *i++ = *a3;
    }
LABEL_27:
    a1[1] = (__int64)i;
    return (char)v3;
  }
  v13 = 0LL;
  if ( a2 > v8 )
  {
    v14 = (unsigned __int64)(a1[1] - (_QWORD)v4 + 7) >> 3;
    if ( (unsigned __int64)v4 > a1[1] )
      v14 = 0LL;
    if ( v14 )
    {
      if ( v14 >= 2 )
      {
        v3 = *a3;
        if ( v4 > a3 || &v4[v14 - 1] < a3 )
        {
          v15 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v13 += 2LL;
          while ( v13 != v15 );
          v16 = 8 * v15;
          memset64(v4, (unsigned __int64)v3, v16 >> 3);
          v4 = (void ***)((char *)v4 + v16);
        }
      }
      while ( v13 != v14 )
      {
        v3 = *a3;
        ++v13;
        *v4++ = *a3;
      }
    }
    i = (void ***)a1[1];
    for ( j = a2 - v8; j; --j )
    {
      v3 = *a3;
      *i++ = *a3;
    }
    goto LABEL_27;
  }
  v18 = a2;
  v19 = &v4[v18];
  v20 = (v18 * 8) >> 3;
  if ( v4 > v19 )
    v20 = 0LL;
  if ( v20 )
  {
    if ( v20 >= 2 )
    {
      v3 = *a3;
      if ( v4 > a3 || &v4[v20 - 1] < a3 )
      {
        v21 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v13 += 2LL;
        while ( v13 != v21 );
        v22 = 8 * v21;
        memset64(v4, (unsigned __int64)v3, v22 >> 3);
        v4 = (void ***)((char *)v4 + v22);
      }
    }
    while ( v13 != v20 )
    {
      v3 = *a3;
      ++v13;
      *v4++ = *a3;
    }
  }
  a1[1] = (__int64)v19;
  return (char)v3;
}
