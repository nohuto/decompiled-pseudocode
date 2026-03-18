/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x1402B3384
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x1402B317C (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfCompletionDpcRoutine @ 0x1402B3320 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x1402B3400 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiEpfComplete @ 0x1402B3230 (KiEpfComplete.c)
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
