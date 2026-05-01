/*
 * XREFs of ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x18014F8A4
 * Callers:
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18014F0C8 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180027E20 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x1800764BC (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18014FF7C (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragComplete::DragViewComplete(
        AppViewManagerTabTelemetry::DragComplete *this,
        struct IApplicationView *a2)
{
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // rbx
  LPCWSTR *AppNameFromView; // rax
  LPVOID pv; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-20h] BYREF

  v4 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v5 = (const struct _TlgProvider_t *)v4[1];
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn((TraceLoggingHProvider)v4[1], 0x400000000000uLL) )
  {
    AppNameFromView = (LPCWSTR *)LoggingUtil::GetAppNameFromView(&pv, a2);
    TlgCreateWsz(&pDesc, *AppNameFromView);
    TlgWrite(v5, &unk_1804DE128, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 3u, &pData);
    if ( pv )
      CoTaskMemFree(pv);
  }
}
