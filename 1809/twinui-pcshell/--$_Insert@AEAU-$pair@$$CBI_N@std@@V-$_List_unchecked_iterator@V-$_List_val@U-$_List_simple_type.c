/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBI_N@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBI_N@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@1@@Z @ 0x1802BF1A0
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802BF7B8 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trait.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1802C9384 (-_Reinsert@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1802C927C (-_Check_size@-$_Hash@V-$_Umap_traits@I_NV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 *     ?erase@?$list@U?$pair@$$CBI_N@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@@Z @ 0x1802C94F4 (-erase@-$list@U-$pair@$$CBI_N@std@@V-$allocator@U-$pair@$$CBI_N@std@@@2@@std@@QEAA-AV-$_List_ite.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Insert<std::pair<unsigned int const,bool> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,bool>>>>>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r10
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 **v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  char v24; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v25; // [rsp+68h] [rbp+20h]

  v25 = a4;
  v7 = std::_Hash_bytes(a3, 4uLL);
  v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
                    v8,
                    &v24,
                    v7 & *(_QWORD *)(v8 + 48));
  v12 = 2 * v11;
  while ( v9 != *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8 * v12) )
  {
    v9 = *(_QWORD *)(v9 + 8);
    if ( *(_DWORD *)a3 == *(_DWORD *)(v9 + 16) )
    {
      std::list<std::pair<unsigned int const,bool>>::erase(v10 + 8, &v24, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v14 = *a4;
  if ( v9 != *a4 )
  {
    *(_QWORD *)a4[1] = v14;
    **(_QWORD **)(v14 + 8) = v9;
    **(_QWORD **)(v9 + 8) = a4;
    v15 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = a4[1];
    a4[1] = v15;
  }
  v16 = *(_QWORD *)(v10 + 24);
  v17 = *(_QWORD *)(v16 + 8 * v12);
  if ( v17 == *(_QWORD *)(v10 + 8) )
  {
    *(_QWORD *)(v16 + 8 * v12) = a4;
    v18 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v18 + 8 * v12 + 8) = a4;
  }
  else if ( v17 == v9 )
  {
    *(_QWORD *)(v16 + 8 * v12) = a4;
  }
  else
  {
    v19 = *(__int64 ***)(v16 + 8 * v12 + 8);
    v20 = *v19;
    *(_QWORD *)(v16 + 8 * v12 + 8) = *v19;
    if ( v20 != a4 )
    {
      v21 = *(_QWORD *)(v10 + 24);
      v22 = *(_QWORD *)(v21 + 8 * v12 + 8);
      *(_QWORD *)(v21 + 8 * v12 + 8) = *(_QWORD *)(v22 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::_Check_size(v10);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,bool>>>>,void>(
      a1,
      &v24,
      v25);
    throw;
  }
  return result;
}
