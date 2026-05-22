/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180089100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x180089880 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x18008CD70 (-find@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@UtagMsgRou.c)
 *     ??$_Insert@AEAU?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@1@@Z @ 0x18008DB34 (--$_Insert@AEAU-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$_List_unchecked_iterato.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagMsgRoutingInfo@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagMsgRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18008DE70 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUtagMsgRoutingInfo@@@2@V-$tuple@$$V@2@@-$.c)
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x18008F8F8 (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::RegisterInputHost(_QWORD *a1, unsigned int *a2, int a3, int a4)
{
  int Helper; // eax
  int v9; // r15d
  __int64 *v10; // rbx
  int v11; // eax
  __int64 (__fastcall **v12)(__int64 *, GUID *, int *); // rax
  int v13; // eax
  __int64 *v14; // rcx
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  int v17; // eax
  __int64 *v18; // rcx
  __int64 *v19; // rsi
  int v20; // r9d
  __int64 *v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  struct IInputTarget *v26; // rax
  __int64 (__fastcall ***v27)(_QWORD, GUID *, int *); // rcx
  unsigned int v28; // edi
  unsigned int v29; // esi
  int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // rcx
  struct IInputTarget *v42; // rbx
  int v43; // eax
  __int64 *v44; // rcx
  __int64 v45; // rcx
  unsigned int v46; // eax
  int v47[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v48; // [rsp+58h] [rbp-11h] BYREF
  int v49; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v50; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v51; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v52; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v53; // [rsp+70h] [rbp+7h] BYREF
  struct IInputTarget *v54; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v55[8]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::find(
                    a1 + 4,
                    v55,
                    a2) != a1[5] )
    return 0LL;
  *(_QWORD *)v47 = 0LL;
  v55[0] = 0LL;
  Helper = DWMInputTarget::CreateHelper((_DWORD)a2, (unsigned int)v55, a3, a4, (__int64)v47);
  v9 = Helper;
  if ( Helper >= 0 )
  {
    v10 = *(__int64 **)v47;
    v48 = 0LL;
    v11 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v47)(
            *(_QWORD *)v47,
            &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
            &v48);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x292,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(*(a1 - 7) + 120LL))(a1 - 7, v48);
    v12 = (__int64 (__fastcall **)(__int64 *, GUID *, int *))*v10;
    *(_QWORD *)v47 = 0LL;
    v13 = (*v12)(v10, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, v47);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x392,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = *(__int64 **)v47;
    if ( !*(_QWORD *)v47 )
    {
      v46 = wil::verify_hresult<long>(0x8000FFFF);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x396,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)v46);
      __debugbreak();
    }
    v15 = (_QWORD *)a1[24];
    v16 = (_QWORD *)*v15;
    while ( 1 )
    {
      if ( v16 == v15 )
      {
        if ( v14 )
        {
          *(_QWORD *)v47 = 0LL;
          (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
        }
        v9 = 0;
        goto LABEL_14;
      }
      v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v14 + 24))(v14, v16[3]);
      v9 = v17;
      if ( v17 < 0 )
        break;
      v16 = (_QWORD *)*v16;
      v14 = *(__int64 **)v47;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v17);
    v18 = *(__int64 **)v47;
    if ( *(_QWORD *)v47 )
    {
      *(_QWORD *)v47 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
    }
LABEL_14:
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v9);
LABEL_36:
      v40 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      goto LABEL_38;
    }
    v19 = v10;
    v10 = 0LL;
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::find(
      a1 + 4,
      v55,
      a2);
    v21 = (__int64 *)a1[5];
    v22 = v55[0];
    if ( (__int64 *)v55[0] == v21 )
    {
      v23 = *v21;
      v55[0] = (unsigned __int64)a2;
      v54 = *(struct IInputTarget **)(v23 + 8);
      v24 = std::_List_buy<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::_Buynode<std::piecewise_construct_t const &,std::tuple<tagMsgRoutingInfo const &>,std::tuple<>>(
              (unsigned int)v55,
              v23,
              (_DWORD)v54,
              v20,
              (__int64)v55);
      v25 = a1[6];
      if ( v25 == 0x3FFFFFFFFFFFFFELL )
        std::_Xlength_error("list<T> too long");
      a1[6] = v25 + 1;
      v26 = v54;
      *(_QWORD *)(v23 + 8) = v24;
      *(_QWORD *)v26 = v24;
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::_Insert<std::pair<tagMsgRoutingInfo const,IInputTarget *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>>>(
        a1 + 4,
        v55,
        *(_QWORD *)a1[5] + 16LL);
      v22 = v55[0];
    }
    *(_QWORD *)(v22 + 56) = v19;
    v27 = (__int64 (__fastcall ***)(_QWORD, GUID *, int *))a1[33];
    if ( v27 )
    {
      v28 = *a2;
      v29 = a2[1];
      v49 = 0;
      *(_QWORD *)v47 = 0LL;
      v30 = (**v27)(v27, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v47);
      if ( v30 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v30);
        __debugbreak();
      }
      v31 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v47 + 32LL))(*(_QWORD *)v47, &v49);
      if ( v31 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v31);
        __debugbreak();
      }
      if ( v28 == v49 )
      {
        v53 = 0;
        v52 = 0;
        v55[0] = 0LL;
        v51 = 0;
        v50 = 0;
        v32 = **(_QWORD **)v47;
        v54 = 0LL;
        v33 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(v32 + 48))(*(_QWORD *)v47, &v53);
        if ( v33 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2C1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v33);
          __debugbreak();
        }
        v34 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v47 + 56LL))(*(_QWORD *)v47, &v52);
        if ( v34 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2C3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v34);
          __debugbreak();
        }
        v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)v47 + 64LL))(*(_QWORD *)v47, v55);
        if ( v35 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2C5,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v35);
          __debugbreak();
        }
        v36 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v47 + 72LL))(*(_QWORD *)v47, &v51);
        if ( v36 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2C7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v36);
          __debugbreak();
        }
        v37 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v47 + 80LL))(*(_QWORD *)v47, &v50);
        if ( v37 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2C9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v37);
          JUMPOUT(0x180089695LL);
        }
        v38 = DWMInputRouter::CreateAndRegisterTarget(
                (DWMInputRouter *)(a1 - 7),
                v28,
                v29,
                v53,
                v52,
                v55[0],
                v51,
                v50,
                &v54);
        v9 = v38;
        if ( v38 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v38);
          if ( v54 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v54 + 16LL))(v54);
          v39 = *(__int64 **)v47;
          if ( *(_QWORD *)v47 )
          {
            *(_QWORD *)v47 = 0LL;
            (*(void (__fastcall **)(__int64 *))(*v39 + 16))(v39);
          }
          goto LABEL_36;
        }
        v42 = v54;
        v43 = (*(__int64 (__fastcall **)(_QWORD *, struct IInputTarget *))(*(a1 - 7) + 112LL))(a1 - 7, v54);
        if ( v43 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x2D6,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v43);
          __debugbreak();
        }
        if ( v42 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v44 = *(__int64 **)v47;
      if ( *(_QWORD *)v47 )
      {
        *(_QWORD *)v47 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v44 + 16))(v44);
      }
    }
    v45 = v48;
    if ( v48 )
    {
      v48 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)(unsigned int)Helper);
  v10 = *(__int64 **)v47;
LABEL_38:
  if ( v10 )
    (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  return (unsigned int)v9;
}
