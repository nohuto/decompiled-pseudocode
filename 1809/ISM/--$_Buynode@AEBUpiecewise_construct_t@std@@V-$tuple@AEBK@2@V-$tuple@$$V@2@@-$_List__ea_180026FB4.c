/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180026FB4
 * Callers:
 *     ??A?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAAAEAVMessageInfo@DragNDropProcessor@@AEBK@Z @ 0x180025D98 (--A-$unordered_map@KVMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800268E0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _DWORD **a5)
{
  _QWORD *v6; // [rsp+58h] [rbp+20h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>>::_Buynode0(
         a1,
         a2,
         a3);
  *((_DWORD *)v6 + 4) = **a5;
  memset_0(v6 + 3, 0, 0x40uLL);
  v6[3] = &DragNDropProcessor::MessageInfo::`vftable';
  v6[5] = 0LL;
  v6[6] = 0LL;
  v6[7] = 0LL;
  v6[9] = 0LL;
  v6[10] = 0LL;
  return v6;
}
