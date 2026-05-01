/*
 * XREFs of ?OnCloseTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1802525A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800239D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800319B4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180085AAC (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014C710 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801533E8 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___ @ 0x180245EC4 (Windows--Internal--ComTaskPool--QueueTask__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___.c)
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_ @ 0x180248334 (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_.c)
 *     _lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_ @ 0x180249614 (_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_--__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_.c)
 *     ??1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x180249F60 (--1TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAA@XZ.c)
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024C1DC (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UITabViewManager@@UITabDragHandler@@UITabGroupManager@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@UITitleBarRecovery@@UIPrivilegedOperationsConsumer@@UIShellTabsSource@@UIImmersiveShellHookNotification@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180256090 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180256090.c)
 *     ?StartActivity@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXXZ @ 0x180257500 (-StartActivity@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXXZ.c)
 *     ?Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z @ 0x180258D10 (-Stop@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAX_N@Z.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025FC04 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 *     ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026198C (-ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 */

__int64 __fastcall TabViewManager::OnCloseTabRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v6; // eax
  int v7; // ebx
  struct IApplicationView *v8; // rdx
  ApplicationViewHelpers *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  volatile int *v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v20; // [rsp+38h] [rbp-D0h] BYREF
  ApplicationViewHelpers *v21; // [rsp+40h] [rbp-C8h] BYREF
  TabViewManager *v22; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-B8h] BYREF
  void **v24; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v25[24]; // [rsp+70h] [rbp-98h] BYREF
  int v26; // [rsp+88h] [rbp-80h]
  __int64 v27[44]; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v23[1] = -2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v24,
    (__int64)"TabViewManagerCloseTabRequested");
  v24 = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::StartActivity((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v24);
  v20 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerEventArgs *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v20);
  v6 = v5(a3, &v20);
  v7 = v6;
  if ( v6 >= 0 )
  {
    TabViewManager::TryGetViewForTab(this, &v21, v20);
    v9 = v21;
    if ( v21 )
    {
      v23[0] = ApplicationViewHelpers::GetCoreWindowForView(
                 (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v21,
                 v8);
      if ( v23[0] )
      {
        v22 = this;
        if ( this )
        {
          v14 = *((_QWORD *)this + 31);
          while ( v14 >= 0 )
          {
            if ( (_DWORD)v14 != 0x7FFFFFFF )
            {
              v15 = v14;
              v14 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 31, v14 + 1, v14);
              if ( v15 != v14 )
                continue;
            }
            goto LABEL_17;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
            (Microsoft::WRL::Details *)(2 * v14 + 16),
            v13);
        }
LABEL_17:
        v16 = lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::_lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_(
                v27,
                &v22,
                (__int64 *)&v21,
                (__int64 *)&v20,
                v23);
        v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98___(
               v18,
               v17,
               *((_DWORD *)this + 360),
               v16);
        lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_::__lambda_b28fa9b9f5cbdec4fb1712a00e7b7d98_(v27);
        if ( v22 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,ITabViewManager,ITabDragHandler,ITabGroupManager,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,ITitleBarRecovery,IPrivilegedOperationsConsumer,IShellTabsSource,IImmersiveShellHookNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v22);
        if ( v7 < 0 )
        {
          v12 = (unsigned int)v7;
          v11 = 2589LL;
          goto LABEL_7;
        }
        if ( v26 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v25);
      }
      else
      {
        v10 = TabViewManager::CloseTab(this, v20, v9);
        v7 = v10;
        if ( v10 < 0 )
        {
          v11 = 2595LL;
          goto LABEL_6;
        }
        TabViewManagerMeasures::TabViewManagerCloseTabRequested::Stop(
          (TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v24,
          0);
      }
    }
    else
    {
      TabViewManagerMeasures::TabViewManagerCloseTabRequested::ZombieTab(
        (TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v24,
        v20);
      v10 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTab *))(**((_QWORD **)this + 152) + 80LL))(
              *((_QWORD *)this + 152),
              v20);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 2542LL;
LABEL_6:
        v12 = (unsigned int)v10;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)v12);
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
        goto LABEL_27;
      }
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v24);
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v21);
    v7 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9E5,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v6);
LABEL_27:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v20);
  TabViewManagerMeasures::TabViewManagerCloseTabRequested::~TabViewManagerCloseTabRequested((TabViewManagerMeasures::TabViewManagerCloseTabRequested *)&v24);
  return (unsigned int)v7;
}
