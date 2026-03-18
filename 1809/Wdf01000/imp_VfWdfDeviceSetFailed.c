/*
 * XREFs of imp_VfWdfDeviceSetFailed @ 0x1C00BC0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetFailed(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device, __int64 FailedAction)
{
  WdfVersion.Functions.pfnWdfDeviceSetFailed(DriverGlobals, Device, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
}
