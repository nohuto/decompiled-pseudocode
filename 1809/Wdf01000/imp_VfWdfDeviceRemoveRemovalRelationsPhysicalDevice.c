/*
 * XREFs of imp_VfWdfDeviceRemoveRemovalRelationsPhysicalDevice @ 0x1C00BBF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceRemoveRemovalRelationsPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *PhysicalDevice)
{
  WdfVersion.Functions.pfnWdfDeviceRemoveRemovalRelationsPhysicalDevice(DriverGlobals, Device, PhysicalDevice);
}
