/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1402B716C
 * Callers:
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1402B6A8C (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

LONG MiWakeFileOnlyReaper()
{
  LONG result; // eax

  if ( !byte_140438D68 )
  {
    stru_140438D30.List.Flink = 0LL;
    stru_140438D30.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140438D30.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140438D30, DelayedWorkQueue);
    byte_140438D68 = 1;
    return KeResetEvent(&stru_140438D50);
  }
  return result;
}
