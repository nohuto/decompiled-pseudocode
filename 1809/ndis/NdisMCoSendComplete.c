/*
 * XREFs of NdisMCoSendComplete @ 0x1C011EE40
 * Callers:
 *     ndisMAllocSGList @ 0x1C004C4FC (ndisMAllocSGList.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00541F0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoSendComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, PNDIS_PACKET Packet)
{
  (*((void (__fastcall **)(NDIS_STATUS, NDIS_HANDLE, PNDIS_PACKET))NdisVcHandle + 34))(Status, NdisVcHandle, Packet);
}
