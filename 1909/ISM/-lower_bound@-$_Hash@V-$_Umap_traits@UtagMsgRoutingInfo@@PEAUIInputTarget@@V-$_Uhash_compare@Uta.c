/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x180026714
 * Callers:
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180012BCC (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@.c)
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800182B0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x1800C2FDC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800C4760 (-InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x1800C5560 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180027660 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  unsigned __int8 *v3; // r9
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v11; // rdx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 i; // r9
  __int64 v18; // rax
  _QWORD *result; // rax
  __int64 *v20; // r9
  __int64 v21; // r9
  int v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned __int8 *)&v22;
  v4 = 0xCBF29CE484222325uLL;
  v22 = *a3;
  v5 = 4LL;
  v7 = 0xCBF29CE484222325uLL;
  v8 = 4LL;
  do
  {
    v11 = *v3++;
    v7 = 0x100000001B3LL * (v11 ^ v7);
    --v8;
  }
  while ( v8 );
  v12 = (unsigned __int8 *)&v22;
  v22 = a3[1];
  do
  {
    v13 = *v12++;
    v4 = 0x100000001B3LL * (v13 ^ v4);
    --v5;
  }
  while ( v5 );
  v14 = a1[3];
  v15 = a1[1];
  v16 = 2 * (a1[6] & (v7 ^ v4));
  for ( i = *(_QWORD *)(v14 + 8 * v16); ; i = *v20 )
  {
    v18 = *(_QWORD *)(v14 + 8 * v16) == v15 ? v15 : **(_QWORD **)(v14 + 8 * v16 + 8);
    if ( i == v18 )
      break;
    if ( (unsigned __int8)operator==(i + 16, a3) )
    {
      if ( (unsigned __int8)operator==(a3, v20 + 2) )
        v15 = v21;
      break;
    }
  }
  result = a2;
  *a2 = v15;
  return result;
}
