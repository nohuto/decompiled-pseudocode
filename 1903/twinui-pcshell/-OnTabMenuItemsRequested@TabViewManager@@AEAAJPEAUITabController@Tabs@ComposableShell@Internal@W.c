/*
 * XREFs of ?OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerMenuItemsRequestedEventArgs@3456@@Z @ 0x180233F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180141028 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x180143530 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUIApplicationView@@PEBD@Z @ 0x18023FDC4 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabM_ea_18023FDC4.c)
 *     ?TryGetViewForTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180240614 (-TryGetViewForTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wi.c)
 */

__int64 __fastcall TabViewManager::OnTabMenuItemsRequested(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a2,
        struct Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  char v12; // bl
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+98h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v14 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs *, __int64 *))(*(_QWORD *)a3 + 48LL);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(&v14);
  v6 = v5(a3, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2E,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  TabViewManager::TryGetViewForTab(this, &v20, v14);
  if ( !v20 || (TryGetApplicationViewTabManager(v15, v20, "TabMenuItemsRequested"), !v15[0]) )
  {
LABEL_16:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    v7 = 0;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)a3;
  v19 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::ITabControllerMenuItemsRequestedEventArgs *, __int64 *))(v8 + 56))(
         a3,
         &v19);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v10 = v15[0];
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v16, 0);
    v17 = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 88LL))(v10, v14, v19);
    if ( v11 >= 0 )
    {
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA42,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v11);
      v12 = 1;
    }
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v16);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 120LL))(v19);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    if ( v15[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA41,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)(unsigned int)v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
LABEL_17:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v14);
  return v7;
}
