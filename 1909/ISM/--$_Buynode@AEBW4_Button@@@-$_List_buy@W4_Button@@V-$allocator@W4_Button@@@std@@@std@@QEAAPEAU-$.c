/*
 * XREFs of ??$_Buynode@AEBW4_Button@@@?$_List_buy@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAPEAU?$_List_node@W4_Button@@PEAX@1@PEAU21@0AEBW4_Button@@@Z @ 0x1800A0618
 * Callers:
 *     ??$_Buy_if_not_node@AEBW4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x1800A0520 (--$_Buy_if_not_node@AEBW4_Button@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Butto.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078D34 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

_QWORD *__fastcall std::_List_buy<enum _Button>::_Buynode<enum _Button const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(a1, a2, a3);
  *((_DWORD *)result + 4) = *a4;
  return result;
}
