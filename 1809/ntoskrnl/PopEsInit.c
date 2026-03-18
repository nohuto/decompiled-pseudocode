/*
 * XREFs of PopEsInit @ 0x1409DECD8
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14071A500 (PopEsWorkItemSchedule.c)
 */

void PopEsInit()
{
  qword_14040FE98 = 0LL;
  PopEsLock = 0LL;
  PopEsWorkItem.Parameter = 0LL;
  PopEsWorkItem.List.Flink = 0LL;
  PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
  PopEsWorkItemSchedule(1);
}
