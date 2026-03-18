/*
 * XREFs of MiWakeFileOnlyReaper @ 0x1402CD414
 * Callers:
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiQueueExtentPfnDeletion @ 0x1402CCB70 (MiQueueExtentPfnDeletion.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void MiWakeFileOnlyReaper()
{
  if ( !byte_140464431 )
  {
    stru_1404643F0.List.Flink = 0LL;
    stru_1404643F0.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_1404643F0.Parameter = (void *)1;
    ExQueueWorkItem(&stru_1404643F0, DelayedWorkQueue);
    byte_140464431 = 1;
  }
}
