/*
 * XREFs of ?ndisSetupMiniportProtocolHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002492C
 * Callers:
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023FA0 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisSetupMiniportProtocolHandlers(
        struct _NDIS_OPEN_BLOCK *a1,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned __int8 MajorNdisVersion; // bp
  unsigned __int8 v5; // r14
  struct _NDIS_PROTOCOL_BLOCK *v6; // rsi
  void *ProtocolBindingContext; // rcx
  char v9; // [rsp+28h] [rbp-30h]

  MajorNdisVersion = a2->MajorNdisVersion;
  v5 = a3->MajorNdisVersion;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      152,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      v9,
      (char)a3,
      (char)a1);
  }
  if ( MajorNdisVersion < 6u )
  {
    a1->SendCompleteNetBufferListsContext = a1;
    a1->ProtSendNetBufferListsComplete = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int))&ndisMSendNetBufferListsCompleteToNdisPackets;
  }
  else
  {
    if ( v5 < 6u )
    {
      if ( !a3->Miniport5InNdis6Mode )
      {
        a3->OutstandingReceives = 0;
        a3->Miniport5InNdis6Mode = 1;
      }
      a1->SendCompleteNdisPacketContext = a3;
      a1->ProtSendNetBufferListsComplete = v6->SendNetBufferListsCompleteHandler;
      a1->SendCompleteNetBufferListsContext = a1->ProtocolBindingContext;
      if ( (a3->Flags & 0x20000000) != 0 )
        a3->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
      a3->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
      a3->SynchronousReturnPacketHandler = (void (__fastcall *)(void *, _NDIS_PACKET *))ndisSynchReturnPacketsForTranslation;
      a3->EthRxIndicateHandler = (void (__fastcall *)(_X_FILTER *, void *, char *, void *, unsigned int, void *, unsigned int, unsigned int))&EthIndicateReceive;
      a3->SynchronousReturnPacketContext = a3;
      ProtocolBindingContext = a1->ProtocolBindingContext;
    }
    else
    {
      ProtocolBindingContext = a1->ProtocolBindingContext;
      a1->ProtSendNetBufferListsComplete = v6->SendNetBufferListsCompleteHandler;
      a1->SendCompleteNetBufferListsContext = ProtocolBindingContext;
    }
    a1->ReceiveNetBufferLists = v6->ReceiveNetBufferListsHandler;
    a1->ReceiveNetBufferListsContext = ProtocolBindingContext;
    a3->Ndis6ProtocolsBound = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      153,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)v6,
      (char)a3,
      (char)a1);
  }
}
