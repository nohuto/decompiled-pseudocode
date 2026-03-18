/*
 * XREFs of PopGetEnergyCounter @ 0x14086DB48
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE160 (PdcPoCurrentPdcPhase.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x14086DB94 (PopMeasureEnergyChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1404179E0, 0LL);
  *a1 = xmmword_140417A10;
  PopReleaseRwLock((ULONG_PTR)&qword_1404179E0);
}
