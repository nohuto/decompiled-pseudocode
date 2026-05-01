/*
 * XREFs of ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801DE538
 * Callers:
 *     ?SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801DE500 (-SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001A930 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ @ 0x18004959C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18012C2C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIViewWrapper.c)
 *     ?GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ @ 0x1801DBF88 (-GetStoreCortanaAumId@CortanaUndockingHelpers@@YAPEBGXZ.c)
 *     ?InitializeHolographicUsageKeyWatcher@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DC38C (-InitializeHolographicUsageKeyWatcher@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DE2E8 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DEA08 (-SubscribeToWNFs@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DEC90 (-UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801E536C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToServicesInternal(
        CortanaStoreAppExperienceManager *this,
        struct IServiceProvider *a2)
{
  char IsSystemCortanaAppReplaced; // r13
  CortanaStoreAppHelper *v5; // rcx
  int updated; // eax
  bool *v7; // rdx
  CortanaUndockingHelpers *v8; // rcx
  char *v9; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, GUID *, GUID *, char *); // rbx
  int v12; // eax
  unsigned int v13; // ebx
  CortanaStoreAppHelper *v14; // rcx
  unsigned __int8 v15; // r8
  bool *v16; // rdx
  CortanaUndockingHelpers *v17; // rcx
  char *v18; // rdi
  char *v19; // rax
  char *v20; // rbx
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, char *, PVOID, _QWORD, char *); // rbx
  HSTRING_HEADER *v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, SID *, GUID *, __int64 *); // rbx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, _QWORD, SID *, GUID *, char *); // rdi
  _QWORD *v33; // rsi
  __int64 v34; // rbx
  __int64 (__fastcall *v35)(__int64, SID *, GUID *, char *); // rsi
  _QWORD *v36; // rdi
  __int64 v37; // rcx
  __int64 v39; // [rsp+38h] [rbp-39h] BYREF
  __int128 v40; // [rsp+40h] [rbp-31h] BYREF
  __int64 v41; // [rsp+50h] [rbp-21h]
  CortanaStoreAppExperienceManager *v42; // [rsp+58h] [rbp-19h]
  char v43; // [rsp+60h] [rbp-11h]
  HSTRING_HEADER v44; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v41 = -2LL;
  IsSystemCortanaAppReplaced = CortanaUndockingHelpers::IsSystemCortanaAppReplaced(this, (bool *)a2);
  updated = CortanaStoreAppHelper::UpdateReplaceDecision(v5);
  v8 = retaddr;
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  if ( CortanaUndockingHelpers::IsSystemCortanaAppReplaced(v8, v7) )
  {
    v42 = this;
    v43 = 1;
    v9 = (char *)this + 224;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 28, (__int64)a2);
    v10 = *((_QWORD *)this + 28);
    v11 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v10 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
    v12 = v11(v10, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, (char *)this + 216);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_40:
      LOBYTE(v14) = 1;
      CortanaStoreAppHelper::ApplyReplaceDecision(v14, 0, v15);
      CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(this);
      *((_BYTE *)this + 272) = 0;
      return v13;
    }
    if ( dword_1805C3B68 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_1805C3B68);
      if ( dword_1805C3B68 == -1 )
      {
        qword_1805C3B70 = (__int64)CortanaUndockingHelpers::GetStoreCortanaAumId(v17, v16);
        Init_thread_footer(&dword_1805C3B68);
      }
    }
    *(_QWORD *)&v40 = CortanaStoreAppExperienceManager::OnViewEvent;
    DWORD2(v40) = 0;
    v44.Reserved.Reserved1 = this;
    *(_OWORD *)&v44.Reserved.Reserved2[8] = v40;
    v18 = 0LL;
    v19 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    if ( v19 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>>((__int64)v19);
      *(HSTRING_HEADER *)(v20 + 16) = v44;
      *(_QWORD *)v20 = off_18045CC50;
      v18 = v20;
    }
    *(_QWORD *)&v40 = v18;
    v21 = *((_QWORD *)this + 27);
    v22 = *(__int64 (__fastcall **)(__int64, char *, PVOID, _QWORD, char *))(*(_QWORD *)v21 + 48LL);
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, (const WCHAR **)&qword_1805C3B70);
    v24 = v22(v21, v18, v23[1].Reserved.Reserved1, 0LL, (char *)this + 168);
    v13 = v24;
    if ( v24 < 0 )
    {
      v25 = 296LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v24);
LABEL_39:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      goto LABEL_40;
    }
    QueryService = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
    v24 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
            a2,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            &GUID_d8c26227_b75e_4d8b_ac8c_c463a34ed11e,
            (char *)this + 232);
    v13 = v24;
    if ( v24 < 0 )
    {
      v25 = 298LL;
      goto LABEL_15;
    }
    v39 = 0LL;
    v27 = *(_QWORD *)v9;
    v28 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(**(_QWORD **)v9 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    v29 = v28(v27, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v39);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 302LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v29);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
      goto LABEL_39;
    }
    v31 = v39;
    v32 = *(__int64 (__fastcall **)(__int64, _QWORD, SID *, GUID *, char *))(*(_QWORD *)v39 + 72LL);
    v33 = (_QWORD *)((char *)this + 304);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
    v29 = v32(v31, 0LL, &SID_ImmersiveLayout, &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c, (char *)this + 304);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 303LL;
      goto LABEL_38;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v33 + 40LL))(
            *v33,
            10LL,
            ((unsigned __int64)this + 128) & -(__int64)(this != 0LL),
            (char *)this + 200);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 309LL;
      goto LABEL_38;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v33 + 40LL))(
            *v33,
            18LL,
            ((unsigned __int64)this + 128) & -(__int64)(this != 0LL),
            (char *)this + 204);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 310LL;
      goto LABEL_38;
    }
    v34 = *(_QWORD *)v9;
    v35 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(**(_QWORD **)v9 + 24LL);
    v36 = (_QWORD *)((char *)this + 312);
    v37 = *((_QWORD *)this + 39);
    if ( v37 )
    {
      *v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v29 = v35(v34, &SID_InputHostLayout, &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25, (char *)this + 312);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 313LL;
      goto LABEL_38;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v36 + 24LL))(
            *v36,
            ((unsigned __int64)this + 136) & -(__int64)(this != 0LL),
            (char *)this + 208);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 314LL;
      goto LABEL_38;
    }
    if ( !IsSystemCortanaAppReplaced )
      *((_BYTE *)this + 272) = 1;
    v29 = CortanaStoreAppExperienceManager::SubscribeToWNFs(this);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 321LL;
      goto LABEL_38;
    }
    v29 = CortanaStoreAppExperienceManager::SubscribeToAppEvents(this);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 322LL;
      goto LABEL_38;
    }
    v29 = CortanaStoreAppExperienceManager::InitializeHolographicUsageKeyWatcher((wil::details::registry_watcher_state **)this);
    v13 = v29;
    if ( v29 < 0 )
    {
      v30 = 323LL;
      goto LABEL_38;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v39);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
  }
  return 0LL;
}
