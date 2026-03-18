/*
 * XREFs of imp_VfWdfDeviceGetDevicePnpState @ 0x1C00BB950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceGetDevicePnpState(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfDeviceGetDevicePnpState)(
           DriverGlobals,
           Device);
}
