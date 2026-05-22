/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@2@V32@@Z @ 0x1800A24F8
 * Callers:
 *     _std::_Hash_std::_Uset_traits_enum__Button_std::_Uhash_compare_enum__Button_std::hash_enum__Button__std::equal_to_enum__Button____std::allocator_enum__Button__0___::_Insert_enum__Button_const_&_std::_Not_a_node_tag__::_1_::catch$22 @ 0x1800A0AD3 (_std--_Hash_std--_Uset_traits_enum__Button_std--_Uhash_compare_enum__Button_std--ha_ea_1800A0AD3.c)
 *     _std::_Hash_std::_Uset_traits_enum__Button_std::_Uhash_compare_enum__Button_std::hash_enum__Button__std::equal_to_enum__Button____std::allocator_enum__Button__0___::_Insert_enum__Button_const_&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_enum__Button____std::_Iterator_base0____::_1_::catch$30 @ 0x1800A0C5F (_std--_Hash_std--_Uset_traits_enum__Button_std--_Uhash_compare_enum__Button_std--ha_ea_1800A0C5F.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA_KAEBW4_Button@@@Z @ 0x1800A25C8 (-erase@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_B_ea_1800A25C8.c)
 * Callees:
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180034768 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *result; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  v6 = (unsigned __int8 *)(a3 + 2);
  if ( a3 + 2 <= (__int64 *)((char *)a3 + 20) )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - (unsigned __int8 *)(a3 + 2) != ((__int64 *)((char *)a3 + 20) >= a3 + 2 ? 4 : 0) );
  }
  v8 = a1[3];
  v9 = 2 * (v5 & a1[6]);
  if ( *(__int64 **)(v8 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(__int64 **)(v8 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = a1[1];
      v8 = a1[3];
      v10 = a1[1];
    }
    else
    {
      v10 = a3[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(__int64 **)(v8 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v8 + 16 * (v5 & a1[6])) = *a3;
  }
  v11 = *std::list<ISystemContextObserver *>::erase((__int64)(a1 + 1), &v13, a3);
  result = a2;
  *a2 = v11;
  return result;
}
