/*
 * XREFs of NdisPacketSize @ 0x1C0032770
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C0032100 (NdisAllocatePacketPoolEx.c)
 *     ?ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z @ 0x1C008977C (-ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

UINT __stdcall NdisPacketSize(UINT ProtocolReservedSize)
{
  unsigned int v1; // edx
  UINT v2; // ecx
  unsigned int v3; // ecx

  if ( 48 * ndisPacketStackSize + 56 < 48 * ndisPacketStackSize + 16 )
    return 0;
  v1 = 48 * ndisPacketStackSize + 152;
  if ( v1 < 48 * ndisPacketStackSize + 56 )
    return 0;
  v2 = ProtocolReservedSize + 96;
  if ( v2 < 0x60 )
    return 0;
  if ( v2 + 7 < v2 )
    return 0;
  v3 = ((v2 + 7) & 0xFFFFFFF8) + v1;
  if ( v3 < v1 || v3 + 15 < v3 )
    return 0;
  else
    return (v3 + 15) & 0xFFFFFFF0;
}
