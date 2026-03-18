/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C00136DC
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C000C898 (Controller_InitiateRecovery.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0013268 (DeviceSlot_LocateDeviceByPortPath.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 *     Controller_TelemetryAddControllerData @ 0x1C005B3F0 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetUsbDeviceHandleArray(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    return *(_QWORD *)(a1 + 24);
  else
    return *(_QWORD *)(a1 + 72);
}
