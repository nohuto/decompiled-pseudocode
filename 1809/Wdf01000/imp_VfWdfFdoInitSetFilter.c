/*
 * XREFs of imp_VfWdfFdoInitSetFilter @ 0x1C00BCAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfFdoInitSetFilter(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfFdoInitSetFilter(DriverGlobals, DeviceInit);
}
