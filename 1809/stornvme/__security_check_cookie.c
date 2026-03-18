/*
 * XREFs of __security_check_cookie @ 0x1C0006450
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     FormInquiryStandardData @ 0x1C00058C0 (FormInquiryStandardData.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0007308 (NVMeReenumerateNameSpaceRescan.c)
 *     __GSHandlerCheckCommon @ 0x1C0007BAC (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C000BABC (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C000BE24 (GetProcessorInformation.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000E3C4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000E4E8 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000E75C (NVMeInitStreams.c)
 *     GetStreamId @ 0x1C00104B0 (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00112E4 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0011488 (IoctlStorageStreamsGetParameters.c)
 *     NVMeLogTelemetry @ 0x1C001601C (NVMeLogTelemetry.c)
 *     GetRegistrySettings @ 0x1C001829C (GetRegistrySettings.c)
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
