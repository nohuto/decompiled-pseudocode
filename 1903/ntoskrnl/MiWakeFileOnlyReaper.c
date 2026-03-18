/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1402CD6B4
 * Callers:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1402CCE10 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140464731 )
  {
    stru_1404646F0.List.Flink = 0LL;
    stru_1404646F0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_1404646F0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_1404646F0, DelayedWorkQueue);
    byte_140464731 = 1;
  }
}
