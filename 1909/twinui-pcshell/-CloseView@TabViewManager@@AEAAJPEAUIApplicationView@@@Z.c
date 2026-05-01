/*
 * XREFs of ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024C33C
 * Callers:
 *     ?CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18024C1DC (-CloseTab@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplica.c)
 *     ?TryCleanupReplacedView@TabViewManager@@AEAAXPEAUIApplicationView@@@Z @ 0x18025EC20 (-TryCleanupReplacedView@TabViewManager@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18025ED18 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$TabViewManagerCloseViewForTab@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@TabViewManagerMeasures@@SAXAEAPEAUIApplicationView@@$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@3456@@Z @ 0x1802463D0 (--$TabViewManagerCloseViewForTab@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShel.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18024844C (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180249FE4 (--1TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1802577F4 (-StartActivity@TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180258718 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025F464 (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18025F84C (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18042E470 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

__int64 __fastcall TabViewManager::CloseView(TabViewManager *this, struct IApplicationView *a2)
{
  __int64 v4; // rcx
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v5; // rbx
  HRESULT v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  IUnknown *punk; // [rsp+38h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-C8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v13; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v14; // [rsp+50h] [rbp-B8h] BYREF
  IUnknown *v15; // [rsp+58h] [rbp-B0h] BYREF
  struct IApplicationView *v16[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v17[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v16[1] = (struct IApplicationView *)-2LL;
  v16[0] = a2;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"TabViewManager_CloseView");
  v17[0] = &TabViewManagerTraceLogging::TabViewManager_CloseView::`vftable';
  TabViewManagerTraceLogging::TabViewManager_CloseView::StartActivity(
    (TabViewManagerTraceLogging::TabViewManager_CloseView *)v17,
    a2);
  TabViewManager::TryGetTabForViewImpl(this, &v13, a2);
  v5 = v13;
  if ( v13 )
  {
    TabViewManager::TryGetGroup(v4, &punk, v13);
    v14 = v5;
    v15 = punk;
    TabViewManagerMeasures::TabViewManagerCloseViewForTab<IApplicationView * &,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,Windows::Internal::ComposableShell::Tabs::IShellTab *>(
      v16,
      (struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **)&v15,
      &v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&punk);
  }
  ppvOut = 0LL;
  punk = 0LL;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
    (char *)this + 8,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  if ( ppvOut )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 16LL))(ppvOut);
  v6 = IUnknown_QueryService(punk, &stru_180519430, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v6 >= 0 )
  {
    v9 = ApplicationViewHelpers::CloseView(a2, ppvOut, 10LL);
    v6 = v9;
    if ( v9 >= 0 )
    {
      wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
      v6 = 0;
      goto LABEL_11;
    }
    v7 = (unsigned int)v9;
    v8 = 3168LL;
  }
  else
  {
    v7 = (unsigned int)v6;
    v8 = 3167LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
    (const char *)v7);
LABEL_11:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&ppvOut);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v13);
  TabViewManagerTraceLogging::TabViewManager_CloseView::~TabViewManager_CloseView((TabViewManagerTraceLogging::TabViewManager_CloseView *)v17);
  return (unsigned int)v6;
}
