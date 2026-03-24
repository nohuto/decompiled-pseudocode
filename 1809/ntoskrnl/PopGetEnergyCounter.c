/*
 * XREFs of PopGetEnergyCounter @ 0x14086DB28
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE260 (PdcPoCurrentPdcPhase.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x14086DB74 (PopMeasureEnergyChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140417AC0, 0LL);
  *a1 = xmmword_140417AF0;
  PopReleaseRwLock((ULONG_PTR)&qword_140417AC0);
}
