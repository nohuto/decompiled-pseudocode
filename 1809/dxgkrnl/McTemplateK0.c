/*
 * XREFs of McTemplateK0 @ 0x1C002FD4C
 * Callers:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C002D7E8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C002E768 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     DpiDxgkDdiUnload @ 0x1C004B2EC (DpiDxgkDdiUnload.c)
 *     ?MarkProcessCSStartTimes@DXGGLOBAL@@QEAAXXZ @ 0x1C0210190 (-MarkProcessCSStartTimes@DXGGLOBAL@@QEAAXXZ.c)
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0210550 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0211AA8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00130CC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-28h] BYREF

  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, a3, 1u, &EventData);
}
