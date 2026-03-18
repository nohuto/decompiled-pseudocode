/*
 * XREFs of imp_VfWdfFdoInitWdmGetPhysicalDevice @ 0x1C00BCAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfFdoInitWdmGetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  return WdfVersion.Functions.pfnWdfFdoInitWdmGetPhysicalDevice(DriverGlobals, DeviceInit);
}
