/*
 * XREFs of ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001524C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C001529C (-ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_C.c)
 */

__int64 __fastcall ndisRssV2Initialize(PVOID DeferredContext)
{
  *((_DWORD *)DeferredContext + 1444) = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 241, NotificationEvent, 0);
  *((_BYTE *)DeferredContext + 5808) = 0;
  return ndisRssV2InitializeDpcWorkerContext(
           DeferredContext,
           (struct _NDIS_RSS_DPC_WORKER_CONTEXT **)DeferredContext + 721);
}
