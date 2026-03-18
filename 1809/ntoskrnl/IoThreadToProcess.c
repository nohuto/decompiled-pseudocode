/*
 * XREFs of IoThreadToProcess @ 0x1400ACF00
 * Callers:
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     AlpcpCreateSecurityContext @ 0x14061801C (AlpcpCreateSecurityContext.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     AlpcpCaptureAttributes @ 0x1406363E0 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x14064A580 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B5240 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     DbgkQueueUserExceptionReport @ 0x1408106DC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x140811740 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140849F40 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x14084BEC4 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x14088B910 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
