/*
 * XREFs of ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802807A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180054460 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D08C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D6DD0 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180267F28 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x180291ACC (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180408E08 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180408E7C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowEventDispatcher::SubscribeToServices(WindowEventDispatcher *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  char *v5; // rbx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  CCriticalFailureHandler *v10; // rcx
  HRESULT (__stdcall *v11)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v12; // eax
  CCriticalFailureHandler *v13; // rcx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v15; // rcx
  int v16; // eax
  CCriticalFailureHandler *v17; // rcx
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v19; // rcx
  int v20; // eax
  CCriticalFailureHandler *v21; // rcx
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v23; // rcx
  int v24; // ebx
  const char *v25; // r9
  __int64 result; // rax
  CCriticalFailureHandler *v27; // rcx
  int v28; // ebx
  HRESULT (__stdcall *v29)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v30; // eax
  CCriticalFailureHandler *v31; // rcx
  int v32; // eax
  CCriticalFailureHandler *v33; // rcx
  __int64 *v34; // rax
  ConnectedStandbyHelper **v35; // rbx
  const char *v36; // r9
  CCriticalFailureHandler *v37; // rcx
  int v38; // ebx
  unsigned __int64 *v39; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v40; // [rsp+20h] [rbp-78h]
  unsigned __int64 *v41; // [rsp+28h] [rbp-70h]
  int v42; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v43; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+40h] [rbp-58h] BYREF
  __int64 v46[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v47; // [rsp+58h] [rbp-40h] BYREF
  std::_Ref_count_base *v48; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v50; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v51; // [rsp+B8h] [rbp+20h] BYREF

  v46[1] = -2LL;
  try
  {
    QueryService = a2->lpVtbl->QueryService;
    v5 = (char *)this + 176;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 22);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
           a2,
           &SID_ProcessLifetimeManagerControl,
           &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
           v5);
    v50 = v6;
    wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService(v8, v7, v9);
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v10, (int *)&v50);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v6 = v50;
    }
    if ( v6 < 0 && v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v10,
        (int *)&v50,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x5Fu,
        v39,
        v41);
      v6 = v50;
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        96LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
    v11 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 23);
    v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v11)(
            a2,
            &CLSID_ImmersivePlaybackManager,
            &GUID_1fc98738_e0bf_4cb2_9de2_20ab31b23ce4,
            (char *)this + 184);
    v50 = v12;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v13, (int *)&v50);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v12 = v50;
    }
    if ( v12 < 0 && v12 != -2147024882 && v12 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v13,
        (int *)&v50,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x67u,
        v39,
        v41);
      v12 = v50;
    }
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        104LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v12);
    v14 = a2->lpVtbl->QueryService;
    v15 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v14)(
            a2,
            &SID_VirtualDesktopManager,
            &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
            (char *)this + 192);
    v50 = v16;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v17, (int *)&v50);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v16 = v50;
    }
    if ( v16 < 0 && v16 != -2147024882 && v16 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v17,
        (int *)&v50,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x6Eu,
        v39,
        v41);
      v16 = v50;
    }
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        111LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
    v18 = a2->lpVtbl->QueryService;
    v19 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v20 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v18)(
            a2,
            &IID_IApplicationPositionPersistence,
            &GUID_f876b69a_7b8e_4f46_864c_a0b0ea3e49c2,
            (char *)this + 200);
    v50 = v20;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v21, (int *)&v50);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v20 = v50;
    }
    if ( v20 < 0 && v20 != -2147024882 && v20 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v21,
        (int *)&v50,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x74u,
        v39,
        v41);
      v20 = v50;
    }
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        117LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v20);
    v45 = 0LL;
    v22 = a2->lpVtbl->QueryService;
    v45 = 0LL;
    v24 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v22)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            &v45);
    v51 = v24;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_50:
      if ( v24 < 0 )
      {
        if ( v24 != -2147024882 && v24 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v23,
            (int *)&v51,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x7Au,
            v39,
            v41);
          v24 = v51;
        }
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7A,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v24);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v45);
          return (unsigned int)v24;
        }
      }
      v28 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v45 + 32LL))(
              v45,
              ((unsigned __int64)this + 72) & -(__int64)(this != (WindowEventDispatcher *)128),
              (char *)this + 324);
      v42 = v28;
      if ( CRVPrivate::cfhImmersiveShellStartup )
      {
LABEL_68:
        if ( v28 < 0 )
        {
          if ( v28 != -2147024882 && v28 != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v27,
              &v42,
              L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              0x7Cu,
              v39,
              v41);
            v28 = v42;
          }
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7C,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v28);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v45);
            return (unsigned int)v28;
          }
        }
        v46[0] = 0LL;
        v29 = a2->lpVtbl->QueryService;
        v46[0] = 0LL;
        v30 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v29)(
                a2,
                &SID_ImmersiveShellHookService,
                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                v46);
        v50 = v30;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v31, (int *)&v50);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v30 = v50;
        }
        if ( v30 < 0 && v30 != -2147024882 && v30 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v31,
            (int *)&v50,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x84u,
            v39,
            v41);
          v30 = v50;
        }
        if ( v30 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            133LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v30);
        v40 = (unsigned __int64 *)((char *)this + 320);
        v32 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64))(*(_QWORD *)v46[0] + 24LL))(
                v46[0],
                &unk_1804F50F0,
                11LL,
                ((unsigned __int64)this - 48) & -(__int64)(this != (WindowEventDispatcher *)128));
        v50 = v32;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v33, (int *)&v50);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          v32 = v50;
        }
        if ( v32 < 0 && v32 != -2147024882 && v32 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v33,
            (int *)&v50,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0x9Du,
            v40,
            v41);
          v32 = v50;
        }
        if ( v32 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            158LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v32);
        try
        {
          v34 = std::make_shared<ConnectedStandbyHelper,>(&v47);
          v35 = (ConnectedStandbyHelper **)((char *)this + 208);
          std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 26, v34);
          if ( v48 )
            std::_Ref_count_base::_Decref(v48);
        }
        catch ( ... )
        {
          v44 = wil::details::in1diag3::Return_CaughtException(
                  retaddr,
                  (void *)0xA4,
                  (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                  v36);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v46);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v45);
          return v44;
        }
        v38 = ConnectedStandbyHelper::Initialize(
                *v35,
                (struct IWindowDispatcherConnectedStandby *)(((unsigned __int64)this - 88) & -(__int64)(this != (WindowEventDispatcher *)128)));
        v43 = v38;
        if ( CRVPrivate::cfhImmersiveShellStartup )
          goto LABEL_104;
        if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v50) >= 0 )
        {
          switch ( v50 )
          {
            case 2u:
              v38 = -2023406815;
              goto LABEL_102;
            case 3u:
              v38 = -2023406814;
              goto LABEL_102;
            case 4u:
              v38 = -2147418094;
              goto LABEL_102;
            case 5u:
              v38 = -2147022986;
LABEL_102:
              v43 = v38;
              break;
          }
        }
        CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_104:
        if ( v38 >= 0 )
          goto LABEL_110;
        if ( v38 != -2147024882 && v38 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v37,
            (int *)&v43,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            0xA5u,
            v40,
            v41);
          v38 = v43;
        }
        if ( v38 >= 0 )
        {
LABEL_110:
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v46);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v45);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v38);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v46);
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v45);
          return (unsigned int)v38;
        }
      }
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v51) >= 0 )
      {
        switch ( v51 )
        {
          case 2u:
            v28 = -2023406815;
            goto LABEL_66;
          case 3u:
            v28 = -2023406814;
            goto LABEL_66;
          case 4u:
            v28 = -2147418094;
            goto LABEL_66;
          case 5u:
            v28 = -2147022986;
LABEL_66:
            v42 = v28;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_68;
    }
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v43) >= 0 )
    {
      switch ( v43 )
      {
        case 2u:
          v24 = -2023406815;
          goto LABEL_48;
        case 3u:
          v24 = -2023406814;
          goto LABEL_48;
        case 4u:
          v24 = -2147418094;
          goto LABEL_48;
        case 5u:
          v24 = -2147022986;
LABEL_48:
          v51 = v24;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_50;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA9,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v25);
  }
  return result;
}
