/*
 * XREFs of __security_check_cookie @ 0x1C00052B0
 * Callers:
 *     ScsiToNVMe @ 0x1C0003140 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     __GSHandlerCheckCommon @ 0x1C000559C (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C0007F40 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C0008D70 (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C0009134 (GetProcessorInformation.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000B968 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000BA8C (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000BD00 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000C25C (NVMeLogTelemetry.c)
 *     FormInquiryStandardData @ 0x1C000EAF0 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C000EE2C (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C000FF48 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0010100 (IoctlStorageStreamsGetParameters.c)
 *     GetRegistrySettings @ 0x1C00191D0 (GetRegistrySettings.c)
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
