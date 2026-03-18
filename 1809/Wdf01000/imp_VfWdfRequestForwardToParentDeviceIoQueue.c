/*
 * XREFs of imp_VfWdfRequestForwardToParentDeviceIoQueue @ 0x1C00BEA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestForwardToParentDeviceIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFQUEUE__ *ParentDeviceQueue,
        _WDF_REQUEST_FORWARD_OPTIONS *ForwardOptions)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFQUEUE__ *, _WDF_REQUEST_FORWARD_OPTIONS *))WdfVersion.Functions.pfnWdfRequestForwardToParentDeviceIoQueue)(
           DriverGlobals,
           Request,
           ParentDeviceQueue,
           ForwardOptions);
}
