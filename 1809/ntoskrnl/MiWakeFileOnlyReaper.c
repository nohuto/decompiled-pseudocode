/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1402B745C
 * Callers:
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1402B6D7C (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

LONG MiWakeFileOnlyReaper()
{
  LONG result; // eax

  if ( !byte_140439E28 )
  {
    stru_140439DF0.List.Flink = 0LL;
    stru_140439DF0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140439DF0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140439DF0, DelayedWorkQueue);
    byte_140439E28 = 1;
    return KeResetEvent(&stru_140439E10);
  }
  return result;
}
