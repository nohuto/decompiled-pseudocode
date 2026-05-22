/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@2@V32@@Z @ 0x180038294
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180055580 (-erase@-$_Hash@V-$_Umap_traits@KKV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$allo.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V21@@Z @ 0x180056480 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@@s.c)
 *     ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801045B0 (-OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_short_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_short____0___::_Insert_std::pair_unsigned_long_const__unsigned_short__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned_short__________::_1_::catch$0 @ 0x18012F483 (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_short_std--_Uhash_compare_unsi_ea_18012F483.c)
 *     _std::_Hash_std::_Uset_traits_enum__Button_std::_Uhash_compare_enum__Button_std::hash_enum__Button__std::equal_to_enum__Button____std::allocator_enum__Button__0___::_Insert_enum__Button_const_&___ptr64_std::_Not_a_node_tag__::_1_::catch$0 @ 0x1801314A1 (_std--_Hash_std--_Uset_traits_enum__Button_std--_Uhash_compare_enum__Button_std--ha_ea_1801314A1.c)
 *     _std::_Hash_std::_Uset_traits_enum__Button_std::_Uhash_compare_enum__Button_std::hash_enum__Button__std::equal_to_enum__Button____std::allocator_enum__Button__0___::_Insert_enum__Button_const_&___ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_enum__Button____std::_Iterator_base0____::_1_::catch$10 @ 0x1801314FF (_std--_Hash_std--_Uset_traits_enum__Button_std--_Uhash_compare_enum__Button_std--ha_ea_1801314FF.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i + 16);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = v5 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  if ( *(_QWORD **)(v9 + 8 * v10 + 8) == a3 )
  {
    if ( *(_QWORD **)(v9 + 8 * v10) == a3 )
    {
      *(_QWORD *)(v9 + 8 * v10) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = a3[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_QWORD **)(v9 + 8 * v10) == a3 )
  {
    *(_QWORD *)(v9 + 8 * v10) = *a3;
  }
  v12 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  operator delete(a3, (const struct std::nothrow_t *)0x18);
  *a2 = v12;
  return a2;
}
