/*
 * XREFs of ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801E2494
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801DF630 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801071F8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x180109160 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18010D4B4 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_4f38a82f935cf712510567f9984cd460___ @ 0x1801CFD8C (ShellPositionerHelpers--PerformCallbackOnView__lambda_4f38a82f935cf712510567f9984cd460___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_8e9ce47d82d357e106fccb3559ce9081___ @ 0x1801D005C (ShellPositionerHelpers--PerformCallbackOnView__lambda_8e9ce47d82d357e106fccb3559ce9081___.c)
 *     ??1?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D5100 (--1-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801DA4F8 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param.c)
 *     ?DisablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x1801DA6F0 (-DisablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?EnablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ @ 0x1801DB088 (-EnablingTabs@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1801E5F80 (-StartActivity@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicat.c)
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x1801ECEF0 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?TryGetTabForViewImpl@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801EDCDC (-TryGetTabForViewImpl@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell@Interna.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1801EE0F0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
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
  struct IUnknown *v19; // [rsp+48h] [rbp-190h] BYREF
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
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>(
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
          2716LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v5);
      TabViewManager::TryGetTabForViewImpl(this, &v17, v15);
      if ( v18 )
      {
        if ( !v17 )
        {
          TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::EnablingTabs((TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v23);
          v19 = 0LL;
          v6 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v19);
          if ( v6 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2725LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v6);
          v7 = TabViewManager::TryAssignViewToTabGroup((TabViewManager *)((char *)this + 136), v15, v19, &v22);
          if ( v7 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2728LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v7);
          punk = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
          (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
            (char *)this + 8,
            &GUID_00000000_0000_0000_c000_000000000046,
            &punk);
          *(_QWORD *)&v20 = &v15;
          *((_QWORD *)&v20 + 1) = &v22;
          v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_4f38a82f935cf712510567f9984cd460___(
                 punk,
                 (__int64)v15,
                 &v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
          if ( v8 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              2739LL,
              (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
              (const char *)(unsigned int)v8);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        }
      }
      else if ( v17 )
      {
        TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::DisablingTabs((TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)v23);
        v10 = TabViewManager::TryRemoveViewFromTabGroup((TabViewManager *)((char *)this + 136), v15);
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2746LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v10);
        punk = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
          (char *)this + 8,
          &GUID_00000000_0000_0000_c000_000000000046,
          &punk);
        v19 = (struct IUnknown *)&v15;
        v11 = ShellPositionerHelpers::PerformCallbackOnView__lambda_8e9ce47d82d357e106fccb3559ce9081___(
                punk,
                (__int64)v15,
                &v19);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            2757LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v11);
          __debugbreak();
          return TabViewManager::OnViewCanTabChanged_::_1_::dtor_1(v13, v12, v14);
        }
      }
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v23);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
      v23[0] = &TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::`vftable';
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
      wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xACC,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v4);
  }
  return result;
}
