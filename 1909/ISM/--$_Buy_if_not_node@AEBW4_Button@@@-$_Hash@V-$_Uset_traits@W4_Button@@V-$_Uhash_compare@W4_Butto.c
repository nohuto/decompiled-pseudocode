/*
 * XREFs of ??$_Buy_if_not_node@AEBW4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x1800A0520
 * Callers:
 *     ??$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x1800A0988 (--$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_com.c)
 * Callees:
 *     ??$_Buynode@AEBW4_Button@@@?$_List_buy@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAPEAU?$_List_node@W4_Button@@PEAX@1@PEAU21@0AEBW4_Button@@@Z @ 0x1800A0618 (--$_Buynode@AEBW4_Button@@@-$_List_buy@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAPEAU-$.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Buy_if_not_node<enum _Button const &>(
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
  v8 = std::_List_buy<enum _Button>::_Buynode<enum _Button const &>(a1, *v3, v7, a3);
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
