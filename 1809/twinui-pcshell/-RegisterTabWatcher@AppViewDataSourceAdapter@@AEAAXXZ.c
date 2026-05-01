/*
 * XREFs of ?RegisterTabWatcher@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1802AE8A8
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@5PEAUITabViewManager@@@Z @ 0x1802AED90 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4AppViewDataSourceScope@@PEAUIApplicatio.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_0935a17dcf8c46657c105b82d8cca1f2___ @ 0x1802A8310 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Internal--Composable.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_1ec4de1928236930de40fe3536856c48___ @ 0x1802A83B4 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1802A83B4.c)
 *     AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_8e29ff95208472147f8d85b39b7eadad___ @ 0x1802A8458 (AppViewDataSourceAdapter--MakeAgileTabDataModelCallbackWithWeakRef_Windows--Interna_ea_1802A8458.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabHostedAppChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@1@PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabHostedAppChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1802A9624 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITabDataModelWatcher@Tabs@Composabl.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@1@PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabPropertyChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1802A9694 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITabDataModelWatcher@T_ea_1802A9694.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabsChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@1@PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabsChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x1802A9704 (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITabDataModelWatcher@T_ea_1802A9704.c)
 *     ??4?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802AA49C (--4-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@.c)
 *     ?reset@?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x1802B01A4 (-reset@-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall AppViewDataSourceAdapter::RegisterTabWatcher(AppViewDataSourceAdapter *this)
{
  __int64 v2; // rbx
  __int64 *v3; // rsi
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _BYTE v18[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  __int64 v21; // [rsp+80h] [rbp+28h] BYREF
  __int64 v22; // [rsp+88h] [rbp+30h] BYREF
  __int64 v23; // [rsp+90h] [rbp+38h] BYREF
  AppViewDataSourceAdapter *v24; // [rsp+98h] [rbp+40h] BYREF

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    v3 = (__int64 *)((char *)this + 256);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)this + 32);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 112LL))(v2, v3);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        305LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v24 = this;
    AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabsChangedEventArgs__lambda_8e29ff95208472147f8d85b39b7eadad___(
      (__int64)this,
      &v23,
      (__int64 *)&v24);
    v7 = (__int64 *)wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(EventRegistrationToken),Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs *> *>(
                      (__int64)v18,
                      *v3,
                      v5,
                      v6);
    wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::operator=(
      (__int64 *)this + 33,
      v7);
    wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::reset(v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
    v24 = this;
    AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__lambda_1ec4de1928236930de40fe3536856c48___(
      (__int64)this,
      &v22,
      (__int64 *)&v24);
    v10 = (__int64 *)wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(EventRegistrationToken),Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs *> *>(
                       (__int64)v18,
                       *v3,
                       v8,
                       v9);
    wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::operator=(
      (__int64 *)this + 36,
      v10);
    wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::reset(v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
    v24 = this;
    AppViewDataSourceAdapter::MakeAgileTabDataModelCallbackWithWeakRef_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_Windows::Internal::ComposableShell::Tabs::ITabDataModelTabHostedAppChangedEventArgs__lambda_0935a17dcf8c46657c105b82d8cca1f2___(
      (__int64)this,
      &v21,
      (__int64 *)&v24);
    v13 = (__int64 *)wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(EventRegistrationToken),Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs *> *>(
                       (__int64)v18,
                       *v3,
                       v11,
                       v12);
    wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::operator=(
      (__int64 *)this + 39,
      v13);
    wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::reset(v18);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v19);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 56LL))(*v3);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        341LL,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
        (const char *)(unsigned int)v14);
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
}
