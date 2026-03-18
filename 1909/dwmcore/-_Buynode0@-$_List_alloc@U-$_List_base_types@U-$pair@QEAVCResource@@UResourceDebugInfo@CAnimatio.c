/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@2@PEAU32@0@Z @ 0x180042554
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18004248C (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCResource@@@2@V-$tuple@$$V@2@@-$_Hash@.c)
 *     ??0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z @ 0x18004BD34 (--0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
