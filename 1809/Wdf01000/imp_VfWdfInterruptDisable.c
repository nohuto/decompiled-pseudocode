/*
 * XREFs of imp_VfWdfInterruptDisable @ 0x1C00BCCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptDisable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptDisable(DriverGlobals, Interrupt);
}
