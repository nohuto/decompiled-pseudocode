/*
 * XREFs of imp_VfWdfRequestFormatRequestUsingCurrentType @ 0x1C00C2A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestFormatRequestUsingCurrentType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request)
{
  WdfVersion.Functions.pfnWdfRequestFormatRequestUsingCurrentType(DriverGlobals, Request);
}
