/*
 * XREFs of ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0053E54
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00541F0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054440 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054610 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E3A4 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004E65C (ndisXlateReturnNetBufferListToPacket.c)
 */

void __fastcall ndisCoIndicatePromiscPacket(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NDIS_PACKET *a4,
        char a5)
{
  __int64 v5; // r13
  unsigned __int8 PmodeOpens; // r12
  struct _NDIS_OPEN_BLOCK *v8; // rdi
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rsi
  struct _NET_BUFFER_LIST *v11; // rbx
  struct _NET_BUFFER_LIST *i; // rax
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v14; // rcx
  __int64 NdisPacketOobOffset; // rax
  unsigned int v16; // ebx
  _QWORD v17[2]; // [rsp+30h] [rbp-30h] BYREF
  int v18; // [rsp+40h] [rbp-20h]
  struct _NET_BUFFER_LIST *v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+50h] [rbp-10h]
  unsigned int v21; // [rsp+54h] [rbp-Ch]
  int v22; // [rsp+58h] [rbp-8h]
  struct _NDIS_PACKET *v23; // [rsp+90h] [rbp+30h] BYREF

  if ( a3 )
  {
    v5 = a1[9];
    PmodeOpens = a2->PmodeOpens;
    v8 = a3;
    do
    {
      if ( !PmodeOpens )
        break;
      if ( a5 )
        FilterNextOpen = v8->FilterNextOpen;
      else
        FilterNextOpen = v8->MiniportNextOpen;
      if ( (v8->OpenFlags & 4) != 0 )
      {
        if ( v8->ProtocolHandle->MajorNdisVersion < 6u )
        {
          *((_BYTE *)v8->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
          NdisPacketOobOffset = a4->Private.NdisPacketOobOffset;
          v16 = *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset);
          *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset) = -1073741670;
          a4->Private.Flags |= 0x100u;
          v8->ProtocolHandle->CoReceivePacketHandler(v8->ProtocolBindingContext, (void *)(v5 + 136), a4);
          *(unsigned int *)((char *)&a4->Private.Count + a4->Private.NdisPacketOobOffset) = v16;
          a4->Private.Flags &= ~0x100u;
        }
        else
        {
          v19 = 0LL;
          v20 = 0;
          v17[1] = &v23;
          v17[0] = a2;
          v23 = a4;
          v18 = 1;
          v22 = 3;
          ndisXlateRecvPacketArrayToNetBufferLists((__int64)v17);
          if ( v20 )
          {
            v11 = v19;
            *((_BYTE *)v8->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
            for ( i = v11; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
              i->Flags |= 0x80u;
            v11->NblFlags |= 0x8000u;
            v8->ProtocolHandle->CoReceiveNetBufferListsHandler(
              v8->ProtocolBindingContext,
              (void *)(v5 + 136),
              v11,
              v21,
              3u);
            Alignment = v11;
            do
            {
              Alignment->Flags &= ~0x80u;
              Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
            }
            while ( Alignment );
            v11->NblFlags &= ~0x8000u;
            do
            {
              v14 = v11;
              v11 = (struct _NET_BUFFER_LIST *)v11->Link.Alignment;
              ndisXlateReturnNetBufferListToPacket(v14);
            }
            while ( v11 );
          }
          else if ( (unsigned __int8)byte_1C00A0262 >= 2u )
          {
            WPP_SF_(0xAu, &WPP_4d0c893ac8ec3b5f26b43baabc605489_Traceguids);
          }
        }
      }
      v8 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
