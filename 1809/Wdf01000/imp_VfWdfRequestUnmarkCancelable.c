/*
 * XREFs of imp_VfWdfRequestUnmarkCancelable @ 0x1C00BEE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestUnmarkCancelable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestUnmarkCancelable)(
           DriverGlobals,
           Request);
}
