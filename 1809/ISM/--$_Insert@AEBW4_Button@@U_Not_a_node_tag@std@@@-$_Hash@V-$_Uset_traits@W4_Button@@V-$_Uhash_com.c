/*
 * XREFs of ??$_Insert@AEBW4_Button@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@std@@_N@1@AEBW4_Button@@U_Not_a_node_tag@1@@Z @ 0x18006659C
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18005C930 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180066750 (-_Check_size@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@.c)
 *     ??$_Buynode@AEBW4_Button@@@?$_List_buy@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAPEAU?$_List_node@W4_Button@@PEAX@1@PEAU21@0AEBW4_Button@@@Z @ 0x180066BF8 (--$_Buynode@AEBW4_Button@@@-$_List_buy@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAPEAU-$.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Insert<enum _Button const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rdi
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *iter; // rax
  __int64 v27[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v28[5]; // [rsp+30h] [rbp-28h] BYREF

  v27[1] = -2LL;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v5);
  v7 = (_QWORD *)a1[1];
  v8 = 2 * (v5 & a1[6]);
  v9 = a1[3];
  if ( *(_QWORD **)(v9 + 16 * (v5 & a1[6])) == v7 )
    v10 = a1[1];
  else
    v10 = **(_QWORD **)(v9 + 16 * (v5 & a1[6]) + 8);
  if ( v10 == *(_QWORD *)(v9 + 16 * (v5 & a1[6])) )
  {
LABEL_12:
    v12 = *v7;
    v13 = *(__int64 **)(*v7 + 8LL);
    v14 = std::_List_buy<enum _Button>::_Buynode<enum _Button const &>(v5, *v7, v13, a3);
    v15 = a1[2];
    if ( v15 == 0xAAAAAAAAAAAAAA9LL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v15 + 1;
    *(_QWORD *)(v12 + 8) = v14;
    *v13 = v14;
    v16 = (__int64 *)a1[1];
    v17 = *v16;
    v27[0] = v17;
    v18 = *(_QWORD *)v17;
    if ( v10 != *(_QWORD *)v17 )
    {
      **(_QWORD **)(v17 + 8) = v18;
      **(_QWORD **)(v18 + 8) = v10;
      **(_QWORD **)(v10 + 8) = v17;
      v19 = *(_QWORD *)(v10 + 8);
      *(_QWORD *)(v10 + 8) = *(_QWORD *)(v18 + 8);
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(v17 + 8);
      *(_QWORD *)(v17 + 8) = v19;
      v16 = (__int64 *)a1[1];
    }
    v20 = a1[3];
    if ( *(__int64 **)(v20 + 8 * v8) == v16 )
    {
      *(_QWORD *)(v20 + 8 * v8) = v17;
      *(_QWORD *)(a1[3] + 8 * v8 + 8) = v17;
    }
    else if ( *(_QWORD *)(v20 + 8 * v8) == v10 )
    {
      *(_QWORD *)(v20 + 8 * v8) = v17;
    }
    else
    {
      v21 = *(__int64 **)(v20 + 8 * v8 + 8);
      v22 = *v21;
      *(_QWORD *)(v20 + 8 * v8 + 8) = *v21;
      if ( v22 != v17 )
      {
        v23 = a1[3];
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 8 * v8 + 8) + 8LL);
        *(_QWORD *)(v23 + 8 * v8 + 8) = v24;
      }
    }
    try
    {
      std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Check_size(a1);
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Make_iter(
               v25,
               v27,
               v27[0]);
      std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
        a1,
        v28,
        (_QWORD *)*iter);
      throw;
    }
    *(_QWORD *)a2 = v17;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  else
  {
    v5 = *a3;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v10 + 8);
      if ( (_DWORD)v5 == *(_DWORD *)(v10 + 16) )
        break;
      if ( v10 == *(_QWORD *)(v9 + 8 * v8) )
        goto LABEL_12;
    }
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
}
