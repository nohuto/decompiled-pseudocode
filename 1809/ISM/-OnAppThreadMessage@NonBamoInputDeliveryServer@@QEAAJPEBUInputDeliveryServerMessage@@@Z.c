/*
 * XREFs of ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x1800D4668
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x1800D3D30 (-OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1800D4920 (-find@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare@UtagMs.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800D4E3C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUtagMsgRoutingInfo@@Ut.c)
 *     ??$_Insert@AEAU?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@@Z @ 0x1800D4FF0 (--$_Insert@AEAU-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$_List_unchecked_ite.c)
 *     ??$_Buynode@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_List_buy@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@1@PEAU21@0AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x1800D52A0 (--$_Buynode@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_List_buy@U-$pair@$$CBUtagMsgRout.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadMessage(
        NonBamoInputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2,
        __int64 a3,
        const char *a4)
{
  const char *v6; // r9
  __int64 *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  __int64 (__fastcall *v13)(__int64 *, __int128 *, __int64, __int64); // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  __int64 v19; // rax
  int v20; // eax
  const char *v21; // r9
  __int64 v22; // r14
  __int64 *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int128 v27; // xmm1
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // xmm0_8
  __int64 (__fastcall *v32)(__int64 *, __int128 *, __int64, __int64); // rax
  _BYTE v34[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v35; // [rsp+40h] [rbp-30h] BYREF
  __int128 v36; // [rsp+50h] [rbp-20h]
  __int64 v37; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v39; // [rsp+A8h] [rbp+38h] BYREF

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v16 = (__int64 *)*((_QWORD *)this + 4);
      v17 = *((_OWORD *)a2 + 2);
      v35 = *((_OWORD *)a2 + 1);
      v18 = *((_QWORD *)a2 + 6);
      v19 = *v16;
      v36 = v17;
      v37 = v18;
      v20 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v19 + 40))(v16, &v35);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x121,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v20);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find(
        (char *)this + 200,
        &v39,
        (char *)a2 + 16);
      if ( v39 == *((_QWORD *)this + 26) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x124,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v21);
        __debugbreak();
      }
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,void>(
        (char *)this + 200,
        &v39,
        v39);
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x139,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          a4);
        __debugbreak();
      }
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::find(
        (char *)this + 200,
        &v39,
        (char *)a2 + 16);
      if ( v39 == *((_QWORD *)this + 26) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x12D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v6);
        JUMPOUT(0x1800D48B8LL);
      }
      v7 = (__int64 *)*((_QWORD *)this + 4);
      v8 = *((_OWORD *)a2 + 2);
      v9 = *((unsigned int *)a2 + 15);
      v10 = *((unsigned int *)a2 + 14);
      v11 = *v7;
      v35 = *((_OWORD *)a2 + 1);
      v12 = *((_QWORD *)a2 + 6);
      v36 = v8;
      v13 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v11 + 32);
      v37 = v12;
      v14 = v13(v7, &v35, v10, v9);
      if ( v14 < 0 )
      {
        v15 = 306LL;
LABEL_15:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v15,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v14);
      }
    }
  }
  else
  {
    v22 = **((_QWORD **)this + 26);
    v23 = *(__int64 **)(v22 + 8);
    v24 = std::_List_buy<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::_Buynode<tagMsgRoutingInfo const &,tagInputRoutingInfo const &>(
            0,
            v22,
            (_DWORD)v23,
            (int)a2 + 16,
            (__int64)a2 + 8);
    v25 = *((_QWORD *)this + 27);
    if ( v25 == 0x276276276276275LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 27) = v25 + 1;
    *(_QWORD *)(v22 + 8) = v24;
    *v23 = v24;
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Insert<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>(
      (char *)this + 200,
      v34,
      **((_QWORD **)this + 26) + 16LL);
    v26 = (__int64 *)*((_QWORD *)this + 4);
    v27 = *((_OWORD *)a2 + 2);
    v28 = *((unsigned int *)a2 + 15);
    v29 = *((unsigned int *)a2 + 14);
    v30 = *v26;
    v35 = *((_OWORD *)a2 + 1);
    v31 = *((_QWORD *)a2 + 6);
    v36 = v27;
    v32 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v30 + 24);
    v37 = v31;
    v14 = v32(v26, &v35, v29, v28);
    if ( v14 < 0 )
    {
      v15 = 281LL;
      goto LABEL_15;
    }
  }
  return 0LL;
}
