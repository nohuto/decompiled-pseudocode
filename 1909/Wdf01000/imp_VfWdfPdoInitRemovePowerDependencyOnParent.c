/*
 * XREFs of imp_VfWdfPdoInitRemovePowerDependencyOnParent @ 0x1C00C2100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfPdoInitRemovePowerDependencyOnParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitRemovePowerDependencyOnParent(DriverGlobals, DeviceInit);
}
