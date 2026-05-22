/*
 * XREFs of ??$_Buy_if_not_node@AEBQEAUIHeatSystemContextClient@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@U_Iterator_base0@2@@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18007A910
 * Callers:
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18007A9FC (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 * Callees:
 *     ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x18007A9A4 (--$_Buynode@AEBQEAUIHeatSystemContextClient@@@-$_List_buy@PEAUIHeatSystemContextClient@@V-$alloc.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Buy_if_not_node<IHeatSystemContextClient * const &>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v6; // rsi
  __int64 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *result; // rax

  v3 = *(_QWORD **)(a1 + 8);
  v6 = *v3;
  v7 = *(__int64 **)(*v3 + 8LL);
  v8 = std::_List_buy<IHeatSystemContextClient *>::_Buynode<IHeatSystemContextClient * const &>(a1, *v3, v7, a3);
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 == 0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v9 + 1;
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  result = a2;
  *a2 = **(_QWORD **)(a1 + 8);
  return result;
}
