/*
 * XREFs of HUBPDO_EvtDeviceSurpriseRemoval @ 0x1C0075ED0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBUCX_CheckIfHubIsDisconnected @ 0x1C0025830 (HUBUCX_CheckIfHubIsDisconnected.c)
 *     HUBMISC_RemoveDeviceInfoFromGlobalChildList @ 0x1C002C668 (HUBMISC_RemoveDeviceInfoFromGlobalChildList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_BillboardCleanup @ 0x1C007591C (HUBPDO_BillboardCleanup.c)
 */

void __fastcall HUBPDO_EvtDeviceSurpriseRemoval(__int64 a1)
{
  struct _MCGEN_TRACE_CONTEXT *v1; // rcx
  __int64 v2; // rbx
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0064040)
                 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v1, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_START, 0LL, *(_QWORD *)(v2 + 24));
  if ( (unsigned __int8)HUBUCX_CheckIfHubIsDisconnected(*(_QWORD *)v2) )
    HUBMISC_RemoveDeviceInfoFromGlobalChildList(v2);
  **(_BYTE **)(v2 + 16) = 1;
  HUBPDO_BillboardCleanup(v2);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v3, &USBHUB3_ETW_EVENT_DEVICE_SURPRISE_REMOVAL_COMPLETE, 0LL, *(_QWORD *)(v2 + 24));
}
