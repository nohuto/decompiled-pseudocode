/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$unordered_map@IUViewState@KeyboardHosting@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180349F2C
 * Callers:
 *     ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x18034C4A0 (-VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18034C7C0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180349FFC (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Hash@V_ea_180349FFC.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,KeyboardHosting::ViewState>::_Try_emplace<unsigned int const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // r10
  __int64 *i; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  unsigned __int8 *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - a3 != (a3 + 4 >= a3 ? 4 : 0) );
  }
  v8 = a1[3];
  v10 = (__int64 *)a1[1];
  v9 = v5 & a1[6];
  v11 = 2 * v9;
  for ( i = *(__int64 **)(v8 + 16 * v9); ; i = (__int64 *)*i )
  {
    v13 = *(__int64 **)(v8 + 8 * v11) == v10 ? (__int64 *)a1[1] : **(__int64 ***)(v8 + 8 * v11 + 8);
    if ( i == v13 )
      break;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
    {
      v14 = i;
      goto LABEL_12;
    }
  }
  i = (__int64 *)a1[1];
  v14 = i;
LABEL_12:
  if ( v14 == v10 )
  {
    v16 = a3;
    std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
      a1,
      a2,
      a3,
      &v16);
  }
  else
  {
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
