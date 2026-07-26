/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C00112C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C007AD6C (ndisGenerateNetBufferListCorrelationIds.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AE58 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C00A9EF8 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     PktMonClientNblLogNdis @ 0x1C00C98FC (PktMonClientNblLogNdis.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax

  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferLists,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)NdisFilterHandle,
      *((enum _NDIS_MEDIUM *)NdisFilterHandle + 84));
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(NetBufferLists, NumberOfNetBufferLists);
  if ( byte_1C00E5E20 )
  {
    v11 = *((_QWORD *)NdisFilterHandle + 105);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 12) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 832, NetBufferLists, *(_QWORD *)&PortNumber, 1LL);
    }
  }
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))NdisFilterHandle + 79))(
    NdisFilterHandle,
    NetBufferLists,
    PortNumber,
    NumberOfNetBufferLists,
    ReceiveFlags);
  if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C00E5E20) && (ReceiveFlags & 2) != 0 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists, v9, v10);
}
