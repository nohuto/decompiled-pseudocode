/*
 * XREFs of __security_check_cookie @ 0x1C0004D50
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     __GSHandlerCheckCommon @ 0x1C000503C (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C0008100 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C0008F20 (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C00092E4 (GetProcessorInformation.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000BA58 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000BB7C (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000BDF0 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000C34C (NVMeLogTelemetry.c)
 *     FormInquiryStandardData @ 0x1C000EBC0 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C000EEFC (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0010018 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C00101D0 (IoctlStorageStreamsGetParameters.c)
 *     GetRegistrySettings @ 0x1C0019280 (GetRegistrySettings.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
