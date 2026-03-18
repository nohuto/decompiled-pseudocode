/*
 * XREFs of Controller_IsSecureDevice @ 0x1C000CF68
 * Callers:
 *     Command_CreateCommandWatchdogTimer @ 0x1C00572FC (Command_CreateCommandWatchdogTimer.c)
 *     CommonBuffer_Create @ 0x1C0057658 (CommonBuffer_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0059440 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_PopulateDeviceFlags @ 0x1C005987C (Controller_PopulateDeviceFlags.c)
 *     Controller_TelemetryAddControllerData @ 0x1C005B3F0 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C005C350 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C005C5B0 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Endpoint_Create @ 0x1C005D370 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C005DA40 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Interrupter_CreateInterrupter @ 0x1C005E028 (Interrupter_CreateInterrupter.c)
 *     Register_Create @ 0x1C005F678 (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C005F990 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C006014C (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C0060A08 (RootHub_PrepareHardware.c)
 *     TR_Create @ 0x1C0061390 (TR_Create.c)
 *     Bulk_GetConfiguration @ 0x1C0061BE4 (Bulk_GetConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 473);
}
