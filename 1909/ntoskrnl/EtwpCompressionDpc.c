/*
 * XREFs of EtwpCompressionDpc @ 0x140333050
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140003B60 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D3DA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

void __fastcall EtwpCompressionDpc(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExAcquireRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*((_QWORD *)a2[33].Parameter + 56) + 8LL * LODWORD(a2->List.Flink)),
    1u);
  ExQueueWorkItem(a2 + 34, DelayedWorkQueue);
}
