/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C0008370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C004DF78 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C006A964 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
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
  __int64 v11; // r9
  __int64 v12; // rax

  if ( (*((_DWORD *)NdisFilterHandle + 14) & 0x200) != 0 )
    ndisNblVerifyRxIndication(
      (ULONG_PTR)NetBufferLists,
      PortNumber,
      NumberOfNetBufferLists,
      ReceiveFlags,
      (const struct _NDIS_OBJECT_HEADER *)NdisFilterHandle,
      *((enum _NDIS_MEDIUM *)NdisFilterHandle + 86));
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(NetBufferLists, NumberOfNetBufferLists);
  if ( byte_1C009FE30 )
  {
    v12 = *((_QWORD *)NdisFilterHandle + 115);
    if ( v12 )
    {
      if ( (*(_DWORD *)(v12 + 52) & 1) != 0 )
        PktMonClientNblLogNdis((char *)NdisFilterHandle + 896, NetBufferLists, *(_QWORD *)&PortNumber, 1LL);
    }
  }
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))NdisFilterHandle + 80))(
    NdisFilterHandle,
    NetBufferLists,
    PortNumber,
    NumberOfNetBufferLists,
    ReceiveFlags);
  if ( (Microsoft_Windows_Networking_CorrelationEnabled || byte_1C009FE30) && (ReceiveFlags & 2) != 0 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists, v9, v10, v11);
}
