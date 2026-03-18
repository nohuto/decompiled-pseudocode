/*
 * XREFs of imp_VfWdfInterruptReleaseLock @ 0x1C00BCD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptReleaseLock(DriverGlobals, Interrupt);
}
