/*
 * XREFs of ExpSvmDpcRoutine @ 0x14033DF20
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void __fastcall ExpSvmDpcRoutine(__int64 a1, unsigned int a2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpSvmWorkQueues + 104LL * a2), HyperCriticalWorkQueue);
}
