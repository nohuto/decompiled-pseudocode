/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUInputContext@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18008DE10
 * Callers:
 *     ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x18008C7FC (--A-$unordered_map@KUInputContext@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUInp.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@2@PEAU32@0@Z @ 0x18008D80C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,InputContext>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _DWORD **a5)
{
  _QWORD *v6; // [rsp+58h] [rbp+20h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>::_Buynode0(a1, a2, a3);
  *((_DWORD *)v6 + 4) = **a5;
  memset_0(v6 + 3, 0, 0x28uLL);
  v6[3] = 0LL;
  v6[4] = 0LL;
  return v6;
}
