/*
 * XREFs of ?OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x1800D3D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800D4E3C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtagMsgRoutingInfo@@Ut.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::InputDeliveryServerConversationHost::OnPeerDisconnected(
        NonBamoInputDeliveryServer::InputDeliveryServerConversationHost *this,
        int a2,
        const void *a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // xmm0_8
  int v11; // eax
  int v13[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = *(_QWORD **)(v3 + 208);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    do
    {
      if ( *((_DWORD *)v6 + 14) == a2 )
      {
        v7 = *(__int64 **)(v3 + 32);
        v8 = *((_OWORD *)v6 + 5);
        *(_OWORD *)v13 = *((_OWORD *)v6 + 4);
        v9 = *v7;
        v10 = v6[12];
        v14 = v8;
        v15 = v10;
        v11 = (*(__int64 (__fastcall **)(__int64 *, int *, const void *))(v9 + 40))(v7, v13, a3);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x155,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
            (const char *)(unsigned int)v11);
        v6 = *(_QWORD **)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,void>(
                           v3 + 200,
                           &v17,
                           v6);
      }
      else
      {
        v6 = (_QWORD *)*v6;
      }
    }
    while ( v6 != *(_QWORD **)(v3 + 208) );
  }
  return 0LL;
}
