/*
 * XREFs of imp_VfWdfDeviceWdmGetPhysicalDevice @ 0x1C00BC270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetPhysicalDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetPhysicalDevice(DriverGlobals, Device);
}
