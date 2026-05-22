/*
 * XREFs of ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V32@@Z @ 0x18003A2A4
 * Callers:
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18003A148 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 *     _std::_Hash_std::_Uset_traits_ISystemContextObserver_____ptr64_std::_Uhash_compare_ISystemContextObserver_____ptr64_std::hash_ISystemContextObserver_____ptr64__std::equal_to_ISystemContextObserver_____ptr64____std::allocator_ISystemContextObserver_____ptr64__0___::_Insert_ISystemContextObserver_____ptr64_const_&___ptr64_std::_Not_a_node_tag__::_1_::catch$0 @ 0x18012F5AA (_std--_Hash_std--_Uset_traits_ISystemContextObserver_____ptr64_std--_Uhash_compare__ea_18012F5AA.c)
 *     _std::_Hash_std::_Uset_traits_ISystemContextObserver_____ptr64_std::_Uhash_compare_ISystemContextObserver_____ptr64_std::hash_ISystemContextObserver_____ptr64__std::equal_to_ISystemContextObserver_____ptr64____std::allocator_ISystemContextObserver_____ptr64__0___::_Insert_ISystemContextObserver_____ptr64_const_&___ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_ISystemContextObserver_____ptr64____std::_Iterator_base0____::_1_::catch$10 @ 0x18012F608 (_std--_Hash_std--_Uset_traits_ISystemContextObserver_____ptr64_std--_Uhash_compare__ea_18012F608.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
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
  for ( i = 0LL; i < 8; ++i )
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
