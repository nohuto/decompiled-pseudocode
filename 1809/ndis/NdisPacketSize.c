/*
 * XREFs of NdisPacketSize @ 0x1C001FBD0
 * Callers:
 *     NdisAllocatePacketPoolEx @ 0x1C001F3D0 (NdisAllocatePacketPoolEx.c)
 *     ndisMIsLoopbackPacket @ 0x1C0057520 (ndisMIsLoopbackPacket.c)
 * Callees:
 *     <none>
 */

UINT __stdcall NdisPacketSize(UINT ProtocolReservedSize)
{
  unsigned int v1; // eax

  if ( 48 * ndisPacketStackSize + 56 < 48 * ndisPacketStackSize + 16 )
    return 0;
  if ( 48 * ndisPacketStackSize + 152 < 48 * ndisPacketStackSize + 56 )
    return 0;
  if ( ProtocolReservedSize + 96 < 0x60 )
    return 0;
  if ( ProtocolReservedSize + 103 < ProtocolReservedSize + 96 )
    return 0;
  v1 = ((ProtocolReservedSize + 103) & 0xFFFFFFF8) + 48 * ndisPacketStackSize + 152;
  if ( v1 < 48 * ndisPacketStackSize + 152 || v1 + 15 < v1 )
    return 0;
  else
    return (v1 + 15) & 0xFFFFFFF0;
}
