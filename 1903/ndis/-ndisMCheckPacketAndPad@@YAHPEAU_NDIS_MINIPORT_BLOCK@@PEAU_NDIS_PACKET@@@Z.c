/*
 * XREFs of ?ndisMCheckPacketAndPad@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00892F8
 * Callers:
 *     ndisMSendPacketsSGToMiniport @ 0x1C008BA60 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C008BBE0 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsXToMiniport @ 0x1C008BF60 (ndisMSendPacketsXToMiniport.c)
 * Callees:
 *     ndisPadShortPacket @ 0x1C008C614 (ndisPadShortPacket.c)
 */

__int64 __fastcall ndisMCheckPacketAndPad(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _MDL *v4; // rdx
  unsigned int v5; // edi
  _MDL *i; // rbx
  PVOID MappedSystemVa; // rax

  v4 = 0LL;
  v5 = 0;
  for ( i = a2->Private.Head; i; i = i->Next )
  {
    if ( (i->MdlFlags & 5) != 0 )
      MappedSystemVa = i->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( !MappedSystemVa )
      return 3221225626LL;
    v5 += i->ByteCount;
    v4 = i;
  }
  if ( (a1->SendFlags & 8) != 0 && v4 && v5 < 0x3C )
    return ndisPadShortPacket(a2, v4, v5);
  else
    return 0LL;
}
