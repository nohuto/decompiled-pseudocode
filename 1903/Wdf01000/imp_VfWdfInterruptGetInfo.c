/*
 * XREFs of imp_VfWdfInterruptGetInfo @ 0x1C00C0D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptGetInfo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt,
        _WDF_INTERRUPT_INFO *Info)
{
  WdfVersion.Functions.pfnWdfInterruptGetInfo(DriverGlobals, Interrupt, Info);
}
