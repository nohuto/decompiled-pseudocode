/*
 * XREFs of ZwSetInformationWorkerFactory @ 0x18009F9F0
 * Callers:
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     TpCallbackIndependent @ 0x1800331B0 (TpCallbackIndependent.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     TpTrimPools @ 0x1800607C0 (TpTrimPools.c)
 *     TpSetPoolMaxThreads @ 0x180062E20 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180062E90 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     sub_180062F34 @ 0x180062F34 (sub_180062F34.c)
 *     TpCallbackMayRunLong @ 0x1800705F0 (TpCallbackMayRunLong.c)
 *     TpSetPoolStackInformation @ 0x18007E7A0 (TpSetPoolStackInformation.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x18007FD70 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolMinThreads @ 0x1800818A0 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180084880 (TpSetPoolThreadBasePriority.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EA70 (TpSetPoolThreadCpuSets.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationWorkerFactory(
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
