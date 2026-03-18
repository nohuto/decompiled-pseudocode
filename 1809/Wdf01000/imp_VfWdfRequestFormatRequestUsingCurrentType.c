/*
 * XREFs of imp_VfWdfRequestFormatRequestUsingCurrentType @ 0x1C00BEA00
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
