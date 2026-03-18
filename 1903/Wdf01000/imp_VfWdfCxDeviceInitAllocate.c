/*
 * XREFs of imp_VfWdfCxDeviceInitAllocate @ 0x1C00BF530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFCXDEVICE_INIT *__fastcall imp_VfWdfCxDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  return WdfVersion.Functions.pfnWdfCxDeviceInitAllocate(DriverGlobals, DeviceInit);
}
