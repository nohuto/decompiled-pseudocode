/*
 * XREFs of PktMonClientNblDropNdis @ 0x1C0026AD8
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002160 (ndisMTopReceiveNetBufferLists.c)
 *     ndisSortNetBufferLists @ 0x1C0002960 (ndisSortNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C0006950 (ndisFilterSendNetBufferLists.c)
 *     ndisFilterIndicateReceiveNetBufferLists @ 0x1C0007390 (ndisFilterIndicateReceiveNetBufferLists.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C000FE40 (ndisInvokeNextReceiveHandler.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0023280 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMFakeSendNetBufferLists @ 0x1C0023E20 (ndisMFakeSendNetBufferLists.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0059B2C (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFakeFilterReceiveHandler @ 0x1C005BEE0 (ndisFakeFilterReceiveHandler.c)
 *     ndisFakeFilterSendHandler @ 0x1C005BFA0 (ndisFakeFilterSendHandler.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C006C844 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006D9F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMDummyReceiveNetBufferLists @ 0x1C006DD94 (ndisMDummyReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006E210 (ndisMIndicateSplitNblChain.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072D4C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0072F18 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0073304 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C0075358 (ndisRequestPowerResume.c)
 * Callees:
 *     NdisStatusToDropReason @ 0x1C0083CB8 (NdisStatusToDropReason.c)
 *     PktMonClientNblDrop @ 0x1C0083E9C (PktMonClientNblDrop.c)
 */

void __fastcall PktMonClientNblDropNdis(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // r9d
  __int64 v6; // r10
  int v7; // r11d

  if ( byte_1C009FE30 )
  {
    if ( (*(_DWORD *)(a1 + 52) & 2) != 0 )
    {
      NdisStatusToDropReason(a5);
      PktMonClientNblDrop(v6, v7, *(_DWORD *)(v6 + 48), v5);
    }
  }
}
