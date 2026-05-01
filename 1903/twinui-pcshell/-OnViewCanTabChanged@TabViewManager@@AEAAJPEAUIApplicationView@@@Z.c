/*
 * XREFs of ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180235400
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180232AF0 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18012D1D0 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18012F4A0 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180133E68 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_d59735c3eb0eda7bf11c753d2fbddc04___ @ 0x180226380 (ShellPositionerHelpers--PerformCallbackOnView__lambda_d59735c3eb0eda7bf11c753d2fbddc04___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_eca2acfad1daff1f44c2ec416e710dca___ @ 0x1802264EC (ShellPositionerHelpers--PerformCallbackOnView__lambda_eca2acfad1daff1f44c2ec416e710dca___.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18022A044 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0I.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18022E5E0 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_P.c)
 *     ?DisablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x18022E7D8 (-DisablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?EnablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x18022EA44 (-EnablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180238B10 (-StartActivity@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicat.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18023F180 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18024025C (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180240680 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TabViewManager::OnViewCanTabChanged(TabViewManager *this, struct IApplicationView *a2)
{
  bool v3; // bl
  const char *v4; // r9
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  __int64 result; // rax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct IApplicationView *v15; // [rsp+28h] [rbp-1B0h] BYREF
  IUnknown *punk; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-1A0h] BYREF
  int v18; // [rsp+40h] [rbp-198h] BYREF
  IUnknown *v19; // [rsp+48h] [rbp-190h] BYREF
  __int128 v20; // [rsp+50h] [rbp-188h] BYREF
  __int64 v21; // [rsp+60h] [rbp-178h]
  struct _GUID v22; // [rsp+68h] [rbp-170h] BYREF
  _QWORD v23[40]; // [rsp+80h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v21 = -2LL;
  v15 = a2;
  try
  {
    (**(void (__fastcall ***)(struct IApplicationView *))a2)(a2);
    v3 = v17 != 0;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    if ( v3 )
    {
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v23,
        (__int64)"TabViewManager_OnViewCanTabChanged");
      v23[0] = &TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::`vftable';
      TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::StartActivity(
        (TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v23,
        v15);
      v18 = 0;
      v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v15 + 408LL))(v15, &v18);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          2259LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v5);
      TabViewManager::TryGetTabForViewImpl(this, &v17, v15);
      if ( v18 )
      {
        if ( !v17 )
        {
          TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::EnablingTabs((TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v23);
          punk = 0LL;
          v6 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&punk);
          if ( v6 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2268LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v6);
          v7 = TabViewManager::TryAssignViewToTabGroup((TabViewManager *)((char *)this + 136), v15, punk, &v22);
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2271LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v7);
          v19 = 0LL;
          (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
            (char *)this + 8,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v19);
          *(_QWORD *)&v20 = &v15;
          *((_QWORD *)&v20 + 1) = &v22;
          v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_eca2acfad1daff1f44c2ec416e710dca___(
                 v19,
                 (__int64)v15,
                 &v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
          if ( v8 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2282LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v8);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
        }
      }
      else if ( v17 )
      {
        TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::DisablingTabs((TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v23);
        v10 = TabViewManager::TryRemoveViewFromTabGroup((TabViewManager *)((char *)this + 136), v15);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2289LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v10);
        punk = 0LL;
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
          (char *)this + 8,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        v19 = (IUnknown *)&v15;
        v11 = ShellPositionerHelpers::PerformCallbackOnView__lambda_d59735c3eb0eda7bf11c753d2fbddc04___(
                punk,
                (__int64)v15,
                &v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2300LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v11);
          __debugbreak();
          return TabViewManager::OnViewCanTabChanged_::_1_::dtor_1(v13, v12, v14);
        }
      }
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v23);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
      v23[0] = &TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::`vftable';
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x903,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v4);
  }
  return result;
}
