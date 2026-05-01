/*
 * XREFs of ?StartActivity@TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x1801E5890
 * Callers:
 *     ?ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801DB56C (-ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180071E90 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800834E0 (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18010A750 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     LoggingUtil::GetViewIdFromView @ 0x1801DDB80 (LoggingUtil--GetViewIdFromView.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801F2194 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03U_TlgReflectorTag_Param0IsP.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabViewManager_ExitFullScreen::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_ExitFullScreen *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rdi
  LPCWSTR *AppNameFromView; // rax
  const GUID *v7; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-39h] BYREF
  int ViewIdFromView; // [rsp+3Ch] [rbp-35h] BYREF
  LPVOID pv[3]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp+7h]
  int v13; // [rsp+80h] [rbp+Fh]
  int v14; // [rsp+84h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  int *p_ViewIdFromView; // [rsp+98h] [rbp+27h]
  int v17; // [rsp+A0h] [rbp+2Fh]
  int v18; // [rsp+A4h] [rbp+33h]

  pv[1] = (LPVOID)-2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                        v4,
                                        (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v13 = 4;
    v14 = 0;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(pv, (__int64)a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    ViewIdFromView = LoggingUtil::GetViewIdFromView(a2);
    p_ViewIdFromView = &ViewIdFromView;
    v17 = 4;
    v18 = 0;
    v7 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_180458EDE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 5u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_ExitFullScreen *)((char *)this + 8));
}
