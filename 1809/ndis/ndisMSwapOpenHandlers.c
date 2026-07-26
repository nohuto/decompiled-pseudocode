/*
 * XREFs of ndisMSwapOpenHandlers @ 0x1C001C6F8
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010508 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     ndisMProcessResetRequested @ 0x1C00635E8 (ndisMProcessResetRequested.c)
 *     ndisMReset @ 0x1C0063990 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C0063F8C (ndisMResetMiniportInternal.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 * Callees:
 *     ndisUpdateMiniportFakeStatus @ 0x1C0025384 (ndisUpdateMiniportFakeStatus.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void (__stdcall *__fastcall ndisMSwapOpenHandlers(
        __int64 a1,
        unsigned __int8 a2))(NDIS_HANDLE NdisAdapterHandle, ULONG Length, PVOID VirtualAddress, NDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  _QWORD *v4; // rcx
  void (__stdcall *result)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  __int64 (__fastcall *v6)(); // rax

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(101LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  *(_BYTE *)(a1 + 930) |= a2;
  ndisUpdateMiniportFakeStatus(a1);
  v4 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 656) = ndisMFakeSendNetBufferLists;
  result = ndisFakeMiniportCancelSendPackets;
  *(_QWORD *)(a1 + 184) = ndisFakeMiniportCancelSendPackets;
  *(_DWORD *)(a1 + 2684) = 3;
  while ( v4 )
  {
    if ( *(_DWORD *)(a1 + 464) != 3 || (v6 = ndisMFakeWanSend, (*(_DWORD *)(a1 + 120) & 0x20000) != 0) )
      v6 = ndisMFakeSend;
    v4[12] = v6;
    v4[21] = ndisMFakeSendPackets;
    result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeReset;
    v4[22] = ndisMFakeReset;
    if ( (*(_BYTE *)(a1 + 930) & 0xFD) != 0 )
    {
      v4[23] = ndisMFakeRequest;
      v4[24] = ndisMFakeOidRequest;
      result = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisMFakeDirectOidRequest;
      v4[91] = ndisMFakeDirectOidRequest;
    }
    v4[37] = 0LL;
    v4 = (_QWORD *)v4[49];
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    return (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))WPP_SF_q(
                                                                                   102LL,
                                                                                   &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
                                                                                   a1);
  return result;
}
