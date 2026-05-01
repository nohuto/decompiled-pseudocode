/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@I_NV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_N@std@@@2@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_N@std@@@std@@@std@@@2@AEBI@Z @ 0x18032DA18
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180321B30 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned int,bool,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,bool>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 *v9; // r9
  __int64 v10; // r11
  __int64 *i; // rax
  __int64 *v12; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - a3 != (a3 + 4 >= a3 ? 4 : 0) );
  }
  v7 = a1[3];
  v9 = (__int64 *)a1[1];
  v8 = v4 & a1[6];
  v10 = 2 * v8;
  for ( i = *(__int64 **)(v7 + 16 * v8); ; i = (__int64 *)*i )
  {
    v12 = *(__int64 **)(v7 + 8 * v10) == v9 ? (__int64 *)a1[1] : **(__int64 ***)(v7 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v9;
  return a2;
}
