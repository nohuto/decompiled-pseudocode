/*
 * XREFs of ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1801E22B0
 * Callers:
 *     ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x1801DFFE0 (-OnMessage@TabViewManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801D3D08 (--0-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D50C4 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA648 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StartActivity@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x1801E5E80 (-StartActivity@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXPEA.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801E68E0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801EDFA4 (-TryGetViewForPresentedHwnd@ApplicationViewCollectionWrapper@@QEAA-AV-$com_ptr_t@UIApplicationVi.c)
 *     ?UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXW4DWM_TAB_WINDOW_REQUIREMENTS@@0AEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1801EE83C (-UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLog.c)
 *     ?GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x180201D54 (-GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z.c)
 */

void __fastcall TabViewManager::OnUnmetTabRequirementsChanged(__int64 a1, HWND a2, unsigned int a3)
{
  char v6; // di
  __int64 v7; // rbx
  bool v8; // si
  struct TelemetryHelpers::WindowCharacteristics *v9; // r8
  int v10; // eax
  int v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[40]; // [rsp+40h] [rbp-C0h] BYREF
  struct HWND__ v14; // [rsp+180h] [rbp+80h] BYREF
  LPVOID pv; // [rsp+3A8h] [rbp+2A8h]
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+2F8h]

  v12[1] = -2LL;
  v6 = 0;
  v11[0] = 0;
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"TabViewManager_OnUnmetTabRequirementsChanged");
  v13[0] = &TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::`vftable';
  TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::StartActivity(v13, a2, a3);
  ApplicationViewCollectionWrapper::TryGetViewForPresentedHwnd(a1 + 1144, v12, a2);
  v7 = v12[0];
  v8 = 0;
  if ( v12[0] )
  {
    (**(void (__fastcall ***)(__int64, GUID *, int *))v12[0])(v12[0], &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v11);
    v6 = 1;
    if ( *(_QWORD *)v11 )
      v8 = 1;
  }
  if ( (v6 & 1) != 0 )
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)v11);
  if ( v8 )
  {
    v11[0] = 0;
    if ( (int)DwmGetUnmetTabRequirements(a2, v11) >= 0 )
    {
      memset_0(&v14, 0, 0x226uLL);
      pv = 0LL;
      TelemetryHelpers::GetWindowCharacteristicsPartial(a2, &v14, v9);
      TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::UnmetTabRequirementsChanged(
        v13,
        a3,
        (unsigned int)v11[0],
        &v14);
      if ( pv )
        CoTaskMemFree(pv);
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 440LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2659LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v10);
  }
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
  v13[0] = &TabViewManagerTraceLogging::TabViewManager_OnUnmetTabRequirementsChanged::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
}
