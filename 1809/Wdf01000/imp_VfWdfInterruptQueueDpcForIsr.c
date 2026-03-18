/*
 * XREFs of imp_VfWdfInterruptQueueDpcForIsr @ 0x1C00BCD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfInterruptQueueDpcForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *))WdfVersion.Functions.pfnWdfInterruptQueueDpcForIsr)(
           DriverGlobals,
           Interrupt);
}
