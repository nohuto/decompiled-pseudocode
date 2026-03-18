/*
 * XREFs of imp_VfWdfPdoInitAllowForwardingRequestToParent @ 0x1C00BE060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfPdoInitAllowForwardingRequestToParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitAllowForwardingRequestToParent(DriverGlobals, DeviceInit);
}
