/*
 * XREFs of ??$_Insert@AEBQEAUISystemContextObserver@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x1800D3008
 * Callers:
 *     ?_Reinsert@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800D33F4 (-_Reinsert@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemCont.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180013CE0 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemCo.c)
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180034A88 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Insert<ISystemContextObserver * const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  unsigned __int8 *v5; // r11
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v25; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v26; // [rsp+68h] [rbp+20h]

  v26 = (__int64 *)a4;
  v5 = a3;
  v8 = 0xCBF29CE484222325uLL;
  v9 = a3 + 8 >= a3 ? 8 : 0;
  if ( a3 < a3 + 8 )
  {
    do
      v8 = 0x100000001B3LL * (*a3++ ^ (unsigned __int64)v8);
    while ( a3 - v5 != v9 );
  }
  v10 = 2 * (v8 & a1[6]);
  v11 = a1[3];
  v12 = a1[1];
  if ( *(_QWORD *)(v11 + 16 * (v8 & a1[6])) != v12 )
    v12 = **(_QWORD **)(v11 + 16 * (v8 & a1[6]) + 8);
  v13 = v12;
  while ( v13 != *(_QWORD *)(v11 + 16 * (v8 & a1[6])) )
  {
    v12 = *(_QWORD *)(v12 + 8);
    v13 = v12;
    if ( *(_QWORD *)v5 == *(_QWORD *)(v12 + 16) )
    {
      std::list<ISystemContextObserver *>::erase((__int64)(a1 + 1), &v25, (__int64 *)a4);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v15 = *(_QWORD *)a4;
  if ( v13 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v15;
    **(_QWORD **)(v15 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v16 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v16;
  }
  v17 = a1[3];
  v18 = *(_QWORD *)(v17 + 8 * v10);
  if ( v18 == a1[1] )
  {
    *(_QWORD *)(v17 + 8 * v10) = a4;
    v19 = a1[3];
    *(_QWORD *)(v19 + 8 * v10 + 8) = a4;
  }
  else if ( v18 == v13 )
  {
    *(_QWORD *)(v17 + 8 * v10) = a4;
  }
  else
  {
    v20 = *(__int64 **)(v17 + 8 * v10 + 8);
    v21 = *v20;
    *(_QWORD *)(v17 + 8 * v10 + 8) = *v20;
    if ( v21 != a4 )
    {
      v22 = a1[3];
      v23 = *(_QWORD *)(v22 + 8 * v10 + 8);
      *(_QWORD *)(v22 + 8 * v10 + 8) = *(_QWORD *)(v23 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Check_size((__int64)a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
      a1,
      &v25,
      v26);
    throw;
  }
  return result;
}
