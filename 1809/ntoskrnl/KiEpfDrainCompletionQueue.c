/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x14029C044
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x14029BE38 (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfCompletionDpcRoutine @ 0x14029BFE0 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x14029C0C0 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiEpfComplete @ 0x14029BEEC (KiEpfComplete.c)
 */

void KiEpfDrainCompletionQueue()
{
  unsigned __int64 i; // rdi
  __int64 v1; // rax
  char v2; // bl
  unsigned __int64 v3; // [rsp+30h] [rbp+8h]

  if ( KiEpfCompletionQueue )
  {
    for ( i = v3; ; KiEpfComplete(i) )
    {
      KxAcquireSpinLock(&KiEpfCompletionQueueSpinLock);
      v1 = *(_QWORD *)KiEpfCompletionQueue;
      if ( *(_QWORD *)KiEpfCompletionQueue == *(_QWORD *)(KiEpfCompletionQueue + 8) )
      {
        v2 = 0;
      }
      else
      {
        i = *(_QWORD *)(KiEpfCompletionQueue + 8 * v1 + 16);
        v2 = 1;
        *(_QWORD *)KiEpfCompletionQueue = (v1 + 1) % (unsigned __int64)(unsigned int)KiEpfCompletionQueueSize;
      }
      KxReleaseSpinLock(&KiEpfCompletionQueueSpinLock);
      if ( !v2 )
        break;
    }
  }
}
