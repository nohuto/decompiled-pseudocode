/*
 * XREFs of IoThreadToProcess @ 0x14000E240
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     NtQueryInformationThread @ 0x1405E5490 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     AlpcpCreateSecurityContext @ 0x14064B500 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D9AB8 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     DbgkQueueUserExceptionReport @ 0x140849F6C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x14084A1A0 (DbgkUserReportWorkRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14084B148 (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140885460 (NtAlpcImpersonateClientContainerOfPort.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 *     NtSetContextThread @ 0x1408C9DE0 (NtSetContextThread.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
