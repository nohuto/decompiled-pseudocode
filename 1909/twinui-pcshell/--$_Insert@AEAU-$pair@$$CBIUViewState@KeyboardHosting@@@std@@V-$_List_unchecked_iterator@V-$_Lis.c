/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewState@KeyboardHosting@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@@Z @ 0x180349514
 * Callers:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180349FFC (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V_ea_180349FFC.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x18034CFB4 (-_Reinsert@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@_K@Z @ 0x180348B1C (-_End@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@@U-$.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x18034CED8 (-_Check_size@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@s.c)
 *     ?erase@?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@@Z @ 0x18034D1DC (-erase@-$list@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@V-$allocator@U-$pair@$$CBIUViewStat.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Insert<std::pair<unsigned int const,KeyboardHosting::ViewState> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,KeyboardHosting::ViewState>>>>>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  unsigned __int8 *v5; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 **v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v24; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v25; // [rsp+68h] [rbp+20h]

  v25 = a4;
  v5 = a3;
  v7 = 0xCBF29CE484222325uLL;
  v8 = a3 + 4 >= a3 ? 4 : 0;
  if ( a3 < a3 + 4 )
  {
    do
      v7 = 0x100000001B3LL * (*a3++ ^ (unsigned __int64)v7);
    while ( a3 - v5 != v8 );
  }
  v9 = *std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_End(
          a1,
          &v24,
          v7 & *(_QWORD *)(a1 + 48));
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v9 == *(_QWORD *)(v12 + 16 * v10) )
      break;
    v9 = *(_QWORD *)(v9 + 8);
    if ( *(_DWORD *)v5 == *(_DWORD *)(v9 + 16) )
    {
      std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::erase(v11 + 8, &v24, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v14 = *a4;
  if ( v9 != *a4 )
  {
    *(_QWORD *)a4[1] = v14;
    **(_QWORD **)(v14 + 8) = v9;
    **(_QWORD **)(v9 + 8) = a4;
    v15 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = a4[1];
    a4[1] = v15;
    v12 = *(_QWORD *)(v11 + 24);
  }
  v16 = 2 * v10;
  v17 = *(_QWORD *)(v12 + 8 * v16);
  if ( v17 == *(_QWORD *)(v11 + 8) )
  {
    *(_QWORD *)(v12 + 8 * v16) = a4;
    v18 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v18 + 8 * v16 + 8) = a4;
  }
  else if ( v17 == v9 )
  {
    *(_QWORD *)(v12 + 8 * v16) = a4;
  }
  else
  {
    v19 = *(__int64 ***)(v12 + 8 * v16 + 8);
    v20 = *v19;
    *(_QWORD *)(v12 + 8 * v16 + 8) = *v19;
    if ( v20 != a4 )
    {
      v21 = *(_QWORD *)(v11 + 24);
      v22 = *(_QWORD *)(v21 + 8 * v16 + 8);
      *(_QWORD *)(v21 + 8 * v16 + 8) = *(_QWORD *)(v22 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Check_size(v11);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::erase(
      a1,
      &v24,
      v25);
    throw;
  }
  return result;
}
