/*
 * XREFs of HUBPDO_EvtDeviceReportedMissing @ 0x1C0070D10
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddDsmEvent @ 0x1C0008F70 (HUBSM_AddDsmEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup @ 0x1C00186A0 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall HUBPDO_EvtDeviceReportedMissing(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  HUBSM_AddDsmEvent(*(_QWORD *)(v1 + 24), 4083LL);
  return EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup(*(_QWORD *)(v1 + 24), v2);
}
