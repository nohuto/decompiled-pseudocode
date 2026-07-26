/*
 * XREFs of ?ndisRssV2InitializeDpcWorkerContext@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C003EC5C
 * Callers:
 *     ?ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003EC0C (-ndisRssV2Initialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisRssV2InitializeDpcWorkerContext(PVOID DeferredContext, struct _NDIS_RSS_DPC_WORKER_CONTEXT **a2)
{
  unsigned int v4; // ebx
  struct _KDPC *PoolWithTag; // rax
  struct _NDIS_RSS_DPC_WORKER_CONTEXT *v6; // rdi

  v4 = 0;
  *a2 = 0LL;
  PoolWithTag = (struct _KDPC *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0xC88uLL, 0x7372444Eu);
  v6 = (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeDpc(PoolWithTag, ndisEmulateRSSv1Dpc, DeferredContext);
    KeSetImportanceDpc(&v6->Dpc, MediumHighImportance);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
