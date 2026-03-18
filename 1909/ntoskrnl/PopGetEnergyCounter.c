/*
 * XREFs of PopGetEnergyCounter @ 0x1408A9ED8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 *     PopCaptureSleepStudyStatistics @ 0x1402FBB9C (PopCaptureSleepStudyStatistics.c)
 *     PopMeasureEnergyChange @ 0x1408A9F24 (PopMeasureEnergyChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopGetEnergyCounter(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140443338, 0LL);
  *a1 = xmmword_140443368;
  PopReleaseRwLock((ULONG_PTR)&qword_140443338);
}
