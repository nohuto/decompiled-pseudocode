/*
 * XREFs of PsTerminateProcess @ 0x1406E90D0
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1402BBC90 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EBCF4 (PspCallProcessNotifyRoutines.c)
 *     PspRemoveProcessFromJobChain @ 0x140614EA4 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x1406C63C0 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406D2E00 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140847740 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x140886BD0 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x1408C8BF4 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1408D2EA4 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1409197F4 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x140677ECC (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
