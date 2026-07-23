/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x140934DD4
 * Callers:
 *     ViPendingDelayCompletion @ 0x140934C68 (ViPendingDelayCompletion.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x1400E17E0 (KeQueryPriorityThread.c)
 *     ViPendingTryReserveWorker @ 0x14030AF20 (ViPendingTryReserveWorker.c)
 */

__int64 __fastcall ViPendingQueuePassiveLevelCompletion(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  KPRIORITY v4; // edi
  unsigned int v5; // eax
  __int64 v7; // rbx

  if ( !ViPendingWorkersCount )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v4 = PriorityThread;
  --CurrentThread->KernelApcDisable;
  v5 = ViPendingTryReserveWorker(a1);
  if ( v5 == -1 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v7 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v7), v4);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v7 + 16), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 1LL;
}
