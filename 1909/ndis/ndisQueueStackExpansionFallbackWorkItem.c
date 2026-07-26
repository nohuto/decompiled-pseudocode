/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C00905B8
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     NdisFOidRequestComplete @ 0x1C0008850 (NdisFOidRequestComplete.c)
 *     NdisFNetPnPEvent @ 0x1C00141C0 (NdisFNetPnPEvent.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0014C20 (NdisFDevicePnPEventNotify.c)
 *     ndisDoOidRequests @ 0x1C0016AC0 (ndisDoOidRequests.c)
 *     NdisFIndicateStatus @ 0x1C001B7A0 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C008CD4C (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C008D9C0 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 224) )
  {
    ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 72), 1u, &v2);
    *(_BYTE *)(a1 + 224) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), NormalWorkQueue);
  }
}
