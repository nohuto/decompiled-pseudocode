/*
 * XREFs of imp_VfWdfDeviceSetDeviceInterfaceState @ 0x1C00BC060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetDeviceInterfaceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString,
        unsigned __int8 IsInterfaceEnabled)
{
  WdfVersion.Functions.pfnWdfDeviceSetDeviceInterfaceState(
    DriverGlobals,
    Device,
    InterfaceClassGUID,
    ReferenceString,
    IsInterfaceEnabled);
}
