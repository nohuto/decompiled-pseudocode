/*
 * XREFs of ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C008B630
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C007B268 (ndisXlateSendCompleteNetBufferListToPacket.c)
 */

__int64 __fastcall ndisMSendNetBufferListsCompleteToNdisPackets(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  struct _NET_BUFFER_LIST *v3; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  struct _NDIS_PACKET *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v3 = a2;
  if ( *(_DWORD *)ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 584), 0x95u, a3 & 1);
  do
  {
    Alignment = (struct _NET_BUFFER_LIST *)v3->Link.Alignment;
    v3->Link.Alignment = 0LL;
    ndisXlateSendCompleteNetBufferListToPacket(v3, &v8, (int *)&v7);
    if ( (v7 & 0xC0230000) == 0xC0230000 )
      v7 = (unsigned __int16)v7 | 0xC0010000;
    result = (*(__int64 (__fastcall **)(__int64, struct _NDIS_PACKET *))(a1 + 112))(a1, v8);
    v3 = Alignment;
  }
  while ( Alignment );
  return result;
}
