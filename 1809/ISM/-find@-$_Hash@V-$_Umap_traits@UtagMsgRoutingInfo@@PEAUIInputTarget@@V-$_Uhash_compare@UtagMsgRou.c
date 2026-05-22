/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x18008CD70
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180089100 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x1800896A0 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800896F0 (-InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800899A0 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180090A90 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::find(
        _QWORD *a1,
        __int64 **a2,
        int *a3)
{
  int v3; // edi
  __int64 v4; // r9
  __int64 **v6; // r11
  __int64 v8; // rdx
  unsigned __int64 i; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rbp
  __int64 *v15; // r9
  __int64 *j; // r8
  __int64 v17; // rax
  _DWORD *v18; // rcx
  char v19; // al
  char v20; // al
  __int64 **result; // rax
  int v22; // [rsp+30h] [rbp+8h]

  v3 = *a3;
  v4 = 0xCBF29CE484222325uLL;
  v22 = *a3;
  v6 = a2;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v10 = *((unsigned __int8 *)&v22 + i);
    v8 = 0x100000001B3LL * (v10 ^ v8);
  }
  v11 = 0LL;
  v22 = a3[1];
  do
  {
    v12 = *((unsigned __int8 *)&v22 + v11++);
    v4 = 0x100000001B3LL * (v12 ^ v4);
  }
  while ( v11 < 4 );
  v13 = a1[3];
  v14 = 2 * (a1[6] & (v8 ^ v4));
  v15 = (__int64 *)a1[1];
  for ( j = *(__int64 **)(v13 + 8 * v14); ; j = (__int64 *)*j )
  {
    v17 = *(__int64 **)(v13 + 8 * v14) == v15 ? (__int64)v15 : **(_QWORD **)(v13 + 8 * v14 + 8);
    if ( j == (__int64 *)v17 )
      break;
    v18 = j + 2;
    if ( *((_DWORD *)j + 4) == v3 )
      v19 = operator==(v18, a3);
    else
      v19 = 0;
    if ( v19 )
    {
      if ( v3 == *v18 )
        v20 = operator==(a3, j + 2);
      else
        v20 = 0;
      if ( v20 )
        v15 = j;
      break;
    }
  }
  result = v6;
  *v6 = v15;
  return result;
}
