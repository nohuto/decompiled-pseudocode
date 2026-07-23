/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A01A0
 * Callers:
 *     TpAdjustBindingCount @ 0x180031B40 (TpAdjustBindingCount.c)
 *     TpCallbackIndependent @ 0x1800331B0 (TpCallbackIndependent.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     TpTrimPools @ 0x180060860 (TpTrimPools.c)
 *     TpSetPoolMaxThreads @ 0x180062EC0 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062F30 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x180062FD4 (TpAllocPoolInternal.c)
 *     TpCallbackMayRunLong @ 0x180070840 (TpCallbackMayRunLong.c)
 *     TpSetPoolStackInformation @ 0x18007EE40 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180080410 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x180081F40 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180084F20 (TpSetPoolThreadBasePriority.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EBA0 (TpSetPoolThreadCpuSets.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18010EC4C (TppAdjustRunningThreadGoalWithLock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  NTSTATUS result; // eax

  result = 409;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
