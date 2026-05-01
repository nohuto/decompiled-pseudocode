/*
 * XREFs of ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F8770
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18002E9B0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIImmersiveApplication@@@?$com_ptr_t@UIImmersiveApplicationInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIImmersiveApplication@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008990C (--$query@UIImmersiveApplication@@@-$com_ptr_t@UIImmersiveApplicationInternal@@Uerr_exception_pol.c)
 *     ??$query@UIInspectable@@@?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008995C (--$query@UIInspectable@@@-$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@AEAI@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@AEAI@Z @ 0x1800E9440 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800EA344 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800EAE58 (--0CTaskWindowFinder@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?end@?$VectorRange@U?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVVectorIterator@12@XZ @ 0x1800FA898 (-end@-$VectorRange@U-$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collectio.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *v2; // r14
  CApplicationManager *v3; // r15
  unsigned int v4; // esi
  int v5; // eax
  int i; // eax
  int v7; // eax
  int v8; // eax
  CTaskWindowFinder *v9; // rbx
  __int64 v10; // rcx
  int First; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  PVOID Ptr; // rbx
  int v17; // eax
  int v18; // esi
  void *v19; // rcx
  HRESULT v20; // eax
  __int64 v21; // rbx
  CTaskWindowFinder *v22; // rbx
  __int64 v23; // rcx
  int v24; // ebx
  PVOID v25; // rbx
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  const char *v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  const char *v37; // r9
  __int64 result; // rax
  IUnknown *punk; // [rsp+20h] [rbp-128h] BYREF
  struct IApplicationView *v40; // [rsp+28h] [rbp-120h] BYREF
  unsigned int v41; // [rsp+30h] [rbp-118h]
  __int64 v42; // [rsp+38h] [rbp-110h] BYREF
  int v43[2]; // [rsp+40h] [rbp-108h] BYREF
  __int64 v44; // [rsp+48h] [rbp-100h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-F8h] BYREF
  struct IApplicationView *v46; // [rsp+58h] [rbp-F0h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v47; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+70h] [rbp-D8h]
  unsigned int v50; // [rsp+78h] [rbp-D0h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v51; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-A0h] BYREF
  char v57; // [rsp+B0h] [rbp-98h]
  int v58; // [rsp+B8h] [rbp-90h]
  __int64 v59; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-70h] BYREF
  _BYTE v63[8]; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v64[3]; // [rsp+E8h] [rbp-60h] BYREF
  _BYTE v65[8]; // [rsp+100h] [rbp-48h] BYREF
  int v66; // [rsp+108h] [rbp-40h]
  __int64 v67[7]; // [rsp+110h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]
  __int64 v71; // [rsp+160h] [rbp+18h] BYREF
  unsigned int v72; // [rsp+168h] [rbp+20h] BYREF

  v64[2] = -2LL;
  try
  {
    v2 = a2;
    v3 = this;
    v4 = 0;
    v41 = 0;
    v54 = 0LL;
    v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64 *))(*(_QWORD *)a2 + 72LL))(
           a2,
           &v54);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1571LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    v71 = v54;
    v49 = v54;
    v50 = 0;
    v51 = 0LL;
    wil::VectorRange<Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *>,wil::err_exception_policy>::end(
      &v71,
      v65);
    for ( i = 0; i != v66; i = ++v50 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v49 + 48LL))(
             v49,
             v50,
             &v51);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5800LL,
          (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
          (const char *)(unsigned int)v7);
      try
      {
        *(_QWORD *)v43 = 0LL;
        v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int *))(*(_QWORD *)v2 + 80LL))(
               v2,
               v51,
               v43);
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1580LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v8);
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v42 = 0LL;
        v9 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v63, v51);
        v55 = *(_QWORD *)v9;
        v56 = *((_QWORD *)v9 + 1);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v56);
        v57 = *((_BYTE *)v9 + 16);
        v58 = 0;
        v10 = v42;
        v42 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                  (__int64)v3,
                  (__int64)&v55,
                  &v42,
                  0LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v64);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( First < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1587LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)First);
        LOBYTE(v71) = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v43 + 56LL))(*(_QWORD *)v43, &v71);
        if ( v12 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1591LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v12);
        v72 = 0;
        if ( (_BYTE)v71 )
        {
          v40 = 0LL;
          v13 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v42 + 624LL))(v42, &v40);
          if ( v13 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              1598LL,
              (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v13);
          if ( v40 )
          {
            LODWORD(punk) = 0;
            v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)v40 + 32LL))(
                    v40,
                    &punk);
            if ( v14 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                1602LL,
                (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v14);
            v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, unsigned int *))(*(_QWORD *)v2 + 64LL))(
                    v2,
                    &v72);
            if ( v15 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                1604LL,
                (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v15);
            if ( (_DWORD)punk != v72 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                1606LL,
                (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)0x80070057LL);
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v40);
        }
        wil::com_ptr_t<IImmersiveApplicationInternal,wil::err_exception_policy>::query<IImmersiveApplication>(
          &v42,
          (__int64)&v62);
        v48 = 0LL;
        Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v48);
        v17 = (*(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 56LL))(Ptr, v62, &v48);
        if ( v17 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1613LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v17);
        ppvOut = 0LL;
        punk = 0LL;
        v18 = v4 | 8;
        v41 = v18;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*((_QWORD *)v3 + 6) + 32LL))(
          (__int64)v3 + 48,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        v4 = v18 & 0xFFFFFFF3 | 4;
        v41 = v4;
        v19 = ppvOut;
        ppvOut = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
        v20 = IUnknown_QueryService(
                punk,
                &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                &GUID_01719fd4_ce6f_429b_9554_1c3b9d375792,
                &ppvOut);
        if ( v20 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1617LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        v47 = 0LL;
        v46 = 0LL;
        v21 = *(_QWORD *)v43;
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v47);
        if ( (*(int (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v21 + 88LL))(
               v21,
               &v47) >= 0 )
        {
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v44 = 0LL;
          v22 = CTaskWindowFinder::CTaskWindowFinder((CTaskWindowFinder *)v63, v47);
          v55 = *(_QWORD *)v22;
          v56 = *((_QWORD *)v22 + 1);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v56);
          v57 = *((_BYTE *)v22 + 16);
          v58 = 0;
          v23 = v44;
          v44 = 0LL;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          v24 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                  (__int64)v3,
                  (__int64)&v55,
                  &v44,
                  0LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v64);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          if ( v24 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              1628LL,
              (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v24);
          wil::com_ptr_t<IImmersiveApplicationInternal,wil::err_exception_policy>::query<IImmersiveApplication>(
            &v44,
            (__int64)&v59);
          v25 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v46);
          v26 = (*(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)v25 + 56LL))(
                  v25,
                  v59,
                  &v46);
          if ( v26 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              1631LL,
              (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v26);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v59);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v44);
        }
        v40 = v46;
        punk = *(IUnknown **)v43;
        v27 = wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *,unsigned int &>(
                &v60,
                (struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **)&punk,
                &v40,
                &v72);
        v28 = *v27;
        *v27 = 0LL;
        if ( v28 )
          v40 = (struct IApplicationView *)(v28 + 16);
        else
          v40 = 0LL;
        v29 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v29);
        }
        wil::com_ptr_t<IPresentationRequestedArgs,wil::err_exception_policy>::query<IInspectable>(&v40, (__int64)&v61);
        v30 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v48, v61);
        if ( v30 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1636LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v30);
        v53 = 0LL;
        v31 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v51)(
                v51,
                &GUID_3bf22d51_7679_4ce2_8bae_8b78613e83cc,
                &v53);
        if ( v31 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1645LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v31);
        v32 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v43 + 48LL))(*(_QWORD *)v43, &v52);
        if ( v32 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1648LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v32);
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v53 + 104LL))(v53, v52);
        if ( v33 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1651LL,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v33);
        if ( v53 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v61);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v40);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v46);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v47);
        if ( ppvOut )
          (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 16LL))(ppvOut);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v48);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v62);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v42);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v43);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x675,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          v34);
        v3 = this;
        v2 = a2;
        v4 = v41;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v67);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
    LOBYTE(v35) = 1;
    v36 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64))(*(_QWORD *)v2 + 48LL))(
            v2,
            v35);
    if ( v36 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1656LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v36);
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x67B,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v37);
  }
  return result;
}
