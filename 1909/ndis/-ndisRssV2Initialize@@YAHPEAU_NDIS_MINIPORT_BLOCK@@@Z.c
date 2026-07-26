/*
 * XREFs of ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003EBFC
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C003EC4C (-ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_C.c)
 */

__int64 __fastcall ndisRssV2Initialize(char *DeferredContext)
{
  *((_DWORD *)DeferredContext + 1428) = 0;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 5720), NotificationEvent, 0);
  DeferredContext[5744] = 0;
  return ndisRssV2InitializeDpcWorkerContext(
           DeferredContext,
           (struct _NDIS_RSS_DPC_WORKER_CONTEXT **)DeferredContext + 713);
}
