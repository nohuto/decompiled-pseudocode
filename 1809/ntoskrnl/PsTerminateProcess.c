/*
 * XREFs of PsTerminateProcess @ 0x1406CAB74
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x1402A4D90 (MiReAcquireCommitFailWorker.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F5C14 (PspCallProcessNotifyRoutines.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     KiSchedulerApcTerminate @ 0x140677960 (KiSchedulerApcTerminate.c)
 *     PspProcessClose @ 0x1406A4FD0 (PspProcessClose.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x14080F9A0 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x14084D104 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14088C0B4 (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1408968DC (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x1408DCE84 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x140678A3C (PspTerminateProcess.c)
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
