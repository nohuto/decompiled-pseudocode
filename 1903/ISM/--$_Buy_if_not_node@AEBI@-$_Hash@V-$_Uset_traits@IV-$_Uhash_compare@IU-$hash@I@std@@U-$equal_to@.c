/*
 * XREFs of ??$_Buy_if_not_node@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@1@AEBIU_Not_a_node_tag@1@@Z @ 0x18003067C
 * Callers:
 *     ??$_Insert@AEBIU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBIU_Not_a_node_tag@1@@Z @ 0x180030B6C (--$_Insert@AEBIU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@.c)
 * Callees:
 *     ??$_Buynode@AEBI@?$_List_buy@IV?$allocator@I@std@@@std@@QEAAPEAU?$_List_node@IPEAX@1@PEAU21@0AEBI@Z @ 0x180030784 (--$_Buynode@AEBI@-$_List_buy@IV-$allocator@I@std@@@std@@QEAAPEAU-$_List_node@IPEAX@1@PEAU21@0AEB.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Buy_if_not_node<unsigned int const &>(
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
  v8 = std::_List_buy<unsigned int>::_Buynode<unsigned int const &>(a1, *v3, v7, a3);
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
