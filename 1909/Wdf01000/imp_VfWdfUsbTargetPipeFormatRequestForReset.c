/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForReset @ 0x1C00C35D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForReset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForReset)(
           DriverGlobals,
           Pipe,
           Request);
}
