/*
 * XREFs of imp_VfWdfDeviceSetPnpCapabilities @ 0x1C00BC0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetPnpCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  WdfVersion.Functions.pfnWdfDeviceSetPnpCapabilities(DriverGlobals, Device, PnpCapabilities);
}
