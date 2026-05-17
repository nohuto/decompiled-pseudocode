/*
 * XREFs of NtQuerySystemInformation @ 0x18009D550
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpStartUmLogger @ 0x1800059B8 (EtwpStartUmLogger.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpHpEnvQueryProcessorCount @ 0x18004CD44 (RtlpHpEnvQueryProcessorCount.c)
 *     RtlSystemTimeToLocalTime @ 0x18007AE90 (RtlSystemTimeToLocalTime.c)
 *     TpInitializePackage @ 0x18007CAFC (TpInitializePackage.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008ADA0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CBD98 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CFF40 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800D5E40 (LdrInitializeMrdata.c)
 *     SendMessageToWERService @ 0x1800DC3EC (SendMessageToWERService.c)
 *     RtlResetStackOverflow @ 0x1800DD728 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800E2300 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800E4310 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F4200 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1800F57E8 (RtlpInitializeNonVolatileFlush.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F7B4C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlHpInitializeHeapManager @ 0x18010722C (RtlHpInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x180107870 (RtlpInitializeLowFragHeapManager.c)
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
