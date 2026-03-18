/*
 * XREFs of McTemplateK0 @ 0x1C003554C
 * Callers:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0032F10 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0033FAC (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     DpiDxgkDdiUnload @ 0x1C0052540 (DpiDxgkDdiUnload.c)
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C02445D0 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0245798 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x1C0001E14 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, a3, 1u, &EventData);
}
