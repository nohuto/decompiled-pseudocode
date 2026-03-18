/*
 * XREFs of PoNotifyMediaBuffering @ 0x140143320
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x14009AD40 (KeQueryPriorityThread.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  int v4; // edx
  int v5; // eax

  v2 = 0;
  KxAcquireSpinLock(&PpmMediaBufferingWork);
  if ( !byte_1404441C8 )
  {
    v2 = 1;
    byte_1404441C8 = 1;
  }
  byte_1404441C9 = a1;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( v2 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    v4 = PriorityThread + 1;
    if ( PriorityThread >= 31 )
      v4 = PriorityThread;
    if ( !a1 )
    {
      v5 = 16;
      if ( v4 > 16 )
        v5 = v4;
      v4 = v5;
    }
    ExQueueWorkItem(&WorkItem, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
