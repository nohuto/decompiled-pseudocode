/*
 * XREFs of IopErrorLogDpc @ 0x14029B660
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopErrorLogDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  if ( Dpc )
    ExFreePoolWithTag(Dpc, 0);
  IopErrorLogWorkItem.Parameter = 0LL;
  IopErrorLogWorkItem.List.Flink = 0LL;
  IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
  ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
}
