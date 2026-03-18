/*
 * XREFs of imp_VfWdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C00BD7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoTargetFormatRequestForInternalIoctlOthers(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int IoctlCode,
        WDFMEMORY__ *OtherArg1,
        _WDFMEMORY_OFFSET *OtherArg1Offset,
        WDFMEMORY__ *OtherArg2,
        _WDFMEMORY_OFFSET *OtherArg2Offset,
        WDFMEMORY__ *OtherArg4,
        _WDFMEMORY_OFFSET *OtherArg4Offset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, _QWORD, WDFMEMORY__ *, _WDFMEMORY_OFFSET *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *))WdfVersion.Functions.pfnWdfIoTargetFormatRequestForInternalIoctlOthers)(
           DriverGlobals,
           IoTarget,
           Request,
           IoctlCode,
           OtherArg1,
           OtherArg1Offset,
           OtherArg2,
           OtherArg2Offset,
           OtherArg4,
           OtherArg4Offset);
}
