/*
 * XREFs of ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x1801E4AAC
 * Callers:
 *     ??$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801CFA2C (--$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??1StoredCallContextInfo@details@wil@@QEAA@XZ @ 0x18002FA48 (--1StoredCallContextInfo@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$com_weak_query_failfast@PEAVTabViewManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVTabViewManager@@@Z @ 0x1801D3678 (--$com_weak_query_failfast@PEAVTabViewManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_fail.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1801EFC44 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?GetTabShellGroupPolicy@@YA?AW4TabShellGroupPolicy@@XZ @ 0x1801F3610 (-GetTabShellGroupPolicy@@YA-AW4TabShellGroupPolicy@@XZ.c)
 *     ??$MakeAndInitializeOrThrow@VTitleBarController@@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@wil@@YA?AV?$ComPtr@VTitleBarController@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@0@@Z @ 0x1801F51D0 (--$MakeAndInitializeOrThrow@VTitleBarController@@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_p.c)
 *     ?InternalRelease@?$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F7D84 (-InternalRelease@-$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VViewGroupManager@@@WRL@Microsoft@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Z @ 0x1801F9A4C (--$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA-A.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::RuntimeClassInitialize(TabViewManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  TabViewManager *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // r9
  __int64 result; // rax
  LPVOID v17[4]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[24]; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v21; // [rsp+A0h] [rbp+8h] BYREF
  TabViewManager *v22; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+18h] BYREF
  __int64 *v24; // [rsp+B8h] [rbp+20h]

  TabViewManagerTraceLogging::WatchCurrentThread(v17, "TabViewManager_RuntimeClassInitialize");
  v22 = this;
  try
  {
    v2 = wil::com_weak_query_failfast<TabViewManager *>(&v23, (__int64 *)&v22);
    v3 = *v2;
    *v2 = 0LL;
    v21 = v3;
    v24 = &v21;
    v4 = (__int64 *)wil::MakeAndInitializeOrThrow<TitleBarController,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
                      &v22,
                      &v21);
    v5 = *v4;
    *v4 = 0LL;
    if ( v5 )
      v6 = v5 + 8;
    else
      v6 = 0LL;
    Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease(&v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    v22 = 0LL;
    v7 = *((_QWORD *)this + 172);
    *((_QWORD *)this + 172) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
    if ( this )
      v8 = (TabViewManager *)((char *)this + 136);
    else
      v8 = 0LL;
    v22 = v8;
    v23 = *((_QWORD *)this + 172);
    v9 = (__int64 *)wil::MakeOrThrow<ViewGroupManager,ITitleBarController * &,ITabViewManager * &>(&v21, &v23, &v22);
    v10 = *v9;
    *v9 = 0LL;
    if ( v10 )
      v11 = v10 + 8;
    else
      v11 = 0LL;
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(v12);
    }
    v21 = 0LL;
    v13 = *((_QWORD *)this + 171);
    *((_QWORD *)this + 171) = v11;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    *((_BYTE *)this + 1464) = (unsigned int)GetTabShellGroupPolicy(v14) != 2;
    if ( v19 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
    wil::details::StoredCallContextInfo::~StoredCallContextInfo(v17);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2C2,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v15);
    return (unsigned int)v21;
  }
  return result;
}
