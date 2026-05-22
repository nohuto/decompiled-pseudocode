/*
 * XREFs of ??$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x1800A0B48
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x1800A1814 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@@2@_K@Z @ 0x180034244 (-_End@-$_Hash@V-$_Umap_traits@KUUsageList@ConsumerControlDeviceCollection@@V-$_Uhash_compare@KU-.c)
 *     ?_Insert_bucket@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@2@0_K@Z @ 0x180034330 (-_Insert_bucket@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Butto.c)
 *     ??$_Buy_if_not_node@AEBW4_Button@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@U_Iterator_base0@2@@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x1800A06E0 (--$_Buy_if_not_node@AEBW4_Button@@@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Butto.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800A2488 (-_Check_size@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Insert<enum _Button const &,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r10
  __int64 v6; // rax
  unsigned __int8 *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbx
  _DWORD *v10; // r10
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = a3 + 4 >= a3 ? (unsigned __int8 *)4 : 0LL;
  if ( a3 < a3 + 4 )
  {
    do
      v6 = 0x100000001B3LL * (*a3++ ^ (unsigned __int64)v6);
    while ( (unsigned __int8 *)(a3 - v3) != v7 );
  }
  v8 = v6 & *(_QWORD *)(a1 + 48);
  v9 = *std::_Hash<std::_Umap_traits<unsigned long,ConsumerControlDeviceCollection::UsageList,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>,0>>::_End(
          a1,
          &v17,
          v8);
  v11 = v9;
  while ( v11 != *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v8) )
  {
    v9 = *(_QWORD *)(v9 + 8);
    v11 = v9;
    if ( *v10 == *(_DWORD *)(v9 + 16) )
    {
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Buy_if_not_node<enum _Button const &>(
    a1,
    &v17,
    (__int64)v10);
  v13 = v17;
  v14 = *(_QWORD *)v17;
  if ( v11 != *(_QWORD *)v17 )
  {
    **(_QWORD **)(v17 + 8) = v14;
    **(_QWORD **)(v14 + 8) = v9;
    **(_QWORD **)(v9 + 8) = v13;
    v15 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = v15;
  }
  std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Insert_bucket(
    a1,
    v13,
    (__int64 *)v9,
    v8);
  try
  {
    std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Check_size(a1);
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
      a1,
      &v17,
      v17);
    throw;
  }
  return result;
}
