/*
 * XREFs of imp_VfWdfDeviceGetDefaultQueue @ 0x1C00BB930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFQUEUE__ *__fastcall imp_VfWdfDeviceGetDefaultQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetDefaultQueue(DriverGlobals, Device);
}
