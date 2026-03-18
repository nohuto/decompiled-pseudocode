/*
 * XREFs of imp_VfWdfDriverMiniportUnload @ 0x1C00C0840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDriverMiniportUnload(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  WdfVersion.Functions.pfnWdfDriverMiniportUnload(DriverGlobals, Driver);
}
