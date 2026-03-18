/*
 * XREFs of imp_VfWdfDeviceGetDevicePowerState @ 0x1C00BB990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceGetDevicePowerState(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfDeviceGetDevicePowerState)(
           DriverGlobals,
           Device);
}
