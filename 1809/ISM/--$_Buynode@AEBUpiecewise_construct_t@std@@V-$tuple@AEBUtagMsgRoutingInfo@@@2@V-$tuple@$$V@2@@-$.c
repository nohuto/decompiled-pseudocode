/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18008DE70
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180089100 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@2@PEAU32@0@Z @ 0x18008D80C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@.c)
 */

_OWORD *__fastcall std::_List_buy<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::_Buynode<std::piecewise_construct_t const &,std::tuple<tagMsgRoutingInfo const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _OWORD **a5)
{
  _OWORD *result; // rax
  _OWORD *v6; // rdx

  result = std::_List_alloc<std::_List_base_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>::_Buynode0(
             a1,
             a2,
             a3);
  v6 = *a5;
  result[1] = **a5;
  result[2] = v6[1];
  result[3] = *((unsigned __int64 *)v6 + 4);
  return result;
}
