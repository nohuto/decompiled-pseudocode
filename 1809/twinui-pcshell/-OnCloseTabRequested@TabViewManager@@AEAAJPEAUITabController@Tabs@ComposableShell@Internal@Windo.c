/*
 * XREFs of ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1801DFAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180026DC4 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801071F8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18010D4B4 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6c4b80bdf74632827428df2b58c2a770___ @ 0x1801D0558 (Windows--Internal--ComTaskPool--QueueTask__lambda_6c4b80bdf74632827428df2b58c2a770___.c)
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::_lambda_6c4b80bdf74632827428df2b58c2a770_ @ 0x1801D395C (_lambda_6c4b80bdf74632827428df2b58c2a770_--_lambda_6c4b80bdf74632827428df2b58c2a770_.c)
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::__lambda_6c4b80bdf74632827428df2b58c2a770_ @ 0x1801D4FBC (_lambda_6c4b80bdf74632827428df2b58c2a770_--__lambda_6c4b80bdf74632827428df2b58c2a770_.c)
 *     ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x1801D5A7C (--1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1801D8B98 (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIShellTabsSource@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E3E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801E3E80.c)
 *     ?StartActivity@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXXZ @ 0x1801E53C4 (-StartActivity@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXXZ.c)
 *     ?Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z @ 0x1801E6D48 (-Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EE088 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EFCFC (-ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 */

__int64 __fastcall TabViewManager::OnCloseTabRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *a3)
{
  int v5; // eax
  int v6; // ebx
  struct IApplicationView *v7; // rdx
  ApplicationViewHelpers *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  volatile int *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v19; // [rsp+38h] [rbp-D0h] BYREF
  ApplicationViewHelpers *v20; // [rsp+40h] [rbp-C8h] BYREF
  TabViewManager *v21; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v22[3]; // [rsp+50h] [rbp-B8h] BYREF
  void **v23; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v24[24]; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+88h] [rbp-80h]
  __int64 v26[44]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+320h] [rbp+218h]

  v22[1] = -2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v23,
    (__int64)"TabViewManagerCloseTabRequested");
  v23 = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::StartActivity((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v23);
  v19 = 0LL;
  wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v19);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    TabViewManager::TryGetViewForTab(this, &v20, v19);
    v8 = v20;
    if ( v20 )
    {
      v22[0] = ApplicationViewHelpers::GetCoreWindowForView(
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v20,
                 v7);
      if ( v22[0] )
      {
        v21 = this;
        if ( this )
        {
          v13 = *((_QWORD *)this + 30);
          while ( v13 >= 0 )
          {
            if ( (_DWORD)v13 != 0x7FFFFFFF )
            {
              v14 = v13;
              v13 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 30, v13 + 1, v13);
              if ( v14 != v13 )
                continue;
            }
            goto LABEL_17;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
            (Microsoft::WRL::Details *)(2 * v13 + 16),
            v12);
        }
LABEL_17:
        v15 = lambda_6c4b80bdf74632827428df2b58c2a770_::_lambda_6c4b80bdf74632827428df2b58c2a770_(
                v26,
                &v21,
                (__int64 *)&v20,
                (__int64 *)&v19,
                v22);
        v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_6c4b80bdf74632827428df2b58c2a770___(
               v17,
               v16,
               *((_DWORD *)this + 358),
               v15);
        lambda_6c4b80bdf74632827428df2b58c2a770_::__lambda_6c4b80bdf74632827428df2b58c2a770_(v26);
        if ( v21 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v21);
        if ( v6 < 0 )
        {
          v11 = (unsigned int)v6;
          v10 = 3049LL;
          goto LABEL_7;
        }
        if ( v25 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
      }
      else
      {
        v9 = TabViewManager::CloseTab(this, v19, v8);
        v6 = v9;
        if ( v9 < 0 )
        {
          v10 = 3055LL;
          goto LABEL_6;
        }
        TabViewManagerMeasures::TabViewManagerCloseTabRequested::Stop(
          (TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v23,
          0);
      }
    }
    else
    {
      TabViewManagerMeasures::TabViewManagerCloseTabRequested::ZombieTab(
        (TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v23,
        v19);
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(**((_QWORD **)this + 145) + 80LL))(
             *((_QWORD *)this + 145),
             v19);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 2999LL;
LABEL_6:
        v11 = (unsigned int)v9;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)v11);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
        goto LABEL_27;
      }
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v23);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
    v6 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBAE,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v5);
LABEL_27:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::~TabViewManagerCloseTabRequested((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v23);
  return (unsigned int)v6;
}
