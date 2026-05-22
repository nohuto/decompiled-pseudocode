/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180069938
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006A068 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_18006A068.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x18006DB54 (-_Reinsert@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_co.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@2@_K@Z @ 0x180034244 (-_End@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-$_Uhash_compare@KU-.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x18006D7E4 (-_Check_size@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?erase@?$list@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18006E68C (-erase@-$list@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V-$allocator@U-.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Insert<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>>>>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  unsigned __int8 *v5; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 **v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v25; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v26; // [rsp+68h] [rbp+20h]

  v26 = a4;
  v5 = a3;
  v7 = 0xCBF29CE484222325uLL;
  v8 = a3 + 4 >= a3 ? 4 : 0;
  if ( a3 < a3 + 4 )
  {
    do
      v7 = 0x100000001B3LL * (*a3++ ^ (unsigned __int64)v7);
    while ( a3 - v5 != v8 );
  }
  v9 = *std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_End(
          a1,
          &v25,
          v7 & *(_QWORD *)(a1 + 48));
  v12 = v9;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v11 + 24);
    if ( v12 == *(_QWORD *)(v13 + 16 * v10) )
      break;
    v9 = *(_QWORD *)(v9 + 8);
    v12 = v9;
    if ( *(_DWORD *)v5 == *(_DWORD *)(v9 + 16) )
    {
      std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>::erase(v11 + 8, &v25, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v15 = *a4;
  if ( v12 != *a4 )
  {
    *(_QWORD *)a4[1] = v15;
    **(_QWORD **)(v15 + 8) = v9;
    **(_QWORD **)(v9 + 8) = a4;
    v16 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = a4[1];
    a4[1] = v16;
    v13 = *(_QWORD *)(v11 + 24);
  }
  v17 = 2 * v10;
  v18 = *(_QWORD *)(v13 + 8 * v17);
  if ( v18 == *(_QWORD *)(v11 + 8) )
  {
    *(_QWORD *)(v13 + 8 * v17) = a4;
    v19 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v19 + 8 * v17 + 8) = a4;
  }
  else if ( v18 == v12 )
  {
    *(_QWORD *)(v13 + 8 * v17) = a4;
  }
  else
  {
    v20 = *(__int64 ***)(v13 + 8 * v17 + 8);
    v21 = *v20;
    *(_QWORD *)(v13 + 8 * v17 + 8) = *v20;
    if ( v21 != a4 )
    {
      v22 = *(_QWORD *)(v11 + 24);
      v23 = *(_QWORD *)(v22 + 8 * v17 + 8);
      *(_QWORD *)(v22 + 8 * v17 + 8) = *(_QWORD *)(v23 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::_Check_size(v11);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::erase(
      a1,
      &v25,
      v26);
    throw;
  }
  return result;
}
