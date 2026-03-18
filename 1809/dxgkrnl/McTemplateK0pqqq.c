/*
 * XREFs of McTemplateK0pqqq @ 0x1C002FF60
 * Callers:
 *     ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C002D74C (-CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C002EA34 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C0145F8C (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiDxgkDdiStartDevice @ 0x1C0148624 (DpiDxgkDdiStartDevice.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01BEE70 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C026CA40 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C026CABC (DpiCallDrvSetBrightness.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00130CC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

ULONG __stdcall McTemplateK0pqqq(
        PMCGEN_TRACE_CONTEXT Context,
        PCEVENT_DESCRIPTOR Descriptor,
        const GUID *Activity,
        const void *Arg0,
        const unsigned int Arg1,
        const unsigned int Arg2,
        const unsigned int Arg3)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  const void **v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  const unsigned int *p_Arg1; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  const unsigned int *p_Arg2; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  const unsigned int *p_Arg3; // [rsp+70h] [rbp+1Fh]
  __int64 v16; // [rsp+78h] [rbp+27h]
  const void *v17; // [rsp+B8h] [rbp+67h] BYREF

  v17 = Arg0;
  v10 = 8LL;
  v9 = &v17;
  v12 = 4LL;
  p_Arg1 = &Arg1;
  v14 = 4LL;
  p_Arg2 = &Arg2;
  p_Arg3 = &Arg3;
  v16 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, Descriptor, Activity, 5u, &EventData);
}
