/*
 * XREFs of ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801118CC
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_e81befa3e0ecb40221b8b6f57ea35c74___1_long_::Invoke @ 0x18010AE70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18010AE70.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041070 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x18004CED8 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18004DAC0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@@WRL@Microsoft@@QEAA@.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18004DF20 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x18004EE4C (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180071724 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EA540 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107870 (--0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107DD4 (--1EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ.c)
 *     ??4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180107FC8 (--4EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x180109160 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x18010BC7C (-SetSizeHintHeight@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@M@Z @ 0x18010BD24 (-SetSizeHintWidth@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Win.c)
 *     ?SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4ApplicationViewMode@ViewManagement@UI@5@@Z @ 0x18010BE9C (-SetTargetViewMode@ViewModePreferencesHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Wi.c)
 *     ?StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverlayEnterStyle@@@Z @ 0x18010C9E4 (-StartActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAAXPEBGW4CompactOverla.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CAppViewManager::_ShowAsViewModeWorker(
        IUnknown **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2,
        float a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // di
  HWND v14; // r14
  HRESULT v15; // eax
  void *v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  BOOL v20; // edi
  const WCHAR *Reserved1; // rbx
  int v22; // eax
  __int64 v23; // rdx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v24; // rdx
  struct Windows::Internal::ShellHelpers::PropertySetHelper *v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  struct IAsyncCallback *v28; // rdi
  struct IAsyncCallback *v29; // rax
  struct IAsyncCallback *v30; // rbx
  int v31; // eax
  void *ppvOut; // [rsp+38h] [rbp-D0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v34; // [rsp+40h] [rbp-C8h] BYREF
  struct IAsyncCallback *v35; // [rsp+48h] [rbp-C0h] BYREF
  void *v36; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v38; // [rsp+60h] [rbp-A8h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v39; // [rsp+68h] [rbp-A0h] BYREF
  int v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+78h] [rbp-90h] BYREF
  HWND v42; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+90h] [rbp-78h] BYREF
  __int64 v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING v48; // [rsp+C0h] [rbp-48h]
  _QWORD v49[40]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v50[48]; // [rsp+208h] [rbp+100h] BYREF
  _DWORD *v51; // [rsp+238h] [rbp+130h]
  wil::details::in1diag3 *retaddr; // [rsp+380h] [rbp+278h]

  v46 = -2LL;
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v39);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = WindowFromViewWrapper(v39, (HWND *)&ppvOut);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 2240LL;
      goto LABEL_5;
    }
    v38 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)a2 + 56LL))(
           a2,
           &v38);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2244LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_69:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
      goto LABEL_70;
    }
    v8 = WindowFromViewWrapper(v38, &v42);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2245LL;
      goto LABEL_20;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &v37);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2248LL;
      goto LABEL_20;
    }
    v43 = 0LL;
    v44 = 0;
    v45 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v43);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2251LL;
      goto LABEL_20;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, char *))(*(_QWORD *)a2 + 80LL))(
           a2,
           (char *)&v43 + 4);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2252LL;
      goto LABEL_20;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, int *))(*(_QWORD *)a2 + 104LL))(
           a2,
           &v44);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2253LL;
      goto LABEL_20;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64 *))(*(_QWORD *)a2 + 88LL))(
           a2,
           &v41);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 2256LL;
      goto LABEL_20;
    }
    v34 = 0LL;
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v34);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 2260LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_68:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      goto LABEL_69;
    }
    v48 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
            v48,
            v12,
            2u);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 2262LL;
      goto LABEL_25;
    }
    v13 = 1;
    CAppViewManagerTelemetry::EnterCompactOverlayModeForView::EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v50);
    v14 = (HWND)ppvOut;
    if ( (_DWORD)v37 == 1 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v15 = IUnknown_QueryService(
              this[15],
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &ppvOut);
      v6 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8DF,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v15);
LABEL_47:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_67:
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v50);
        goto LABEL_68;
      }
      v35 = 0LL;
      v16 = ppvOut;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      v17 = (*(__int64 (__fastcall **)(void *, HWND, struct IAsyncCallback **))(*(_QWORD *)v16 + 48LL))(v16, v14, &v35);
      v6 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E2,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v17);
LABEL_46:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
        goto LABEL_47;
      }
      memset(&hstringHeader, 0, sizeof(hstringHeader));
      v18 = (__int64)v35;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING_HEADER *))(*(_QWORD *)v18 + 136LL))(v18, &hstringHeader);
      v6 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E4,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v19);
LABEL_45:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
        goto LABEL_46;
      }
      v20 = v42 != v14;
      Reserved1 = (const WCHAR *)hstringHeader.Reserved.Reserved1;
      wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v49,
        (__int64)"EnterCompactOverlayModeForView");
      v49[0] = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::StartActivity((__int64)v49, Reserved1, !v20);
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::operator=((__int64)v50, (__int64)v49);
      CAppViewManagerTelemetry::EnterCompactOverlayModeForView::~EnterCompactOverlayModeForView((CAppViewManagerTelemetry::EnterCompactOverlayModeForView *)v49);
      v36 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      v22 = IUnknown_QueryService(
              this[15],
              &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
              &GUID_4d20c9ad_7836_4782_add6_8d92387ee831,
              &v36);
      v6 = v22;
      if ( v22 < 0 )
      {
        v23 = 2281LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
        goto LABEL_45;
      }
      v22 = (*(__int64 (__fastcall **)(void *, struct IAsyncCallback *, BOOL, int *))(*(_QWORD *)v36 + 96LL))(
              v36,
              v35,
              v20,
              &v40);
      v6 = v22;
      if ( v22 < 0 )
      {
        v23 = 2284LL;
        goto LABEL_44;
      }
      v13 = v40 != 0;
      if ( v40 )
      {
        v22 = ViewModePreferencesHelpers::SetTargetViewMode(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
                v37);
        v6 = v22;
        if ( v22 < 0 )
        {
          v23 = 2289LL;
          goto LABEL_44;
        }
        v22 = ViewModePreferencesHelpers::SetSizeHintWidth((ViewModePreferencesHelpers *)&v34, v24, a3);
        v6 = v22;
        if ( v22 < 0 )
        {
          v23 = 2290LL;
          goto LABEL_44;
        }
        v22 = ViewModePreferencesHelpers::SetSizeHintHeight((ViewModePreferencesHelpers *)&v34, v25, a3);
        v6 = v22;
        if ( v22 < 0 )
        {
          v23 = 2291LL;
          goto LABEL_44;
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    else
    {
      if ( (_DWORD)v37 )
        goto LABEL_57;
      v26 = ViewModePreferencesHelpers::SetTargetViewMode((Windows::Internal::ShellHelpers::PropertySetHelper *)&v34, 0);
      v6 = v26;
      if ( v26 < 0 )
      {
        v27 = 2297LL;
LABEL_56:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v26);
        goto LABEL_67;
      }
      MoveTryPositionPropertiesToPropertySet(v14, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v34);
    }
    if ( !v13 )
    {
      v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, __int64))(*(_QWORD *)a2 + 96LL))(
              a2,
              1LL);
      v6 = v26;
      if ( v26 < 0 )
      {
        v27 = 2325LL;
        goto LABEL_56;
      }
LABEL_64:
      if ( *v51 == 1 )
        wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v50);
      v6 = 0;
      goto LABEL_67;
    }
LABEL_57:
    v36 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
    ppvOut = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&ppvOut);
    v28 = 0LL;
    v29 = (struct IAsyncCallback *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v30 = v29;
    if ( v29 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>((__int64)v29);
      *((_QWORD *)v30 + 2) = 0LL;
      if ( (void **)((char *)v30 + 16) != &ppvOut )
      {
        *((_QWORD *)v30 + 2) = a2;
        ppvOut = 0LL;
      }
      *(_QWORD *)v30 = off_1803D0018;
      v28 = v30;
    }
    v35 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v31 = CAppViewManager::_ShowViewAsyncWorker(
            (CAppViewManager *)this,
            v14,
            v42,
            (const struct CAppViewManager::ShowViewAsyncOptions *)&v43,
            v34,
            v28);
    if ( v31 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2321LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    goto LABEL_64;
  }
  v7 = 2239LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_70:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
  return v6;
}
