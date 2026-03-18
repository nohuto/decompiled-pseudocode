/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x140698068
 * Callers:
 *     PfSnPrefetchSections @ 0x140697DAC (PfSnPrefetchSections.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x1400EE990 (KeQueryPriorityThread.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall PfSnPrefetchSectionsCleanup(KSPIN_LOCK a1, int a2, unsigned int a3, KSPIN_LOCK a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  _QWORD *p_WorkerRoutine; // rbx
  KSPIN_LOCK SpinLock[6]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset(v4, 0, 48LL * a3);
  memset(SpinLock, 0, sizeof(SpinLock));
  ExInitializePushLock(SpinLock);
  SpinLock[1] = a1;
  LODWORD(SpinLock[4]) = a2;
  SpinLock[2] = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = SpinLock;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = v4;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)SpinLock);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock);
}
