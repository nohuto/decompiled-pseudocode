/*
 * XREFs of imp_VfWdfRequestChangeTarget @ 0x1C00C2560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestChangeTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfRequestChangeTarget)(
           DriverGlobals,
           Request,
           IoTarget);
}
