/*
 * XREFs of PktMonClientNblDropNdis @ 0x1C00C98AC
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C000AE30 (ndisMTopReceiveNetBufferLists.c)
 *     ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C000B7D0 (-ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 *     ndisFilterSendNetBufferLists @ 0x1C000E550 (ndisFilterSendNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C000E7A0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMFakeSendNetBufferLists @ 0x1C0017340 (ndisMFakeSendNetBufferLists.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C00210F0 (ndisInvokeNextReceiveHandler.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0038700 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C00407EC (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFakeFilterReceiveHandler @ 0x1C008F4F0 (ndisFakeFilterReceiveHandler.c)
 *     ndisFakeFilterSendHandler @ 0x1C008F5B0 (ndisFakeFilterSendHandler.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AC650 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z @ 0x1C00AD4A4 (-ndisMIndicateSplitNblChain@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKKK@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00AE630 (ndisMDispatchReceiveNetBufferLists.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B62CC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B64A0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B6AA8 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C00B8DE0 (ndisRequestPowerResume.c)
 * Callees:
 *     NdisStatusToDropReason @ 0x1C00C95FC (NdisStatusToDropReason.c)
 *     PktMonClientNblDrop @ 0x1C00C97A4 (PktMonClientNblDrop.c)
 */

void __fastcall PktMonClientNblDropNdis(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // eax
  __int64 v7; // r9
  __int64 *v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+20h] [rbp-28h]

  if ( byte_1C00E5E20 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 2) != 0 )
    {
      v6 = NdisStatusToDropReason(a5);
      PktMonClientNblDrop(v8, v9, *((_DWORD *)v8 + 2), v7, v10, v7, v6, a6);
    }
  }
}
