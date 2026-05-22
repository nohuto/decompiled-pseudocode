/*
 * XREFs of ?_Reinsert@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800A23A0
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800A22C8 (-_Check_size@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@.c)
 * Callees:
 *     ??$_Insert@AEBW4_Button@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x1800A0B04 (--$_Insert@AEBW4_Button@@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@W4.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Reinsert(
        __int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  result = *(_QWORD **)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    v3 = result[1];
    do
    {
      v4 = **(_QWORD **)(a1 + 8);
      result = (_QWORD *)std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Insert<enum _Button const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<enum _Button>>,std::_Iterator_base0>>(
                           a1,
                           (__int64)v5,
                           (unsigned __int8 *)(v4 + 16),
                           v4);
    }
    while ( v4 != v3 );
  }
  return result;
}
