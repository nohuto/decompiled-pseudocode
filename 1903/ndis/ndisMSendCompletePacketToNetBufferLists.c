/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C008B1EC
 * Callers:
 *     ndisMAllocSGListS @ 0x1C0079544 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0089BE0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C008A2F0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C008A520 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C008A940 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C008AD90 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C008B270 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C008B410 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C008BA60 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C008BBE0 (ndisMSendPacketsToMiniport.c)
 *     ndisMAbortPackets @ 0x1C009978C (ndisMAbortPackets.c)
 * Callees:
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C007B2F8 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C00901C4 (ndisInvokeNextSendCompleteHandler.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisMSendCompletePacketToNetBufferLists(
        __int64 a1,
        struct _NDIS_PACKET *a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *result; // rax

  v3 = a3;
  if ( (a3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)a3 | 0xC0230000;
  result = (struct _NET_BUFFER_LIST *)ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( result )
  {
    result->Status = v3;
    return (struct _NET_BUFFER_LIST *)ndisInvokeNextSendCompleteHandler(
                                        result,
                                        *(void **)(a1 + 2576),
                                        *(void (**)(void))(a1 + 2616));
  }
  return result;
}
