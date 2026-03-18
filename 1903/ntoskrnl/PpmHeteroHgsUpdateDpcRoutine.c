/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x140300A20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CriticalWorkQueue);
}
