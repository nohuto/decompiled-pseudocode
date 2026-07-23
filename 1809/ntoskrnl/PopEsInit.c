/*
 * XREFs of PopEsInit @ 0x1409DFCD8
 * Callers:
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14071B780 (PopEsWorkItemSchedule.c)
 */

void PopEsInit()
{
  qword_140410F18 = 0LL;
  PopEsLock = 0LL;
  PopEsWorkItem.Parameter = 0LL;
  PopEsWorkItem.List.Flink = 0LL;
  PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
  PopEsWorkItemSchedule(1);
}
