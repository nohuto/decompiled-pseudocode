/*
 * XREFs of imp_VfWdfRequestSetInformation @ 0x1C00BEE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestSetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 Information)
{
  WdfVersion.Functions.pfnWdfRequestSetInformation(DriverGlobals, Request, Information);
}
