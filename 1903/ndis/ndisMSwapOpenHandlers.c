/*
 * XREFs of ndisMSwapOpenHandlers @ 0x1C001BD5C
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001295C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0097550 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMReset @ 0x1C009B750 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C009BCCC (ndisMResetMiniportInternal.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018700 (-ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void (__stdcall *__fastcall ndisMSwapOpenHandlers(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  int v4; // edx
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  __int64 (__fastcall *v7)(); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      99,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      a2);
  a1->XState |= a2;
  ndisUpdateMiniportFakeStatus(a1);
  OpenQueue = a1->OpenQueue;
  a1->NextSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisMFakeSendNetBufferLists;
  result = ndisFakeMiniportCancelSendPackets;
  a1->NextCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))ndisFakeMiniportCancelSendPackets;
  a1->SendPathType = NdisFakeSendPath;
  while ( OpenQueue )
  {
    if ( a1->MediaType != NdisMediumWan || (v7 = ndisMFakeWanSend, (a1->Flags & 0x20000) != 0) )
      v7 = ndisMFakeSend;
    OpenQueue->SendHandler = (int (__fastcall *)(void *, _NDIS_PACKET *))v7;
    OpenQueue->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMFakeSendPackets;
    result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeReset;
    OpenQueue->ResetHandler = (int (__fastcall *)(void *))ndisMFakeReset;
    if ( (a1->XState & 0xFD) != 0 )
    {
      OpenQueue->RequestHandler = (int (__fastcall *)(void *, _NDIS_REQUEST *))ndisMFakeRequest;
      OpenQueue->OidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMFakeOidRequest;
      result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeDirectOidRequest;
      OpenQueue->DirectOidRequestHandler = (int (__fastcall *)(void *, _NDIS_OID_REQUEST *))ndisMFakeDirectOidRequest;
    }
    OpenQueue->CancelSendPacketsHandler = 0LL;
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_RECORDER_SF_q(
                                                                                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                                                                                   v4,
                                                                                   13,
                                                                                   100,
                                                                                   (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                                                                                   (char)a1);
  }
  return result;
}
