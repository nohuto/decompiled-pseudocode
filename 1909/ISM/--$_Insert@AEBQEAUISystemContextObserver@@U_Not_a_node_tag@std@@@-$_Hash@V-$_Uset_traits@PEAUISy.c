/*
 * XREFs of ??$_Insert@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@1@@Z @ 0x180011618
 * Callers:
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x1800298E0 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBQEAUISystemContextObserver@@@?$_List_buy@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAAPEAU?$_List_node@PEAUISystemContextObserver@@PEAX@1@PEAU21@0AEBQEAUISystemContextObserver@@@Z @ 0x180011C44 (--$_Buynode@AEBQEAUISystemContextObserver@@@-$_List_buy@PEAUISystemContextObserver@@V-$allocator.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180013C50 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemCo.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Insert<ISystemContextObserver * const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r10
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 **v16; // rcx
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 **v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v28; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 8 )
  {
    do
      v5 = 0x100000001B3LL * (*v6++ ^ (unsigned __int64)v5);
    while ( v6 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v7 = 2 * (v5 & a1[6]);
  v8 = a1[3];
  v9 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(v8 + 16 * (v5 & a1[6])) == v9 )
  {
    v10 = a1[1];
  }
  else
  {
    try
    {
      v10 = **(_QWORD **)(v8 + 16 * (v5 & a1[6]) + 8);
    }
    catch ( ... )
    {
      throw;
    }
  }
  v11 = v10;
  while ( v11 != *(_QWORD *)(v8 + 16 * (v5 & a1[6])) )
  {
    v10 = *(_QWORD *)(v10 + 8);
    v11 = v10;
    if ( *(_QWORD *)a3 == *(_QWORD *)(v10 + 16) )
    {
      *(_QWORD *)a2 = v10;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v12 = *v9;
  v13 = *(__int64 **)(*v9 + 8LL);
  v14 = std::_List_buy<ISystemContextObserver *>::_Buynode<ISystemContextObserver * const &>(v8, *v9, v13, a3, -2LL);
  v15 = a1[2];
  if ( v15 == 0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  a1[2] = v15 + 1;
  *(_QWORD *)(v12 + 8) = v14;
  *v13 = v14;
  v16 = (__int64 **)a1[1];
  v17 = *v16;
  v28 = v17;
  v18 = *v17;
  if ( v11 != *v17 )
  {
    *(_QWORD *)v17[1] = v18;
    **(_QWORD **)(v18 + 8) = v10;
    **(_QWORD **)(v10 + 8) = v17;
    v22 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = *(_QWORD *)(v18 + 8);
    *(_QWORD *)(v18 + 8) = v17[1];
    v17[1] = v22;
    v16 = (__int64 **)a1[1];
  }
  v19 = a1[3];
  if ( *(__int64 ***)(v19 + 8 * v7) == v16 )
  {
    *(_QWORD *)(v19 + 8 * v7) = v17;
    v20 = a1[3];
    *(_QWORD *)(v20 + 8 * v7 + 8) = v17;
  }
  else if ( *(_QWORD *)(v19 + 8 * v7) == v11 )
  {
    *(_QWORD *)(v19 + 8 * v7) = v17;
  }
  else
  {
    v23 = *(__int64 ***)(v19 + 8 * v7 + 8);
    v24 = *v23;
    *(_QWORD *)(v19 + 8 * v7 + 8) = *v23;
    if ( v24 != v17 )
    {
      v25 = a1[3];
      v26 = *(_QWORD *)(v25 + 8 * v7 + 8);
      *(_QWORD *)(v25 + 8 * v7 + 8) = *(_QWORD *)(v26 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Check_size(a1);
    *(_QWORD *)a2 = v17;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
      a1,
      &v28,
      v28);
    throw;
  }
  return result;
}
