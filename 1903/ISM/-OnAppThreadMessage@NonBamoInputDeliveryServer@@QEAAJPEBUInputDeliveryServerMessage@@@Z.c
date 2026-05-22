/*
 * XREFs of ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180012AA8
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x180012A80 (-OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ??$_Buynode@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$_List_buy@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@1@PEAU21@0AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x180012BA0 (--$_Buynode@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$_List_buy@U-$pair@$$CBUtagMsgRout.c)
 *     ??$_Insert@AEAU?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@@Z @ 0x180013734 (--$_Insert@AEAU-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$_List_unchecked_ite.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180027B40 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x18010A040 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadMessage(
        NonBamoInputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // edx
  char *v7; // rsi
  __int64 v8; // r14
  __int64 *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int128 v13; // xmm1
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  __int64 (__fastcall *v18)(__int64 *, __int128 *, __int64, __int64); // rax
  int v19; // eax
  int v21; // edx
  __int64 v22; // r14
  char *v23; // r11
  const char *v24; // rsi
  unsigned __int64 v25; // r10
  const char *i; // r9
  const char *v27; // rax
  const char **v28; // r9
  char v29; // al
  const char *v30; // rcx
  __int64 *v31; // rcx
  __int128 v32; // xmm1
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // xmm0_8
  __int64 (__fastcall *v37)(__int64 *, __int128 *, __int64, __int64); // rax
  __int64 v38; // rdx
  __int64 *v39; // rcx
  unsigned int *v40; // rsi
  __int128 v41; // xmm1
  __int64 v42; // rax
  __int64 v43; // xmm0_8
  __int64 (__fastcall *v44)(__int64 *, __int128 *); // rax
  int v45; // eax
  __int64 v46; // r15
  __int64 v47; // r10
  const char *v48; // r11
  unsigned __int64 v49; // rbx
  const char *j; // r9
  const char *v51; // rax
  const char **v52; // r9
  char v53; // al
  const char *v54; // r8
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  int v57; // [rsp+20h] [rbp-50h]
  char v58[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v59; // [rsp+40h] [rbp-30h] BYREF
  __int128 v60; // [rsp+50h] [rbp-20h]
  __int64 v61; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  char v63; // [rsp+A8h] [rbp+38h] BYREF

  v6 = *(_DWORD *)a2;
  if ( !v6 )
  {
    v7 = (char *)this + 200;
    v8 = **((_QWORD **)this + 26);
    v9 = *(__int64 **)(v8 + 8);
    v10 = std::_List_buy<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::_Buynode<tagMsgRoutingInfo const &,tagInputRoutingInfo const &>(
            (_DWORD)this,
            v8,
            (_DWORD)v9,
            (int)a2 + 16,
            (__int64)a2 + 8);
    v11 = *((_QWORD *)v7 + 2);
    if ( v11 == 0x276276276276275LL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)v7 + 2) = v11 + 1;
    *(_QWORD *)(v8 + 8) = v10;
    *v9 = v10;
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Insert<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>(
      v7,
      v58,
      **((_QWORD **)v7 + 1) + 16LL);
    v12 = (__int64 *)*((_QWORD *)this + 4);
    v13 = *((_OWORD *)a2 + 2);
    v14 = *((unsigned int *)a2 + 15);
    v15 = *((unsigned int *)a2 + 14);
    v16 = *v12;
    v59 = *((_OWORD *)a2 + 1);
    v17 = *((_QWORD *)a2 + 6);
    v60 = v13;
    v18 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v16 + 24);
    v61 = v17;
    v19 = v18(v12, &v59, v15, v14);
    if ( v19 >= 0 )
      return 0LL;
    v38 = 282LL;
LABEL_47:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v19,
      v57);
    return 0LL;
  }
  v21 = v6 - 1;
  if ( v21 )
  {
    if ( v21 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x13A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        a4);
      __debugbreak();
    }
    v22 = *((_QWORD *)this + 28);
    v23 = (char *)a2 + 16;
    v24 = (const char *)*((_QWORD *)this + 26);
    v25 = 2
        * (*((_QWORD *)this + 31) & (((unsigned __int64)*((unsigned int *)a2 + 4) << 32) | *((unsigned int *)a2 + 5)));
    for ( i = *(const char **)(v22
                             + 16
                             * (*((_QWORD *)this + 31) & (((unsigned __int64)*((unsigned int *)a2 + 4) << 32) | *((unsigned int *)a2 + 5))));
          ;
          i = *v28 )
    {
      if ( *(const char **)(v22 + 8 * v25) == v24 )
        v27 = v24;
      else
        v27 = **(const char ***)(v22 + 8 * v25 + 8);
      if ( i == v27 )
      {
        v30 = v24;
        goto LABEL_19;
      }
      if ( (unsigned __int8)operator==(i + 16, v23) )
        break;
    }
    v29 = operator==(v23, v28 + 2);
    v30 = v24;
    if ( v29 )
      v30 = i;
LABEL_19:
    if ( v30 == v24 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x12E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        i);
      __debugbreak();
    }
    v31 = (__int64 *)*((_QWORD *)this + 4);
    v32 = *((_OWORD *)v23 + 1);
    v33 = *((unsigned int *)a2 + 15);
    v34 = *((unsigned int *)a2 + 14);
    v35 = *v31;
    v59 = *(_OWORD *)v23;
    v36 = *((_QWORD *)v23 + 4);
    v60 = v32;
    v37 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v35 + 32);
    v61 = v36;
    v19 = v37(v31, &v59, v34, v33);
    if ( v19 < 0 )
    {
      v38 = 307LL;
      goto LABEL_47;
    }
  }
  else
  {
    v39 = (__int64 *)*((_QWORD *)this + 4);
    v40 = (unsigned int *)((char *)a2 + 16);
    v41 = *((_OWORD *)a2 + 2);
    v42 = *v39;
    v59 = *((_OWORD *)a2 + 1);
    v43 = *((_QWORD *)a2 + 6);
    v60 = v41;
    v44 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v42 + 40);
    v61 = v43;
    v45 = v44(v39, &v59);
    if ( v45 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x122,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v45,
        v57);
    v46 = *((_QWORD *)this + 31);
    v47 = *((_QWORD *)this + 28);
    v48 = (const char *)*((_QWORD *)this + 26);
    v49 = 2 * (v46 & (((unsigned __int64)*v40 << 32) | *((unsigned int *)a2 + 5)));
    for ( j = *(const char **)(v47 + 8 * v49); ; j = *v52 )
    {
      if ( *(const char **)(v47 + 8 * v49) == v48 )
        v51 = v48;
      else
        v51 = **(const char ***)(v47 + 8 * v49 + 8);
      if ( j == v51 )
      {
        v54 = v48;
        goto LABEL_36;
      }
      if ( (unsigned __int8)operator==(j + 16, v40) )
        break;
    }
    v53 = operator==(v40, v52 + 2);
    v54 = v48;
    if ( v53 )
      v54 = j;
LABEL_36:
    if ( v54 == v48 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x125,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        j);
      __debugbreak();
    }
    v55 = *((unsigned int *)v54 + 5);
    v56 = 2 * (v46 & (v55 | ((unsigned __int64)*((unsigned int *)v54 + 4) << 32)));
    if ( *(const char **)(v47 + 16 * (v46 & (v55 | ((unsigned __int64)*((unsigned int *)v54 + 4) << 32))) + 8) == v54 )
    {
      if ( *(const char **)(v47 + 16 * (v46 & (v55 | ((unsigned __int64)*((unsigned int *)v54 + 4) << 32)))) == v54 )
      {
        *(_QWORD *)(v47 + 16 * (v46 & (v55 | ((unsigned __int64)*((unsigned int *)v54 + 4) << 32)))) = v48;
        *(_QWORD *)(*((_QWORD *)this + 28) + 8 * v56 + 8) = *((_QWORD *)this + 26);
      }
      else
      {
        *(_QWORD *)(v47 + 16 * (v46 & (v55 | ((unsigned __int64)*((unsigned int *)v54 + 4) << 32))) + 8) = *((_QWORD *)v54 + 1);
      }
    }
    else if ( *(const char **)(v47 + 16 * (v46 & (v55 | ((unsigned __int64)*((unsigned int *)v54 + 4) << 32)))) == v54 )
    {
      *(_QWORD *)(v47 + 16 * (v46 & (v55 | ((unsigned __int64)*((unsigned int *)v54 + 4) << 32)))) = *(_QWORD *)v54;
    }
    std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::erase((char *)this + 208, &v63);
  }
  return 0LL;
}
