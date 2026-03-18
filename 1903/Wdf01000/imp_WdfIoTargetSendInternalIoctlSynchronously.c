/*
 * XREFs of imp_WdfIoTargetSendInternalIoctlSynchronously @ 0x1C00666D0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetSendIoctl @ 0x1C000EA98 (FxIoTargetSendIoctl.c)
 */

__int64 __fastcall imp_WdfIoTargetSendInternalIoctlSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  return FxIoTargetSendIoctl(
           (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
           IoTarget,
           Request,
           Ioctl,
           1u,
           InputBuffer,
           OutputBuffer,
           RequestOptions,
           BytesReturned);
}
