/*
 * XREFs of ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@4PEAUITabViewManager@@@Z @ 0x180304CF8
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@5PEAUITabViewManager@@@Z @ 0x180307368 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicatio.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180012394 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180121284 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180300128 (--$ActivateInstance@UISwitchItemDataSink@Multitasking@ComposableShell@Internal@Windows@@@wil@@YA.c)
 *     ??$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180300354 (--$GetActivationFactory@UIDesktopIconFactoryStatics@Desktop@Multitasking@Shell@Internal@Windows@.c)
 *     wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_c986d26c92642d3a69330169dfef2fa8___ @ 0x180300778 (wil--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Internal--C_ea_180300778.c)
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x180306A9C (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x180306B98 (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall AppViewDataSourceAdapterBase::InitializeDataSource(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewIconLoader *a3,
        struct IImmersiveShellHookService *a4,
        struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *a5,
        struct IInspectable *a6,
        struct IInspectable *a7,
        struct ITabViewManager *a8)
{
  __int64 *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v16; // rcx
  const WCHAR *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct IInspectable *v20; // rbx
  struct IInspectable *v21; // rsi
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  _QWORD *v27; // rsi
  int v28; // eax
  __int64 *v29; // rax
  int v30; // eax
  int v31; // eax
  struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *v32; // rcx
  int v33; // eax
  int v34; // eax
  AppViewDataSourceAdapterBase *v35; // [rsp+28h] [rbp-18h] BYREF
  struct IInspectable *v36; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IInspectable **v38; // [rsp+70h] [rbp+30h] BYREF

  v12 = (__int64 *)wil::ActivateInstance<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSink>((__int64)&v38);
  v13 = *v12;
  *v12 = 0LL;
  v14 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v13;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v38);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)this + 5, (__int64)a3);
  v15 = *((_QWORD *)this + 7);
  v16 = a5;
  *((_QWORD *)this + 7) = a5;
  if ( v16 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)v16 + 8LL))(v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v17 = wil::GetActivationFactory<Windows::Internal::Shell::Multitasking::Desktop::IDesktopIconFactoryStatics>((const WCHAR *)&a5);
  v18 = *(_QWORD *)v17;
  *(_QWORD *)v17 = 0LL;
  v19 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v18;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&a5);
  v20 = a6;
  if ( a6 )
  {
    v21 = a7;
    if ( a7 )
    {
      if ( a8 )
      {
        wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=(
          (__int64 *)this + 10,
          (__int64)a8);
        v22 = *((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = 0LL;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v23 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, char *))v20->lpVtbl->QueryInterface)(
                v20,
                &GUID_de815fce_67de_41ea_8c7f_37a65bf92294,
                (char *)this + 64);
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            306LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
            (const char *)(unsigned int)v23);
          __debugbreak();
        }
        v24 = *((_QWORD *)this + 9);
        *((_QWORD *)this + 9) = 0LL;
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        v25 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, char *))v21->lpVtbl->QueryInterface)(
                v21,
                &GUID_947c042a_0955_4e95_b853_d3c1877d5ef2,
                (char *)this + 72);
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            307LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
            (const char *)(unsigned int)v25);
          __debugbreak();
        }
        v26 = *((_QWORD *)this + 8);
        v27 = (_QWORD *)((char *)this + 88);
        wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 11);
        v28 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 112LL))(v26, (char *)this + 88);
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            308LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
            (const char *)(unsigned int)v28);
          __debugbreak();
        }
        a6 = 0LL;
        v38 = &a6;
        v29 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v38);
        v30 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>(
                (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this,
                v29);
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            311LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
            (const char *)(unsigned int)v30);
          __debugbreak();
        }
        v35 = this;
        v36 = a6;
        if ( a6 )
          ((void (__fastcall *)(struct IInspectable *))a6->lpVtbl->AddRef)(a6);
        wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_c986d26c92642d3a69330169dfef2fa8___(
          (__int64 *)&a5,
          (__int64)&v35);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
        v31 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *, char *))(*(_QWORD *)*v27 + 152LL))(
                *v27,
                a5,
                (char *)this + 128);
        if ( v31 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            332LL,
            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
            (const char *)(unsigned int)v31);
          __debugbreak();
        }
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v27 + 56LL))(*v27);
        v32 = a5;
        if ( a5 )
        {
          a5 = 0LL;
          (*(void (__fastcall **)(struct Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice *))(*(_QWORD *)v32 + 16LL))(v32);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a6);
      }
    }
  }
  v33 = AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Register(
          (char *)this + 96,
          *((_QWORD *)this + 4));
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      337LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
      (const char *)(unsigned int)v33);
    __debugbreak();
  }
  if ( a4 )
  {
    v34 = AppViewEventHelpers::EventListener<IImmersiveShellHookService,IImmersiveShellHookNotification,AppViewEventHelpers::details::ShellHookRegistration>::Register(
            (char *)this + 112,
            a4);
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        342LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
        (const char *)(unsigned int)v34);
      __debugbreak();
    }
  }
}
