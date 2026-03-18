/*
 * XREFs of imp_VfWdfRequestIsFrom32BitProcess @ 0x1C00BEB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestIsFrom32BitProcess(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestIsFrom32BitProcess)(
           DriverGlobals,
           Request);
}
