/*
 * XREFs of PsTerminateProcess @ 0x1406C98D4
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1402A4BA0 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F4C14 (PspCallProcessNotifyRoutines.c)
 *     PspRemoveProcessFromJobChain @ 0x140600410 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     KiSchedulerApcTerminate @ 0x1406767A0 (KiSchedulerApcTerminate.c)
 *     PspProcessClose @ 0x1406A3D30 (PspProcessClose.c)
 *     PsCreateMinimalProcess @ 0x14075752C (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x14080E7A0 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x14084BEA4 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x1408875F4 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14088AE54 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14088AFA4 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x14089567C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1408DBBC4 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140915030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x14067787C (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (struct _EX_RUNDOWN_REF *)CurrentThread, a2, 1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
