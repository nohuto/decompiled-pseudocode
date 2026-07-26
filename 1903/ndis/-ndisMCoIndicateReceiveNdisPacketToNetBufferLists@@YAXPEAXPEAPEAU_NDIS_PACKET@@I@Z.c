/*
 * XREFs of ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00882F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMPauseComplete @ 0x1C003FC50 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007AE78 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C007B130 (ndisXlateReturnNetBufferListToPacket.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00888A0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00A2DF4 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMCoIndicateReceiveNdisPacketToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // rax
  void *v5; // r13
  __int64 v6; // rdi
  bool v7; // al
  struct _NET_BUFFER_LIST *v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  KIRQL v11; // al
  int v12; // ecx
  bool v13; // cc
  KSPIN_LOCK *v14; // rcx
  struct _NET_BUFFER_LIST *v15; // r13
  struct _NDIS_PACKET *v16; // rax
  KIRQL v17; // al
  unsigned int v18; // ecx
  bool v19; // zf
  struct _NET_BUFFER_LIST *Alignment; // rbx
  __int64 v21; // rsi
  struct _NDIS_PACKET **v22; // rbx
  struct _NDIS_PACKET *v23; // rdx
  _QWORD v24[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-28h]
  int v26; // [rsp+34h] [rbp-24h]
  struct _NET_BUFFER_LIST *v27; // [rsp+38h] [rbp-20h]
  unsigned int v28; // [rsp+40h] [rbp-18h]
  unsigned int v29[2]; // [rsp+44h] [rbp-14h]
  int v30; // [rsp+4Ch] [rbp-Ch]
  bool v33; // [rsp+B0h] [rbp+58h]
  unsigned int v34; // [rsp+B8h] [rbp+60h]

  v3 = a1[9];
  v34 = 0;
  v5 = a1;
  v26 = 0;
  *(_QWORD *)v29 = 0LL;
  v6 = *(_QWORD *)(v3 + 120);
  v30 = 0;
  v24[0] = v6;
  v24[1] = a2;
  v25 = a3;
  v27 = 0LL;
  v28 = 0;
  do
  {
    v7 = ndisXlateRecvPacketArrayToNetBufferLists((__int64)v24);
    v8 = v27;
    v9 = v28;
    v33 = v7;
    if ( !v27 )
      break;
    v10 = v28 - v34;
    v34 = v28;
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2000));
    v12 = *(_DWORD *)(v6 + 2008);
    *(_QWORD *)(v6 + 2016) = 0LL;
    v13 = (unsigned int)(v12 - 5) <= 1;
    v14 = (KSPIN_LOCK *)(v6 + 2000);
    if ( v13 )
    {
      KeReleaseSpinLock(v14, v11);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
        v8->Link.Alignment = 0LL;
        ndisXlateReturnNetBufferListToPacket(v8);
        v8 = Alignment;
      }
      while ( Alignment );
      v9 -= v10;
      break;
    }
    *(_DWORD *)(v6 + 2012) += v10;
    KeReleaseSpinLock(v14, v11);
    ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(v5, v8, v29[0], v29[1]);
    if ( (v29[1] & 2) != 0 )
    {
      do
      {
        v15 = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
        v16 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v8);
        if ( *(unsigned int *)((char *)&v16->Private.Count + v16->Private.NdisPacketOobOffset) != -1073741670 )
        {
          if ( (v16[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v16[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v16);
          else
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v6 + 2160))(*(_QWORD *)(v6 + 24), v16);
        }
        v8 = v15;
      }
      while ( v15 );
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2000));
      v18 = *(_DWORD *)(v6 + 2012) - v10;
      v19 = *(_DWORD *)(v6 + 2008) == 5;
      *(_DWORD *)(v6 + 2012) = v18;
      if ( v19 && !v18 )
      {
        *(_QWORD *)(v6 + 2016) = 0LL;
        *(_DWORD *)(v6 + 2008) = 6;
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2000), v17);
        NdisMPauseComplete((NDIS_HANDLE)v6);
        break;
      }
      *(_QWORD *)(v6 + 2016) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 2000), v17);
      v5 = a1;
    }
    v27 = 0LL;
  }
  while ( v33 );
  if ( v9 < a3 )
  {
    v21 = a3 - v9;
    v22 = &a2[v9];
    do
    {
      v23 = *v22++;
      if ( *(unsigned int *)((char *)&v23->Private.Count + v23->Private.NdisPacketOobOffset) != -1073741670 )
      {
        if ( (v23[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v23[-1].ProtocolReserved[4] == -1 )
          NDIS_FREE_XFER_DATA_PACKET(v23);
        else
          (*(void (__fastcall **)(_QWORD))(v6 + 2160))(*(_QWORD *)(v6 + 24));
      }
      --v21;
    }
    while ( v21 );
  }
}
