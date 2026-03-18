/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C00161D0
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C000EC78 (Controller_InitiateRecovery.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C0015CE0 (DeviceSlot_LocateDeviceByPortPath.c)
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C003C094 (UsbDevice_SetDeviceDisabled.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0062970 (Controller_TelemetryAddControllerData.c)
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
