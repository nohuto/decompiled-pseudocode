/*
 * XREFs of imp_VfWdfRequestRetrieveInputMemory @ 0x1C00C2CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestRetrieveInputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfRequestRetrieveInputMemory)(
           DriverGlobals,
           Request,
           Memory);
}
