/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800696D4
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006A108 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_18006A108.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006D6EC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v6; // [rsp+58h] [rbp+20h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>>::_Buynode0(a1);
  *(_DWORD *)(v6 + 16) = **a5;
  memset_0((void *)(v6 + 24), 0, 0x38uLL);
  *(_QWORD *)(v6 + 24) = &DragNDropProcessor::MessageInfo::`vftable';
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  return v6;
}
