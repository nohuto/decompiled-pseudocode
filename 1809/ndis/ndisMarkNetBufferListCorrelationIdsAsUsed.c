/*
 * XREFs of ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064
 * Callers:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001720 (ndisMSendCompleteNetBufferListsInternal.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001C90 (NdisMSendNetBufferListsComplete.c)
 *     NdisReturnNetBufferLists @ 0x1C00036A0 (NdisReturnNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C00057B0 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1C0007070 (NdisFReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0008370 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0055494 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008 (ndisMSendNetBufferListsCompleteInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ndisMarkNetBufferListCorrelationIdsAsUsed(_QWORD *a1)
{
  unsigned __int64 result; // rax

  if ( byte_1C009FE30 )
  {
    while ( a1 )
    {
      a1[31] = 0LL;
      a1 = (_QWORD *)*a1;
    }
  }
  else
  {
    while ( a1 )
    {
      result = 0x8000000000000000uLL;
      a1[31] |= 0x8000000000000000uLL;
      a1 = (_QWORD *)*a1;
    }
  }
  return result;
}
