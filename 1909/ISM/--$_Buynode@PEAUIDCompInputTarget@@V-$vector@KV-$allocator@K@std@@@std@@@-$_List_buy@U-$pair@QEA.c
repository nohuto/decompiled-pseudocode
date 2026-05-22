/*
 * XREFs of ??$_Buynode@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$_List_buy@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@PEAX@1@PEAU21@0$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800B9BC4
 * Callers:
 *     ??$emplace@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIDCompInputTarget@@$$QEAV?$vector@KV?$allocator@K@std@@@1@@Z @ 0x1800BA4BC (--$emplace@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@-$_Hash@V-$_Umap_traits@.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006D3BC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$alloca.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>::_Buynode<IDCompInputTarget *,std::vector<unsigned long>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>::_Buynode0(
             a1,
             a2,
             a3);
  result[2] = *a4;
  result[3] = 0LL;
  result[4] = 0LL;
  result[5] = 0LL;
  result[3] = *a5;
  result[4] = a5[1];
  result[5] = a5[2];
  *a5 = 0LL;
  a5[1] = 0LL;
  a5[2] = 0LL;
  return result;
}
