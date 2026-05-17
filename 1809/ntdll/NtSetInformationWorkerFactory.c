/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1800A35D0
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     TpAdjustBindingCount @ 0x18002DA74 (TpAdjustBindingCount.c)
 *     TpCallbackMayRunLong @ 0x1800304C0 (TpCallbackMayRunLong.c)
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 *     TpSetPoolMaxThreads @ 0x180031670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180031710 (TpSetPoolMaxThreadsSoftLimit.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180031860 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpSetPoolStackInformation @ 0x180032BC0 (TpSetPoolStackInformation.c)
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     TpCallbackIndependent @ 0x18006CA90 (TpCallbackIndependent.c)
 *     TpSetPoolMinThreads @ 0x180085300 (TpSetPoolMinThreads.c)
 *     TpSetPoolThreadBasePriority @ 0x180088880 (TpSetPoolThreadBasePriority.c)
 *     TppAdjustRunningThreadGoal @ 0x180110414 (TppAdjustRunningThreadGoal.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationWorkerFactory()
{
  __int64 result; // rax

  result = 408LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
