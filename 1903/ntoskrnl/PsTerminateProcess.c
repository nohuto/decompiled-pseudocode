/*
 * XREFs of PsTerminateProcess @ 0x1406E7FD0
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1402BBF30 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EB524 (PspCallProcessNotifyRoutines.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x1406C8090 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406D3B10 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140848040 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x1408C5984 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x1408C9314 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1408D35A4 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140919D94 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406727B8 (PspTerminateProcess.c)
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
