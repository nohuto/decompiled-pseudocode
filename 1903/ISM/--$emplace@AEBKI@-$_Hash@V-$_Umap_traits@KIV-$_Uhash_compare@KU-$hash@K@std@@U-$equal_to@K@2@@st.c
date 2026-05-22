/*
 * XREFs of ??$emplace@AEBKI@?$_Hash@V?$_Umap_traits@KIV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAI@Z @ 0x1800BA568
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBC90 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ??$_Buynode@AEBKI@?$_List_buy@U?$pair@$$CBKI@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKI@std@@PEAX@1@PEAU21@0AEBK$$QEAI@Z @ 0x1800B9CB4 (--$_Buynode@AEBKI@-$_List_buy@U-$pair@$$CBKI@std@@V-$allocator@U-$pair@$$CBKI@std@@@2@@std@@QEAA.c)
 *     ??$_Insert@AEAU?$pair@$$CBKG@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKG@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@1@@Z @ 0x1800B9DA8 (--$_Insert@AEAU-$pair@$$CBKG@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned int,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>::emplace<unsigned long const &,unsigned int>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  _QWORD **v4; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax

  v4 = *(_QWORD ***)(a1 + 8);
  v7 = (__int64)*v4;
  v8 = (_QWORD *)(*v4)[1];
  v9 = std::_List_buy<std::pair<unsigned long const,unsigned int>>::_Buynode<unsigned long const &,unsigned int>(
         a1,
         *v4,
         v8,
         a3,
         a4);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::_Insert<std::pair<unsigned long const,unsigned short> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>>(
    (_QWORD *)a1,
    a2,
    (unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(_QWORD **)(a1 + 8));
  return a2;
}
