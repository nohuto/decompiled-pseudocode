/*
 * XREFs of IoThreadToProcess @ 0x1400ACE60
 * Callers:
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     AlpcpCreateSecurityContext @ 0x14061901C (AlpcpCreateSecurityContext.c)
 *     PspSetContextThreadInternal @ 0x140621A30 (PspSetContextThreadInternal.c)
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B64C0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     DbgkQueueUserExceptionReport @ 0x1408118BC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140812920 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14084B180 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x14084D104 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x14088CB50 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
