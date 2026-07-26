/*
 * XREFs of ?NetPacketClearVolatileFields@@YAXPEBU_NET_DATAPATH_DESCRIPTOR@@PEAU_NET_PACKET@@@Z @ 0x1C00821C4
 * Callers:
 *     NetPacketReuseMany @ 0x1C00822A0 (NetPacketReuseMany.c)
 *     NetPacketReuseOne @ 0x1C0082360 (NetPacketReuseOne.c)
 * Callees:
 *     <none>
 */

void __fastcall NetPacketClearVolatileFields(const struct _NET_DATAPATH_DESCRIPTOR *a1, struct _NET_PACKET *a2)
{
  unsigned int v2; // r9d
  PNET_RING_BUFFER v5; // rdx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rcx

  v2 = 0;
  for ( *((_BYTE *)a2 + 11) = 0; v2 < a2->FragmentCount; *(_QWORD *)&v5->Buffer[v7 + 24] &= ~0x8000000000000000uLL )
  {
    v5 = a1->RingBuffer[1];
    v6 = v2 + a2->FragmentOffset;
    ++v2;
    v7 = v5->ElementStride * (unsigned __int64)(v5->ElementIndexMask & v6);
  }
}
