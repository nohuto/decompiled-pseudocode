/*
 * XREFs of ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x180237560
 * Callers:
 *     ??$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180225ED0 (--$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x1800484E4 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017B2D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18017B2D0.c)
 *     ??$com_weak_query_failfast@PEAVTabViewManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVTabViewManager@@@Z @ 0x1802289B4 (--$com_weak_query_failfast@PEAVTabViewManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_fail.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1802422F8 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?GetTabShellGroupPolicy@@YA?AW4TabShellGroupPolicy@@XZ @ 0x180244A0C (-GetTabShellGroupPolicy@@YA-AW4TabShellGroupPolicy@@XZ.c)
 *     ??$MakeAndInitializeOrThrow@VTitleBarController@@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@wil@@YA?AV?$ComPtr@VTitleBarController@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@0@@Z @ 0x1802465F8 (--$MakeAndInitializeOrThrow@VTitleBarController@@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_p.c)
 *     ?InternalRelease@?$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ @ 0x180248CF8 (-InternalRelease@-$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@wil@@YA?AV?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18024AFE4 (--$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@w.c)
 *     ?InternalRelease@?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18024B960 (-InternalRelease@-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Mi.c)
 *     ??$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VViewGroupManager@@@WRL@Microsoft@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Z @ 0x18024C798 (--$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA-A.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::RuntimeClassInitialize(TabViewManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rbx
  volatile signed __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const char *v16; // r9
  __int64 result; // rax
  LPVOID v18[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  volatile signed __int64 *v22; // [rsp+A0h] [rbp+8h] BYREF
  TabViewManager *v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+18h] BYREF
  __int64 *v25; // [rsp+B8h] [rbp+20h]

  TabViewManagerTraceLogging::WatchCurrentThread(v18, "TabViewManager_RuntimeClassInitialize");
  v23 = this;
  try
  {
    v2 = wil::com_weak_query_failfast<TabViewManager *>(&v24, (__int64 *)&v23);
    v3 = *v2;
    *v2 = 0LL;
    v22 = (volatile signed __int64 *)v3;
    v25 = (__int64 *)&v22;
    v4 = (__int64 *)wil::MakeAndInitializeOrThrow<TitleBarController,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
                      &v23,
                      &v22);
    v5 = *v4;
    *v4 = 0LL;
    if ( v5 )
      v6 = v5 + 8;
    else
      v6 = 0LL;
    Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease(&v23);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    v23 = 0LL;
    v7 = *((_QWORD *)this + 172);
    *((_QWORD *)this + 172) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v24);
    v8 = (__int64 *)wil::MakeAndInitializeOrThrow<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,>(&v22);
    v9 = *v8;
    *v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>::InternalRelease(&v22);
    v22 = 0LL;
    v10 = *((_QWORD *)this + 174);
    *((_QWORD *)this + 174) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    v23 = (TabViewManager *)((char *)this + 136);
    v24 = *((_QWORD *)this + 172);
    v11 = (__int64 *)wil::MakeOrThrow<ViewGroupManager,ITitleBarController * &,ITabViewManager * &>(&v22, &v24, &v23);
    v12 = *v11;
    *v11 = 0LL;
    if ( v12 )
      v12 += 8LL;
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(v13);
    }
    v22 = 0LL;
    v14 = *((_QWORD *)this + 171);
    *((_QWORD *)this + 171) = v12;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    *((_BYTE *)this + 1444) = (unsigned int)GetTabShellGroupPolicy(v15) != 2;
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v19);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v18);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x28D,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v16);
    return (unsigned int)v22;
  }
  return result;
}
