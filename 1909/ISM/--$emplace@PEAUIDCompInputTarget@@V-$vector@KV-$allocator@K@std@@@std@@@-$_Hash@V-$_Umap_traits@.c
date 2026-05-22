/*
 * XREFs of ??$emplace@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800BA4BC
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBB40 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ??$_Buynode@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$_List_buy@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@PEAX@1@PEAU21@0$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800B9BC4 (--$_Buynode@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@-$_List_buy@U-$pair@QEA.c)
 *     ??$_Insert@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800BA1BC (--$_Insert@AEAU-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@std@@V-$_List.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::emplace<IDCompInputTarget *,std::vector<unsigned long>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD **v4; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  __int64 v10; // rax

  v4 = (_QWORD **)a1[1];
  v7 = (__int64)*v4;
  v8 = (_QWORD *)(*v4)[1];
  v9 = std::_List_buy<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>::_Buynode<IDCompInputTarget *,std::vector<unsigned long>>(
         (__int64)a1,
         *v4,
         v8,
         a3,
         a4);
  v10 = a1[2];
  if ( v10 == 0x555555555555554LL )
    std::_Xlength_error("list<T> too long");
  a1[2] = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Insert<std::pair<IDCompInputTarget * const,std::vector<unsigned long>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>>>(
    a1,
    a2,
    *(_QWORD *)a1[1] + 16LL);
  return a2;
}
