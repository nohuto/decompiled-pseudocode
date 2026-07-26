/*
 * XREFs of ?ndisPacketToNetBuffer@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER@@@Z @ 0x1C007A224
 * Callers:
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007B048 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B9B8 (ndisXlateSendPacketArrayToNetBufferLists.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPacketToNetBuffer(struct _NDIS_PACKET *a1, struct _NET_BUFFER *a2)
{
  _MDL *Head; // rax
  _MDL *v3; // rax
  _MDL *v4; // rax
  unsigned int ByteCount; // r9d
  struct _MDL *i; // r8

  Head = a1->Private.Head;
  a2->DataOffset = 0;
  a2->MdlChain = Head;
  v3 = a1->Private.Head;
  a2->CurrentMdlOffset = 0;
  a2->Link.Region = (unsigned __int64)v3;
  v4 = a1->Private.Head;
  ByteCount = v4->ByteCount;
  for ( i = v4->Next; i; i = i->Next )
    ByteCount += i->ByteCount;
  a2->DataLength = ByteCount;
  a1->Private.TotalLength = ByteCount;
}
