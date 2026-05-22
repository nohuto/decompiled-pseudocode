/*
 * XREFs of ??$_Insert@AEBQEAUISystemContextObserver@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x18003A74C
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18003A694 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18003A694 (-_Check_size@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Insert<ISystemContextObserver * const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 **v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *iter; // rax
  __int64 v25; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v26[3]; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = 2 * (v8 & *(_QWORD *)(a1 + 48));
  v12 = *(_QWORD *)(a1 + 24);
  if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48)))
    || (v10 = **(_QWORD **)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48)) + 8),
        v10 == *(_QWORD *)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48)))) )
  {
LABEL_9:
    v14 = *a4;
    if ( v10 != *a4 )
    {
      *(_QWORD *)a4[1] = v14;
      **(_QWORD **)(v14 + 8) = v10;
      **(_QWORD **)(v10 + 8) = a4;
      v15 = *(_QWORD **)(v10 + 8);
      *(_QWORD *)(v10 + 8) = *(_QWORD *)(v14 + 8);
      *(_QWORD *)(v14 + 8) = a4[1];
      a4[1] = (__int64)v15;
    }
    v16 = *(_QWORD *)(a1 + 24);
    v17 = *(_QWORD *)(v16 + 8 * v11);
    if ( v17 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v16 + 8 * v11) = a4;
      v18 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(v18 + 8 * v11 + 8) = a4;
    }
    else if ( v17 == v10 )
    {
      *(_QWORD *)(v16 + 8 * v11) = a4;
    }
    else
    {
      v19 = *(__int64 ***)(v16 + 8 * v11 + 8);
      v20 = *v19;
      *(_QWORD *)(v16 + 8 * v11 + 8) = *v19;
      if ( v20 != a4 )
      {
        v21 = *(_QWORD *)(a1 + 24);
        v22 = *(_QWORD *)(v21 + 8 * v11 + 8);
        *(_QWORD *)(v21 + 8 * v11 + 8) = *(_QWORD *)(v22 + 8);
      }
    }
    try
    {
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Check_size((float *)a1);
      *(_QWORD *)a2 = a4;
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Make_iter(
               v23,
               &v25,
               (__int64)a4);
      std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
        (_QWORD *)a1,
        v26,
        (_QWORD *)*iter);
      throw;
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v10 + 8);
      if ( *a3 == *(_QWORD *)(v10 + 16) )
        break;
      if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *(_QWORD *)(a1 + 48))) )
        goto LABEL_9;
    }
    *(_QWORD *)a4[1] = *a4;
    *(_QWORD *)(*a4 + 8) = a4[1];
    --*(_QWORD *)(a1 + 16);
    operator delete(a4, (const struct std::nothrow_t *)0x18);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  return result;
}
