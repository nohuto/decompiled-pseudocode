/*
 * XREFs of ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x18007A764
 * Callers:
 *     ??$_Buy_if_not_node@AEBQEAUIHeatSystemContextClient@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@U_Iterator_base0@2@@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18007A6D0 (--$_Buy_if_not_node@AEBQEAUIHeatSystemContextClient@@@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemCon.c)
 *     ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x180125DB0 (-SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078D34 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

_QWORD *__fastcall std::_List_buy<IHeatSystemContextClient *>::_Buynode<IHeatSystemContextClient * const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(a1, a2, a3);
  result[2] = *a4;
  return result;
}
