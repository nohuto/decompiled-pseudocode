/*
 * XREFs of ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0014CA4
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018688 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018700 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void (__stdcall *__fastcall ndisSwapFilterHandlersForMediaDisconnect(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        struct _NDIS_FILTER_BLOCK *a3))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  __int64 v4; // rsi
  int v6; // edx
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  __int64 (__fastcall *v9)(); // rax
  char v10; // [rsp+30h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      82,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      v10,
      (char)a3);
  }
  if ( a3 )
  {
    a3->XState |= 1u;
    ndisUpdateFilterFakeStatus(a3);
  }
  else
  {
    a1->XState |= 2u;
    ndisUpdateMiniportFakeStatus(a1);
  }
  if ( v4 )
  {
    *(_QWORD *)(v4 + 632) = &ndisFakeFilterReceiveHandler;
  }
  else
  {
    a1->ReceivePathEnabled = 0;
    a1->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
  }
  if ( a3 )
  {
    a3->FilterSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))&ndisFakeFilterSendHandler;
    result = ndisFakeMiniportCancelSendPackets;
    a3->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))ndisFakeMiniportCancelSendPackets;
  }
  else
  {
    OpenQueue = a1->OpenQueue;
    a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMFakeSendNetBufferLists;
    result = ndisFakeMiniportCancelSendPackets;
    a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))ndisFakeMiniportCancelSendPackets;
    a1->SendPathType = NdisFakeSendPath;
    while ( OpenQueue )
    {
      if ( a1->MediaType != NdisMediumWan || (v9 = ndisMFakeWanSend, (a1->Flags & 0x20000) != 0) )
        v9 = ndisMFakeSend;
      OpenQueue->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))v9;
      OpenQueue->CancelSendPacketsHandler = 0LL;
      OpenQueue->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMFakeSendPackets;
      result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeReset;
      OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMFakeReset;
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_RECORDER_SF_qqq(
                                                                                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                                                                                   v6,
                                                                                   13,
                                                                                   83,
                                                                                   (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                                                                                   (char)a1,
                                                                                   v4,
                                                                                   (char)a3);
  }
  return result;
}
