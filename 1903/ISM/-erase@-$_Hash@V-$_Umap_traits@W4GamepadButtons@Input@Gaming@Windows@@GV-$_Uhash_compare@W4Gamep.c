/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@@Z @ 0x180079340
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_Windows::Gaming::Input::GamepadButtons_unsigned_short_std::_Uhash_compare_enum_Windows::Gaming::Input::GamepadButtons_std::hash_enum_Windows::Gaming::Input::GamepadButtons__std::equal_to_enum_Windows::Gaming::Input::GamepadButtons____std::allocator_std::pair_enum_Windows::Gaming::Input::GamepadButtons_const__unsigned_short____0___::_Insert_std::pair_enum_Windows::Gaming::Input::GamepadButtons_const__unsigned_short__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_Windows::Gaming::Input::GamepadButtons_const__unsigned_short__________::_1_::catch$90 @ 0x18003B33E (_std--_Hash_std--_Umap_traits_enum_Windows--Gaming--Input--GamepadButtons_unsigned__ea_18003B33E.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_long_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_long____0___::_Insert_std::pair_unsigned_long_const__unsigned_long__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned_long__________::_1_::catch$90 @ 0x18003B6A4 (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_long_std--_Uhash_compare_unsig_ea_18003B6A4.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_short_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_short____0___::_Insert_std::pair_unsigned_long_const__unsigned_short__&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned_short__________::_1_::catch$55 @ 0x1800B9F43 (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_short_std--_Uhash_compare_unsi_ea_1800B9F43.c)
 *     ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x180141E50 (-OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180034A88 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::erase(
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
  std::list<ISystemContextObserver *>::erase((__int64)(a1 + 1), a2, a3);
  return a2;
}
