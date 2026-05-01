/*
 * XREFs of ?OnTitleBarsLost@TabViewManager@@UEAAJXZ @ 0x1801E2110
 * Callers:
 *     ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x1801DFFE0 (-OnMessage@TabViewManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UITitleBarRecovery@@@?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITitleBarRecovery@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008FE30 (--$query@UITitleBarRecovery@@@-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3D08 (--0-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D513C (--1-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA5A0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProvide.c)
 *     ?RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ @ 0x1801E3A38 (-RegisterForTabTransferEvents@TabViewManager@@AEAAJXZ.c)
 *     ?StartActivity@TabViewManager_OnTitleBarsLost@TabViewManagerTraceLogging@@QEAAXXZ @ 0x1801E5DC4 (-StartActivity@TabViewManager_OnTitleBarsLost@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E68E0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderTy.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabViewManager::OnTitleBarsLost(RTL_SRWLOCK *this)
{
  __int64 result; // rax
  int v3; // eax
  const char *v4; // r9
  __int64 v5[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v5[1] = -2LL;
  if ( GetSystemMetrics(0x2000) )
    return 0LL;
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"TabViewManager_OnTitleBarsLost");
  v6[0] = &TabViewManagerTraceLogging::TabViewManager_OnTitleBarsLost::`vftable';
  TabViewManagerTraceLogging::TabViewManager_OnTitleBarsLost::StartActivity((TabViewManagerTraceLogging::TabViewManager_OnTitleBarsLost *)v6);
  AcquireSRWLockExclusive(this + 164);
  TabViewManager::RegisterForTabTransferEvents((TabViewManager *)&this[-20]);
  if ( this != (RTL_SRWLOCK *)-1312LL )
    ReleaseSRWLockExclusive(this + 164);
  try
  {
    if ( this[151].Ptr )
    {
      wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>::query<ITitleBarRecovery>(
        &this[151].Ptr,
        (__int64)v5);
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5[0] + 24LL))(v5[0]);
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1105LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v3);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v5);
    }
    wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
    v6[0] = &TabViewManagerTraceLogging::TabViewManager_OnTitleBarsLost::`vftable';
    wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
    wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x456,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v4);
  }
  return result;
}
