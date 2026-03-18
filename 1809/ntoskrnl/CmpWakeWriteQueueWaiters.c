/*
 * XREFs of CmpWakeWriteQueueWaiters @ 0x1405B4D38
 * Callers:
 *     CmpFlushHive @ 0x1405B2F54 (CmpFlushHive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140736470 (CmpFinishBeingActiveFlusherAndReconciler.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall CmpWakeWriteQueueWaiters(struct _KEVENT *a1, LONG a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  LONG result; // eax

  if ( a1 )
  {
    do
    {
      Flink = a1[1].Header.WaitListHead.Flink;
      a1[1].Header.LockNV = a2;
      result = KeSetEvent(a1, 0, 0);
      a1 = (struct _KEVENT *)Flink;
    }
    while ( Flink );
  }
  return result;
}
