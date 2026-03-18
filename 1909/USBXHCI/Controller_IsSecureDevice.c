/*
 * XREFs of Controller_IsSecureDevice @ 0x1C000F418
 * Callers:
 *     Command_CreateCommandWatchdogTimer @ 0x1C005E324 (Command_CreateCommandWatchdogTimer.c)
 *     CommonBuffer_Create @ 0x1C005E6D8 (CommonBuffer_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00606EC (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Controller_PopulateDeviceFlags @ 0x1C0060B8C (Controller_PopulateDeviceFlags.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0062970 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0063A00 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0063E20 (Controller_WdfEvtDeviceReleaseHardware.c)
 *     Endpoint_Create @ 0x1C0064D10 (Endpoint_Create.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00654B0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Interrupter_CreateInterrupter @ 0x1C0065AE8 (Interrupter_CreateInterrupter.c)
 *     Register_Create @ 0x1C0067418 (Register_Create.c)
 *     Register_ParseCapabilityRegister @ 0x1C0067778 (Register_ParseCapabilityRegister.c)
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x1C00689FC (RootHub_PrepareHardware.c)
 *     TR_Create @ 0x1C0069444 (TR_Create.c)
 *     Bulk_GetConfiguration @ 0x1C0069D30 (Bulk_GetConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 537);
}
