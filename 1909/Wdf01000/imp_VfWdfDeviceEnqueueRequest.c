/*
 * XREFs of imp_VfWdfDeviceEnqueueRequest @ 0x1C00BF8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfDeviceEnqueueRequest)(
           DriverGlobals,
           Device,
           Request);
}
