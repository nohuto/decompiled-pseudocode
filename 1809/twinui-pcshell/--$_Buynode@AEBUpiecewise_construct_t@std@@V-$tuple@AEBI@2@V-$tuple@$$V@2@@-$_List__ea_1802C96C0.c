/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802C96C0
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802CA0A0 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V_ea_1802CA0A0.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@2@PEAU32@0@Z @ 0x1802C918C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@V-$a.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned int const,KeyboardHosting::ViewState>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _DWORD **a5)
{
  _QWORD *v6; // [rsp+58h] [rbp+20h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,KeyboardHosting::ViewState>>>::_Buynode0(
         a1,
         a2,
         a3);
  *((_DWORD *)v6 + 4) = **a5;
  memset_0((char *)v6 + 20, 0, 0x30uLL);
  return v6;
}
