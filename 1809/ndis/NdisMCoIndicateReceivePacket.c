/*
 * XREFs of NdisMCoIndicateReceivePacket @ 0x1C011ED80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoIndicateReceivePacket(NDIS_HANDLE NdisVcHandle, PPNDIS_PACKET PacketArray, UINT NumberOfPackets)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PPNDIS_PACKET, UINT))NdisVcHandle + 35))(
    NdisVcHandle,
    PacketArray,
    NumberOfPackets);
}
