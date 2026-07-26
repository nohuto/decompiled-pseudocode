/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C0057C0C
 * Callers:
 *     ndisMAllocSGListS @ 0x1C004C928 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C00556F0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0056450 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00566E0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0056B70 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0057030 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0057CE0 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057ED0 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00586B0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00588B0 (ndisMSendPacketsToMiniport.c)
 *     ndisMAbortPackets @ 0x1C0061E4C (ndisMAbortPackets.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004E824 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005C4D0 (ndisInvokeNextSendCompleteHandler.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v6; // rax

  v3 = a3;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqd(0x2Cu, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2, a3);
  if ( (v3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)v3 | 0xC0230000;
  v6 = (struct _NET_BUFFER_LIST *)ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( v6 )
  {
    v6->Status = v3;
    ndisInvokeNextSendCompleteHandler(v6, *(void **)(a1 + 2592), *(void (**)(void))(a1 + 2632));
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x2Du, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
}
