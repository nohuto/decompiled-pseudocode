/*
 * XREFs of EtwpCompressionDpc @ 0x1403335F0
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140003ADC (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a2[34].Parameter + 56) + 8LL * LODWORD(a2->List.Flink)),
    1u);
  ExQueueWorkItem(a2 + 35, DelayedWorkQueue);
}
