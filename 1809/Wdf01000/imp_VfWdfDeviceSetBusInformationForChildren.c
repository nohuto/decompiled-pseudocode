/*
 * XREFs of imp_VfWdfDeviceSetBusInformationForChildren @ 0x1C00BC020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetBusInformationForChildren(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _PNP_BUS_INFORMATION *BusInformation)
{
  WdfVersion.Functions.pfnWdfDeviceSetBusInformationForChildren(DriverGlobals, Device, BusInformation);
}
