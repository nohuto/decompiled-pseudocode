/*
 * XREFs of HUBFDO_EvtDeviceSurpriseRemoval @ 0x1C0071870
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x1C000EDE8 (HUBMUX_QueueSurpriseRemovalToAllPSMs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBFDO_EvtDeviceSurpriseRemoval(__int64 a1)
{
  __int64 v1; // rax
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  __int64 v3; // rbx
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00640E0);
  v3 = v1;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v2, &USBHUB3_ETW_EVENT_HUB_SURPRISE_REMOVAL_START, 0LL, *(_QWORD *)(v1 + 248));
  HUBMUX_QueueSurpriseRemovalToAllPSMs(v3);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v4, &USBHUB3_ETW_EVENT_HUB_SURPRISE_REMOVAL_COMPLETE, 0LL, *(_QWORD *)(v3 + 248));
}
