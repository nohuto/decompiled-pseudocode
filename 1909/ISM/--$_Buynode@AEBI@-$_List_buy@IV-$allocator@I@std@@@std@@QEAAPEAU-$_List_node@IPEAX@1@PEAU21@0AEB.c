/*
 * XREFs of ??$_Buynode@AEBI@?$_List_buy@IV?$allocator@I@std@@@std@@QEAAPEAU?$_List_node@IPEAX@1@PEAU21@0AEBI@Z @ 0x180030464
 * Callers:
 *     ??$_Buy_if_not_node@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@1@AEBIU_Not_a_node_tag@1@@Z @ 0x18003035C (--$_Buy_if_not_node@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@IV?$allocator@I@std@@@std@@@std@@QEAAPEAU?$_List_node@IPEAX@2@PEAU32@0@Z @ 0x180033804 (-_Buynode0@-$_List_alloc@U-$_List_base_types@IV-$allocator@I@std@@@std@@@std@@QEAAPEAU-$_List_no.c)
 */

__int64 __fastcall std::_List_buy<unsigned int>::_Buynode<unsigned int const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<unsigned int>>::_Buynode0(a1);
  *(_DWORD *)(result + 16) = *a4;
  return result;
}
