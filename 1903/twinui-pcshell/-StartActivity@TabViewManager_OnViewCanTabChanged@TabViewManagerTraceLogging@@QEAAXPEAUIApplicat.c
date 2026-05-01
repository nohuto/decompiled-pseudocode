/*
 * XREFs of ?StartActivity@TabViewManager_OnViewCanTabChanged@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180238B10
 * Callers:
 *     ?OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180235400 (-OnViewCanTabChanged@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x18000EAD4 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008D338 (-zInternalRelatedId@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180130A2C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18024368C (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflect.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged::StartActivity(
        TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rcx
  LPVOID v5; // rax
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  LPCWSTR *AppNameFromView; // rax
  const GUID *v9; // rax
  DWORD v10; // [rsp+30h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  DWORD *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v4,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)v5 + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    if ( TlgKeywordOn(*((TraceLoggingHProvider *)v5 + 1), 0x400000000000uLL) )
    {
      v15 = 0;
      v13 = &`NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::StartActivity'::`4'::_TlgActivityPrivacyTag;
      v14 = 8;
      CurrentThreadId = GetCurrentThreadId();
      v18 = 0;
      v10 = CurrentThreadId;
      v17 = 4;
      v16 = &v10;
      AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(
                                     (HWND)&pv,
                                     (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
      TlgCreateWsz(&pDesc, *AppNameFromView);
      v9 = (const GUID *)wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      TlgWrite(v6, &unk_1804CCDB4, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, 5u, &pData);
      if ( pv )
        CoTaskMemFree(pv);
    }
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabViewManagerTraceLogging::TabViewManager_OnViewCanTabChanged *)((char *)this + 8));
}
