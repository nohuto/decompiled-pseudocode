/*
 * XREFs of ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AC88
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C000A960 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C000AD70 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C000BB30 (NdisMSendNetBufferListsComplete.c)
 *     NdisReturnNetBufferLists @ 0x1C000D590 (NdisReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000E210 (NdisFSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C0010740 (NdisFReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C00112C0 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038710 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC480 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD2D4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE460 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AEFB8 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ndisMarkNetBufferListCorrelationIdsAsUsed(_QWORD *a1)
{
  unsigned __int64 result; // rax

  if ( a1 )
  {
    if ( byte_1C00E5E20 )
    {
      do
      {
        a1[31] = 0LL;
        a1 = (_QWORD *)*a1;
      }
      while ( a1 );
    }
    else
    {
      do
      {
        result = 0x8000000000000000uLL;
        a1[31] |= 0x8000000000000000uLL;
        a1 = (_QWORD *)*a1;
      }
      while ( a1 );
    }
  }
  return result;
}
