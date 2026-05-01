/*
 * XREFs of ?StartActivity@TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x18023847C
 * Callers:
 *     ?ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18022EF7C (-ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180130A2C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     LoggingUtil::GetViewIdFromView @ 0x180231188 (LoggingUtil--GetViewIdFromView.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802435B4 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabViewManagerTraceLogging::TabViewManager_ExitFullScreen::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_ExitFullScreen *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rdi
  LPCWSTR *AppNameFromView; // rax
  const GUID *v7; // rax
  DWORD CurrentThreadId; // [rsp+38h] [rbp-49h] BYREF
  int ViewIdFromView; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID pv[3]; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  __int64 *v12; // [rsp+78h] [rbp-9h]
  int v13; // [rsp+80h] [rbp-1h]
  int v14; // [rsp+84h] [rbp+3h]
  DWORD *p_CurrentThreadId; // [rsp+88h] [rbp+7h]
  int v16; // [rsp+90h] [rbp+Fh]
  int v17; // [rsp+94h] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+17h] BYREF
  int *p_ViewIdFromView; // [rsp+A8h] [rbp+27h]
  int v20; // [rsp+B0h] [rbp+2Fh]
  int v21; // [rsp+B4h] [rbp+33h]

  pv[1] = (LPVOID)-2LL;
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<TabShellTelemetryProvider>::get(
                                                    v4,
                                                    (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v5 > 4u )
  {
    v12 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
    v13 = 8;
    v14 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v16 = 4;
    v17 = 0;
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                   (HWND)pv,
                                   (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    ViewIdFromView = LoggingUtil::GetViewIdFromView((__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2);
    p_ViewIdFromView = &ViewIdFromView;
    v20 = 4;
    v21 = 0;
    v7 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v5, &unk_1804CDCBD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 6u, &pData);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_ExitFullScreen *)((char *)this + 8));
}
