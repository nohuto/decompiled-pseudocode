/*
 * XREFs of ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180018790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081A0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@?$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@_N@1@AEBUtagMsgRoutingInfo@@@Z @ 0x180012C5C (--$_Try_emplace@AEBUtagMsgRoutingInfo@@$$V@-$unordered_map@UtagMsgRoutingInfo@@PEAUIInputTarget@.c)
 *     ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x180016260 (-InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z.c)
 *     ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x18001631C (-CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Microsoft@@KK.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x180026BF4 (-lower_bound@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@Uta.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C3030 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 */

__int64 __fastcall DWMInputRouter::RegisterInputHost(__int64 a1, __int64 a2, int a3, int a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct IInputTarget *v10; // rbx
  __int64 (__fastcall *v11)(struct IInputTarget *, GUID *, __int64 *); // rdi
  int v12; // eax
  DWMInputRouter *v13; // rdi
  int v14; // eax
  struct IInputTarget *v15; // rbx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // r14
  unsigned int v17; // r15d
  unsigned int v18; // esi
  __int64 (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  int v21; // eax
  struct IInputTarget *v22; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct IInputTarget *v30; // rcx
  struct IInputTarget *v31; // rcx
  int v32; // eax
  struct IInputTarget *v33; // rcx
  int v34; // [rsp+20h] [rbp-49h]
  int v35; // [rsp+20h] [rbp-49h]
  __int64 v36; // [rsp+50h] [rbp-19h] BYREF
  struct IInputTarget *v37; // [rsp+58h] [rbp-11h] BYREF
  struct IInputTarget *v38; // [rsp+60h] [rbp-9h] BYREF
  int v39; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v40; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v41; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v42; // [rsp+74h] [rbp+Bh] BYREF
  unsigned int v43; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v44; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v45[3]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::lower_bound(
    a1 + 32,
    v45);
  if ( v45[0] != *(_QWORD *)(a1 + 40) )
    return 0LL;
  v37 = 0LL;
  v45[0] = 0LL;
  v8 = DWMInputTarget::CreateHelper(a2, v45, a3, a4, &v37);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v8);
  }
  else
  {
    v10 = v37;
    v44 = 0LL;
    v11 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v37;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v44);
    v12 = v11(v10, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v44);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2D6,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v12,
        v34);
      __debugbreak();
    }
    v13 = (DWMInputRouter *)(a1 - 56);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 56) + 120LL))(a1 - 56, v44);
    v14 = DWMInputRouter::InformTargetOfAttachedDevices(
            (DWMInputRouter *)(a1 - 56),
            (__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v37);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v14);
    }
    else
    {
      v15 = v37;
      v37 = 0LL;
      std::unordered_map<tagMsgRoutingInfo,IInputTarget *,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>::_Try_emplace<tagMsgRoutingInfo const &,>(
        a1 + 32,
        (__int64)v45,
        (__int64 *)a2);
      *(_QWORD *)(v45[0] + 56) = v15;
      v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 264);
      if ( !v16 )
        goto LABEL_10;
      v17 = *(_DWORD *)a2;
      v18 = *(_DWORD *)(a2 + 4);
      v39 = 0;
      v36 = 0LL;
      v19 = **v16;
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v36);
      v20 = v19(v16, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v36);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2F4,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v20,
          v34);
        __debugbreak();
      }
      v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 32LL))(v36, &v39);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2F6,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v21,
          v34);
        __debugbreak();
      }
      if ( v17 != v39 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v36);
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v44);
        v22 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
        }
        return 0LL;
      }
      v38 = 0LL;
      v43 = 0;
      v42 = 0;
      v45[0] = 0LL;
      v41 = 0;
      v40 = 0;
      v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 48LL))(v36, &v43);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x305,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v24,
          v34);
        __debugbreak();
      }
      v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 56LL))(v36, &v42);
      if ( v25 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x307,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v25,
          v34);
        __debugbreak();
      }
      v26 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v36 + 64LL))(v36, v45);
      if ( v26 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x309,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v26,
          v34);
        __debugbreak();
      }
      v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 72LL))(v36, &v41);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x30B,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v27,
          v34);
        __debugbreak();
      }
      v28 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36 + 80LL))(v36, &v40);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x30D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v28,
          v34);
        __debugbreak();
      }
      if ( v38 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v38 + 16LL))(v38);
      v29 = DWMInputRouter::CreateAndRegisterTarget(v13, v17, v18, v43, v42, v45[0], v41, v40, &v38);
      v9 = v29;
      if ( v29 >= 0 )
      {
        v32 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct IInputTarget *))(*(_QWORD *)v13 + 112LL))(v13, v38);
        if ( v32 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x31A,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v32,
            v35);
          __debugbreak();
        }
        v33 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v33 + 16LL))(v33);
        }
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x317,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v29);
      v30 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v30 + 16LL))(v30);
      }
      Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(&v36);
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v44);
  }
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return v9;
}
