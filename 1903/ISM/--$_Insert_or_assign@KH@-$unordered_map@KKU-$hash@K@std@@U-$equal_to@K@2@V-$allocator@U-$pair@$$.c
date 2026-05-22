/*
 * XREFs of ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x180014188
 * Callers:
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18001406C (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 * Callees:
 *     ??$_Buynode@KH@?$_List_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@1@PEAU21@0$$QEAK$$QEAH@Z @ 0x180014238 (--$_Buynode@KH@-$_List_buy@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@QEAAPEA.c)
 *     ??$_Insert@AEAU?$pair@$$CBKK@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKK@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@@Z @ 0x1800142C8 (--$_Insert@AEAU-$pair@$$CBKK@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@AEBK@Z @ 0x180026630 (-lower_bound@-$_Hash@V-$_Umap_traits@KKV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  int v7; // r8d
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::lower_bound(
    a1,
    &v15);
  v8 = *(__int64 **)(a1 + 8);
  v9 = v15;
  if ( (__int64 *)v15 == v8 )
  {
    v10 = *v8;
    v11 = *(__int64 **)(*v8 + 8);
    v12 = std::_List_buy<std::pair<unsigned long const,unsigned long>>::_Buynode<unsigned long,int>(
            (_DWORD)v8,
            *v8,
            (_DWORD)v11,
            v7,
            (__int64)a4);
    v13 = *(_QWORD *)(a1 + 16);
    if ( v13 == 0xAAAAAAAAAAAAAA9LL )
      std::_Xlength_error("list<T> too long");
    *(_QWORD *)(a1 + 16) = v13 + 1;
    *(_QWORD *)(v10 + 8) = v12;
    *v11 = v12;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert<std::pair<unsigned long const,unsigned long> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned long>>>>>(
      a1,
      a2,
      **(_QWORD **)(a1 + 8) + 16LL);
  }
  else
  {
    *(_DWORD *)(v15 + 20) = *a4;
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
