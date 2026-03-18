/*
 * XREFs of imp_VfWdfRequestGetInformation @ 0x1C00BEAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall imp_VfWdfRequestGetInformation(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetInformation(DriverGlobals, Request);
}
