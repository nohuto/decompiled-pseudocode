/*
 * XREFs of NdisMCoIndicateReceivePacket @ 0x1C0088E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoIndicateReceivePacket(NDIS_HANDLE NdisVcHandle, PPNDIS_PACKET PacketArray, UINT NumberOfPackets)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PPNDIS_PACKET, UINT))NdisVcHandle + 35))(
    NdisVcHandle,
    PacketArray,
    NumberOfPackets);
}
