/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x1409733F4
 * Callers:
 *     ViPendingDelayCompletion @ 0x140973288 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeQueryPriorityThread @ 0x14009AD40 (KeQueryPriorityThread.c)
 *     ViPendingTryReserveWorker @ 0x140328A20 (ViPendingTryReserveWorker.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v7 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v7), v4);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v7 + 16), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 1LL;
}
