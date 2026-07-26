/*
 * XREFs of ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00876B0
 * Callers:
 *     ?ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0087C10 (-ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088540 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00888A0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C007ACC8 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C007B1D0 (ndisXlateReturnPacketToNetBufferList.c)
 */

void __fastcall ndisCoIndicatePromiscNetBuffer(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  struct _NET_BUFFER_LIST *v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r8d
  bool v11; // zf
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // r14
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v15; // rax
  char v16; // r15
  __int64 v17; // r12
  void *v18; // rsi
  __int64 v19; // r13
  struct _NDIS_PACKET *v20; // rbx
  _NDIS_PACKET *v21; // r8
  __int64 v22; // [rsp+30h] [rbp-D0h]
  char *v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  int v26; // [rsp+4Ch] [rbp-B4h]
  struct _NET_BUFFER_LIST *v27; // [rsp+50h] [rbp-B0h]
  _NET_BUFFER *v28; // [rsp+58h] [rbp-A8h]
  unsigned int v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+64h] [rbp-9Ch]
  struct _NDIS_MINIPORT_BLOCK *v31; // [rsp+68h] [rbp-98h]
  char v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+2F8h] [rbp+1F8h]

  v30 = 0;
  v29 = 0;
  v8 = a4;
  v9 = a1[9];
  v10 = a6 | 2;
  v11 = a2->PmodeOpens == 0;
  v24 = &v32;
  FirstNetBuffer = a4->FirstNetBuffer;
  v22 = v9;
  v25 = 64;
  v26 = -1073741670;
  v27 = a4;
  v28 = FirstNetBuffer;
  v31 = a2;
  v33 = a6 | 2;
  if ( !v11 && a3 )
  {
    do
    {
      if ( a7 )
        FilterNextOpen = a3->FilterNextOpen;
      else
        FilterNextOpen = a3->MiniportNextOpen;
      if ( (a3->OpenFlags & 4) != 0 )
      {
        *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
        if ( a3->ProtocolHandle->MajorNdisVersion < 6u )
        {
          do
          {
            v16 = ndisXlateRecvNetBufferListsToPacketArray((__int64 *)&v24);
            if ( v29 )
            {
              v17 = (__int64)v24;
              v18 = (void *)(v9 + 136);
              v19 = v29;
              do
              {
                v20 = *(struct _NDIS_PACKET **)v17;
                v21 = *(_NDIS_PACKET **)v17;
                *(_DWORD *)(*(_QWORD *)v17 + 36LL) |= 0x100u;
                a3->ProtocolHandle->CoReceivePacketHandler(a3->ProtocolBindingContext, v18, v21);
                ndisXlateReturnPacketToNetBufferList(v20);
                v17 += 8LL;
                --v19;
              }
              while ( v19 );
              v9 = v22;
            }
          }
          while ( v16 );
          v8 = a4;
        }
        else
        {
          Alignment = v8;
          do
          {
            Alignment->Flags |= 0x80u;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          v8->NblFlags |= 0x8000u;
          a3->ProtocolHandle->CoReceiveNetBufferListsHandler(
            a3->ProtocolBindingContext,
            (void *)(v9 + 136),
            v8,
            a5,
            v10);
          v15 = v8;
          do
          {
            v15->Flags &= ~0x80u;
            v15 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
          }
          while ( v15 );
          v8->NblFlags &= ~0x8000u;
        }
        v10 = v33;
      }
      a3 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
