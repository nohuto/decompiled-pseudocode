/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C005C6F4
 * Callers:
 *     NdisFOidRequestComplete @ 0x1C0007B50 (NdisFOidRequestComplete.c)
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     NdisFNetPnPEvent @ 0x1C0010620 (NdisFNetPnPEvent.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0010F20 (NdisFDevicePnPEventNotify.c)
 *     ndisDoOidRequests @ 0x1C0020D80 (ndisDoOidRequests.c)
 *     NdisFIndicateStatus @ 0x1C0023CC0 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0059DC0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C005A960 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 232) )
  {
    ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 72), 1u, &v2);
    *(_BYTE *)(a1 + 232) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 200), NormalWorkQueue);
  }
}
