/*
 * XREFs of ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1802D3A80
 * Callers:
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802D3E00 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180042738 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800462A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_b41f1890a9233bffcc9b38cb2f094757___::_ScopeExitFn__lambda_b41f1890a9233bffcc9b38cb2f094757___ @ 0x180094A6C (wil--details--ScopeExitFn__lambda_b41f1890a9233bffcc9b38cb2f094757___--_ScopeExitFn__lambda_b41f.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x180122F04 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AccessibilityExperienceManager::_OnViewCreated(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  _OWORD *v11; // rdi
  _OWORD *v12; // rax
  _OWORD *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v19; // [rsp+38h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v21; // [rsp+48h] [rbp-39h] BYREF
  __int128 v22; // [rsp+50h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v23; // [rsp+60h] [rbp-21h] BYREF
  __int64 v24; // [rsp+68h] [rbp-19h] BYREF
  char v25[8]; // [rsp+70h] [rbp-11h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v26; // [rsp+78h] [rbp-9h] BYREF
  char v27; // [rsp+80h] [rbp-1h]
  _BYTE v28[24]; // [rsp+88h] [rbp+7h]
  __int64 v29; // [rsp+A0h] [rbp+1Fh]
  _BYTE v30[16]; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v29 = -2LL;
  v23 = a2;
  v21 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
  v20 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         &v21,
         &v20);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !*((_QWORD *)this + 47) && a2 )
    {
      *(_QWORD *)&v22 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
      *(_QWORD *)&v22 = *((_QWORD *)this + 47);
      *((_QWORD *)this + 47) = a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    }
    if ( !*((_QWORD *)this + 48) )
    {
      v6 = 0;
      goto LABEL_33;
    }
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 48LL))(v20, v25);
    v26 = &v23;
    v27 = 1;
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(**((_QWORD **)this + 48) + 104LL))(
           *((_QWORD *)this + 48),
           v23);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 762LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_32:
      wil::details::ScopeExitFn__lambda_b41f1890a9233bffcc9b38cb2f094757___::_ScopeExitFn__lambda_b41f1890a9233bffcc9b38cb2f094757___(&v26);
      goto LABEL_33;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 48) + 56LL))(*((_QWORD *)this + 48), v30);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 765LL;
      goto LABEL_12;
    }
    v24 = 0LL;
    v9 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           &v21,
           &v24);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 768LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_31:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      goto LABEL_32;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 32LL))(v24, v30);
    v6 = v9;
    if ( v9 < 0 )
    {
      v10 = 769LL;
      goto LABEL_17;
    }
    *(_QWORD *)&v22 = AccessibilityExperienceManager::_OnClientWindowReadyForPresentationChanged;
    DWORD2(v22) = 0;
    *(_QWORD *)v28 = this;
    *(_OWORD *)&v28[8] = v22;
    v11 = 0LL;
    v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v12);
      v13[1] = *(_OWORD *)v28;
      *((_QWORD *)v13 + 4) = *(_QWORD *)&v28[16];
      *(_QWORD *)v13 = off_1803D51D0;
      v11 = v13;
    }
    *(_QWORD *)&v22 = v11;
    v14 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v20 + 80LL))(v20, v11, (char *)this + 392);
    v6 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v23 + 392LL))(
              v23,
              4LL);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v19 = 0LL;
        v16 = *((_QWORD *)this + 34);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v16 + 24LL))(
               v16,
               &IID_ITouchKeyboardExperienceManager,
               &GUID_9516d866_ca0f_40ca_8997_efa618b50f99,
               &v19) < 0
          || (v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 40LL))(v19), v6 = v17, v17 >= 0) )
        {
          v27 = 0;
          v6 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x30F,
            (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_30;
      }
      v15 = 778LL;
    }
    else
    {
      v15 = 775LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E4,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return v6;
}
