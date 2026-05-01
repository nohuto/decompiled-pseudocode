/*
 * XREFs of ?StartActivity@TabViewManager_CloakView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1802083CC
 * Callers:
 *     ?OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_STATE@@2AEBUtagRECT@@3@Z @ 0x180207170 (-OnTemplateAppliedToWindow@ViewGroup@@UEAAJPEAUIApplicationView@@PEAUHWND__@@W4TRACKED_WINDOW_ST.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180026DC4 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18010A750 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F21FC (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabViewManager_CloakView::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_CloakView *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // r14
  LPCWSTR *AppNameFromView; // rax
  bool v7; // bl
  struct IApplicationView *v8; // rdx
  int v9; // eax
  const GUID *v10; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-39h] BYREF
  int v12; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v13; // [rsp+40h] [rbp-31h] BYREF
  LPVOID pv[2]; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  int *v20; // [rsp+98h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]

  pv[1] = (LPVOID)-2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v17 = 4;
    v18 = 0;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(pv, (__int64)a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    if ( a2 )
    {
      (**a2)((ApplicationViewHelpers *)a2, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v13);
      v7 = v13 != 0;
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v13);
      v9 = v7 ? ApplicationViewHelpers::GetCoreWindowForView(a2, v8) : ApplicationViewHelpers::GetWindowForView(a2, v8);
    }
    else
    {
      v9 = 0;
    }
    v12 = v9;
    v20 = &v12;
    v21 = 4;
    v22 = 0;
    v10 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_18045AC33, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 5u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_CloakView *)((char *)this + 8));
}
