/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x1402E3C60
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CriticalWorkQueue);
}
