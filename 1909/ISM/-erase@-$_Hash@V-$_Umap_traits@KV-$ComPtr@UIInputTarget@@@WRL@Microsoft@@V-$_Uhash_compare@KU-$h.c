/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800BF5E8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_Microsoft::WRL::ComPtr_IInputTarget__std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget______0___::_Insert_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget____&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__Microsoft::WRL::ComPtr_IInputTarget____________::_1_::catch$55 @ 0x1800B9FBF (_std--_Hash_std--_Umap_traits_unsigned_long_Microsoft--WRL--ComPtr_IInputTarget__st_ea_1800B9FBF.c)
 * Callees:
 *     ?erase@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800BF814 (-erase@-$list@U-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax

  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)(a3 + 2);
  if ( a3 + 2 <= (_QWORD *)((char *)a3 + 20) )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - (unsigned __int8 *)(a3 + 2) != ((_QWORD *)((char *)a3 + 20) >= a3 + 2 ? 4 : 0) );
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = a1[1];
      v8 = a1[3];
      v10 = a1[1];
    }
    else
    {
      v10 = a3[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = *a3;
  }
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::erase(a1 + 1, a2, a3);
  return a2;
}
