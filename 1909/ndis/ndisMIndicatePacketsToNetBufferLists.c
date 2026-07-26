/*
 * XREFs of ndisMIndicatePacketsToNetBufferLists @ 0x1C00AECA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C00210F0 (ndisInvokeNextReceiveHandler.c)
 *     NdisMPauseComplete @ 0x1C003FC40 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C007B048 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C007B300 (ndisXlateReturnNetBufferListToPacket.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00A2FC4 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     PktMonClientNblLogNdis @ 0x1C00C98FC (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(char *MiniportAdapterHandle, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  bool v6; // al
  struct _NET_BUFFER_LIST *v7; // rsi
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  KIRQL v10; // al
  int v11; // ecx
  bool v12; // cc
  KSPIN_LOCK *v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // rax
  int v17; // r13d
  struct _NET_BUFFER_LIST *Alignment; // rbx
  struct _NDIS_PACKET *v19; // rdx
  __int64 NdisPacketOobOffset; // rax
  KIRQL v21; // al
  int v22; // edx
  bool v23; // zf
  struct _NET_BUFFER_LIST *v24; // rbx
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // r14
  struct _NDIS_PACKET **v28; // rbx
  struct _NDIS_PACKET *v29; // rcx
  __int64 v30; // rax
  _QWORD v31[2]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-28h]
  __int128 v33; // [rsp+54h] [rbp-24h]
  __int64 v34; // [rsp+64h] [rbp-14h]
  int v35; // [rsp+6Ch] [rbp-Ch]
  int v36; // [rsp+C0h] [rbp+48h]
  bool v38; // [rsp+D0h] [rbp+58h]
  int v39; // [rsp+D8h] [rbp+60h]

  v32 = a3;
  v33 = 0uLL;
  v3 = 0;
  v34 = 0LL;
  v35 = 0;
  v31[1] = a2;
  v31[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v6 = ndisXlateRecvPacketArrayToNetBufferLists((__int64)v31);
    v7 = *(struct _NET_BUFFER_LIST **)((char *)&v33 + 4);
    v8 = HIDWORD(v33);
    v38 = v6;
    if ( !*(_QWORD *)((char *)&v33 + 4) )
      goto LABEL_28;
    v39 = HIDWORD(v33);
    v9 = HIDWORD(v33) - v3;
    v36 = HIDWORD(v33) - v3;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
    v11 = *((_DWORD *)MiniportAdapterHandle + 502);
    *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
    v12 = (unsigned int)(v11 - 5) <= 1;
    v13 = (KSPIN_LOCK *)(MiniportAdapterHandle + 2000);
    if ( v12 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 503) += v9;
    KeReleaseSpinLock(v13, v10);
    v15 = HIDWORD(v34);
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v34 & 0x200000000LL) == 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v9);
      v15 = HIDWORD(v34);
      v8 = HIDWORD(v33);
      v7 = *(struct _NET_BUFFER_LIST **)((char *)&v33 + 4);
    }
    if ( *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v7,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 510),
        *((_QWORD *)MiniportAdapterHandle + 313),
        (v15 & 2 | 0x100u) >> 1,
        0);
    if ( byte_1C00E5E20 )
    {
      v16 = *((_QWORD *)MiniportAdapterHandle + 728);
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 12) & 1) != 0 )
          PktMonClientNblLogNdis(MiniportAdapterHandle + 5816, v7, v14, 1LL);
      }
    }
    ndisInvokeNextReceiveHandler(
      v7,
      0,
      v34,
      v15,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 314),
      *((void **)MiniportAdapterHandle + 312),
      *((void (**)(void))MiniportAdapterHandle + 328));
    if ( (v15 & 2) != 0 )
    {
      v17 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
      if ( *(_DWORD *)ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v7,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 313),
          *((_QWORD *)MiniportAdapterHandle + 510),
          0x8Eu,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
        v19 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v7);
        NdisPacketOobOffset = v19->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v19->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v17 )
          {
            if ( (v19[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v19[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v19);
            else
              (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 270))(*((_QWORD *)MiniportAdapterHandle + 3));
          }
          else
          {
            *(unsigned int *)((char *)&v19->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v7 = Alignment;
      }
      while ( Alignment );
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
      v22 = *((_DWORD *)MiniportAdapterHandle + 503) - v36;
      v23 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
      *((_DWORD *)MiniportAdapterHandle + 503) = v22;
      if ( v23 && !v22 )
      {
        *((_DWORD *)MiniportAdapterHandle + 502) = 6;
        *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v21);
        NdisMPauseComplete(MiniportAdapterHandle);
        goto LABEL_34;
      }
      *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v21);
    }
    v6 = v38;
    v3 = v39;
    *(_QWORD *)((char *)&v33 + 4) = 0LL;
LABEL_28:
    if ( !v6 )
      goto LABEL_34;
  }
  KeReleaseSpinLock(v13, v10);
  do
  {
    v24 = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v7);
    v7 = v24;
  }
  while ( v24 );
  v8 -= v9;
LABEL_34:
  if ( v8 < a3 )
  {
    v25 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
    v26 = v8;
    v27 = a3 - v8;
    v28 = (struct _NDIS_PACKET **)(a2 + 8 * v26);
    do
    {
      v29 = *v28++;
      v30 = v29->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v29->Private.Count + v30) != -1073741670 )
      {
        if ( v25 )
        {
          if ( (v29[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v29[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v29);
          else
            (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))MiniportAdapterHandle + 270))(
              *((_QWORD *)MiniportAdapterHandle + 3),
              v29);
        }
        else
        {
          *(unsigned int *)((char *)&v29->Private.Count + v30) = 0;
        }
      }
      --v27;
    }
    while ( v27 );
  }
}
