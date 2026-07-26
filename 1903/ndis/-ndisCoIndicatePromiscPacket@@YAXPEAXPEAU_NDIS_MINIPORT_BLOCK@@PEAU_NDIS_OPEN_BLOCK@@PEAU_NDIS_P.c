/*
 * XREFs of ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00878A0
 * Callers:
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087C90 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087E90 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0088060 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007AE78 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C007B130 (ndisXlateReturnNetBufferListToPacket.c)
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
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rsi
  int v11; // edx
  _NET_BUFFER_LIST *v12; // rbx
  _NET_BUFFER_LIST *i; // rax
  _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v15; // rcx
  __int64 NdisPacketOobOffset; // rax
  unsigned int v17; // ebx
  _QWORD v18[6]; // [rsp+30h] [rbp-30h] BYREF
  struct _NDIS_PACKET *v19; // [rsp+90h] [rbp+30h] BYREF

  v5 = a1[9];
  memset(v18, 0, sizeof(v18));
  PmodeOpens = a2->PmodeOpens;
  if ( a3 )
  {
    do
    {
      if ( !PmodeOpens )
        break;
      if ( a5 )
        FilterNextOpen = a3->FilterNextOpen;
      else
        FilterNextOpen = a3->MiniportNextOpen;
      if ( (a3->OpenFlags & 4) != 0 )
      {
        if ( a3->ProtocolHandle->MajorNdisVersion < 6u )
        {
          *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
          NdisPacketOobOffset = a4->Private.NdisPacketOobOffset;
          v17 = *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset);
          *(unsigned int *)((char *)&a4->Private.Count + NdisPacketOobOffset) = -1073741670;
          a4->Private.Flags |= 0x100u;
          a3->ProtocolHandle->CoReceivePacketHandler(a3->ProtocolBindingContext, (void *)(v5 + 136), a4);
          *(unsigned int *)((char *)&a4->Private.Count + a4->Private.NdisPacketOobOffset) = v17;
          a4->Private.Flags &= ~0x100u;
        }
        else
        {
          v18[3] = 0LL;
          LODWORD(v18[4]) = 0;
          v18[1] = &v19;
          v18[0] = a2;
          v19 = a4;
          LODWORD(v18[2]) = 1;
          LODWORD(v18[5]) = 3;
          ndisXlateRecvPacketArrayToNetBufferLists((__int64)v18);
          if ( LODWORD(v18[4]) )
          {
            v12 = (_NET_BUFFER_LIST *)v18[3];
            *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
            for ( i = v12; i; i = (_NET_BUFFER_LIST *)i->Link.Alignment )
              i->Flags |= 0x80u;
            v12->NblFlags |= 0x8000u;
            a3->ProtocolHandle->CoReceiveNetBufferListsHandler(
              a3->ProtocolBindingContext,
              (void *)(v5 + 136),
              v12,
              HIDWORD(v18[4]),
              3u);
            Alignment = v12;
            do
            {
              Alignment->Flags &= ~0x80u;
              Alignment = (_NET_BUFFER_LIST *)Alignment->Link.Alignment;
            }
            while ( Alignment );
            v12->NblFlags &= ~0x8000u;
            do
            {
              v15 = v12;
              v12 = (_NET_BUFFER_LIST *)v12->Link.Alignment;
              ndisXlateReturnNetBufferListToPacket(v15);
            }
            while ( v12 );
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 2;
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11,
              19,
              10,
              (struct _GUID *)&WPP_e982035bc9ca355b2dd1f2d762e385f5_Traceguids);
          }
        }
      }
      a3 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
