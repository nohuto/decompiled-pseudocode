/*
 * XREFs of PoNotifyMediaBuffering @ 0x14013F1E0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1400E17E0 (KeQueryPriorityThread.c)
 */

void __fastcall PoNotifyMediaBuffering(char a1)
{
  char v2; // bl
  KPRIORITY PriorityThread; // eax
  int v4; // edx
  int v5; // eax

  KxAcquireSpinLock(&PpmMediaBufferingWork);
  v2 = byte_1404198A8;
  if ( !byte_1404198A8 )
    byte_1404198A8 = 1;
  byte_1404198A9 = a1;
  KxReleaseSpinLock(&PpmMediaBufferingWork);
  if ( !v2 )
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
    ExQueueWorkItem(&stru_1404198B0, (WORK_QUEUE_TYPE)(v4 + 32));
  }
}
