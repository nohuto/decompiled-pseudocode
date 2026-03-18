/*
 * XREFs of imp_VfWdfUsbTargetPipeResetSynchronously @ 0x1C00C3700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeResetSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *, _WDF_REQUEST_SEND_OPTIONS *))WdfVersion.Functions.pfnWdfUsbTargetPipeResetSynchronously)(
           DriverGlobals,
           Pipe,
           Request,
           RequestOptions);
}
