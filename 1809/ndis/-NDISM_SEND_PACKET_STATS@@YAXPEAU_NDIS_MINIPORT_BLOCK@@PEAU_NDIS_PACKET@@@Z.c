/*
 * XREFs of ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0055390
 * Callers:
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0054FF0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00550D0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     NdisMSendComplete @ 0x1C00556F0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0056450 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00566E0 (ndisMDeferredSendPackets.c)
 *     ndisMSendCompleteSG @ 0x1C0057CE0 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057ED0 (ndisMSendCompleteX.c)
 * Callees:
 *     <none>
 */

void __fastcall NDISM_SEND_PACKET_STATS(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  _MDL *Head; // rdi
  char *MappedSystemVa; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // rdx
  ULONG ByteCount; // r8d
  struct _MDL *i; // rcx
  _NDIS_MINIPORT_STATS *v8; // rax
  char v9; // dl

  Head = a2->Private.Head;
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)Head->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
  {
    ByteCount = Head->ByteCount;
    for ( i = Head->Next; i; i = i->Next )
      ByteCount += i->ByteCount;
    BottomIfStats->ifHCOutOctets += ByteCount;
    if ( !MappedSystemVa || a1->MediaType )
    {
      v8 = a1->BottomIfStats;
    }
    else
    {
      v9 = *MappedSystemVa;
      if ( *MappedSystemVa == -1
        && MappedSystemVa[1] == -1
        && MappedSystemVa[2] == -1
        && MappedSystemVa[3] == -1
        && MappedSystemVa[4] == -1
        && MappedSystemVa[5] == -1 )
      {
        ++a1->BottomIfStats->ifHCOutBroadcastPkts;
        a1->BottomIfStats->ifHCOutBroadcastOctets += ByteCount;
        return;
      }
      v8 = a1->BottomIfStats;
      if ( (v9 & 1) != 0 )
      {
        ++v8->ifHCOutMulticastPkts;
        a1->BottomIfStats->ifHCOutMulticastOctets += ByteCount;
        return;
      }
    }
    ++v8->ifHCOutUcastPkts;
    a1->BottomIfStats->ifHCOutUcastOctets += ByteCount;
  }
}
