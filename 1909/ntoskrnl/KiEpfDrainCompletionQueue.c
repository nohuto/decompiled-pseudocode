/*
 * XREFs of KiEpfDrainCompletionQueue @ 0x1402B30E4
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x1402B2EDC (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfCompletionDpcRoutine @ 0x1402B3080 (KiEpfCompletionDpcRoutine.c)
 *     KiEpfHandleNotification @ 0x1402B3160 (KiEpfHandleNotification.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiEpfComplete @ 0x1402B2F90 (KiEpfComplete.c)
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
