/*
 * XREFs of NtQuerySystemInformation @ 0x1800A09C0
 * Callers:
 *     EtwpStartUmLogger @ 0x18004FFC8 (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     TpInitializePackage @ 0x180059DC0 (TpInitializePackage.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlSystemTimeToLocalTime @ 0x180081440 (RtlSystemTimeToLocalTime.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008E194 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x18009F75C (RtlpHpEnvQueryProcessorCount.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CD524 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D1770 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800D7B40 (LdrInitializeMrdata.c)
 *     SendMessageToWERService @ 0x1800DE71C (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800DFABC (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800E4F90 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E70D0 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F6E00 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800F7BA8 (RtlpInitializeNonVolatileFlush.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F9E60 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlHpInitializeHeapManager @ 0x180109D7C (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010A3CC (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
