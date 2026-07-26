/*
 * XREFs of ndisMIndicatePacketsToNetBufferLists @ 0x1C006DE10
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextReceiveHandler @ 0x1C000FE40 (ndisInvokeNextReceiveHandler.c)
 *     NdisMPauseComplete @ 0x1C0014590 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004E3A4 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004E65C (ndisXlateReturnNetBufferListToPacket.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0067FF0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     PktMonClientNblLogNdis @ 0x1C0083F98 (PktMonClientNblLogNdis.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(char *MiniportAdapterHandle, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  bool v6; // r12
  unsigned int v7; // r13d
  KIRQL v8; // dl
  unsigned int v9; // ecx
  bool v10; // cc
  KSPIN_LOCK *v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  struct _NET_BUFFER_LIST *v14; // rsi
  __int64 v15; // rax
  int v16; // r12d
  struct _NET_BUFFER_LIST *Alignment; // rbx
  struct _NDIS_PACKET *v18; // rdx
  __int64 NdisPacketOobOffset; // rax
  KIRQL v20; // al
  unsigned int v21; // edx
  bool v22; // zf
  unsigned int v23; // ecx
  int v24; // esi
  __int64 v25; // r14
  struct _NDIS_PACKET **v26; // rbx
  struct _NDIS_PACKET *v27; // rcx
  __int64 v28; // rax
  struct _NET_BUFFER_LIST *v29; // rsi
  struct _NET_BUFFER_LIST *v30; // rbx
  _QWORD v31[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-20h]
  struct _NET_BUFFER_LIST *v33; // [rsp+58h] [rbp-18h]
  unsigned int v34; // [rsp+60h] [rbp-10h]
  unsigned int v35; // [rsp+64h] [rbp-Ch]
  int v36; // [rsp+68h] [rbp-8h]
  unsigned int v37; // [rsp+B0h] [rbp+40h]
  bool v39; // [rsp+C0h] [rbp+50h]

  v32 = a3;
  v3 = 0;
  v34 = 0;
  v36 = 0;
  v31[1] = a2;
  v31[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v6 = ndisXlateRecvPacketArrayToNetBufferLists((__int64)v31);
    v39 = v6;
    if ( !v33 )
      goto LABEL_28;
    v7 = v34 - v3;
    v37 = v34;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 251);
    *((_QWORD *)MiniportAdapterHandle + 253) = KeGetCurrentThread();
    v9 = *((_DWORD *)MiniportAdapterHandle + 504) - 5;
    *((_DWORD *)MiniportAdapterHandle + 508) = 2491758;
    v10 = v9 <= 1;
    v11 = (KSPIN_LOCK *)(MiniportAdapterHandle + 2008);
    if ( v10 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 505) += v7;
    *((_QWORD *)MiniportAdapterHandle + 253) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 508) = 0;
    KeReleaseSpinLock(v11, v8);
    v13 = v36;
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v36 & 2) == 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v7);
      v13 = v36;
    }
    v14 = v33;
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v33,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 514),
        *((_QWORD *)MiniportAdapterHandle + 315),
        (v13 & 2 | 0x100u) >> 1,
        0);
    if ( byte_1C009FE30 )
    {
      v15 = *((_QWORD *)MiniportAdapterHandle + 743);
      if ( v15 )
      {
        if ( (*(_DWORD *)(v15 + 52) & 1) != 0 )
          PktMonClientNblLogNdis(MiniportAdapterHandle + 5920, v14, v12, 1LL);
      }
    }
    ndisInvokeNextReceiveHandler(
      v14,
      0,
      v35,
      v13,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 316),
      *((void **)MiniportAdapterHandle + 314),
      *((void (**)(void))MiniportAdapterHandle + 330));
    if ( (v13 & 2) != 0 )
    {
      v16 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v14,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 315),
          *((_QWORD *)MiniportAdapterHandle + 514),
          0x8Eu,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v14->Link.Alignment;
        v18 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v14);
        NdisPacketOobOffset = v18->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v18->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v16 )
          {
            if ( (v18[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v18[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v18);
            else
              (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 272))(*((_QWORD *)MiniportAdapterHandle + 3));
          }
          else
          {
            *(unsigned int *)((char *)&v18->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v14 = Alignment;
      }
      while ( Alignment );
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 251);
      v21 = *((_DWORD *)MiniportAdapterHandle + 505) - v7;
      *((_QWORD *)MiniportAdapterHandle + 253) = KeGetCurrentThread();
      v22 = *((_DWORD *)MiniportAdapterHandle + 504) == 5;
      *((_DWORD *)MiniportAdapterHandle + 508) = 2491892;
      *((_DWORD *)MiniportAdapterHandle + 505) = v21;
      if ( v22 && !v21 )
      {
        *((_DWORD *)MiniportAdapterHandle + 504) = 6;
        *((_QWORD *)MiniportAdapterHandle + 253) = 0LL;
        *((_DWORD *)MiniportAdapterHandle + 508) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 251, v20);
        NdisMPauseComplete(MiniportAdapterHandle);
LABEL_29:
        v23 = v34;
        goto LABEL_30;
      }
      *((_QWORD *)MiniportAdapterHandle + 253) = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 508) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 251, v20);
      v6 = v39;
    }
    v3 = v37;
    v33 = 0LL;
LABEL_28:
    if ( !v6 )
      goto LABEL_29;
  }
  *((_QWORD *)MiniportAdapterHandle + 253) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 508) = 0;
  v29 = v33;
  KeReleaseSpinLock(v11, v8);
  do
  {
    v30 = (struct _NET_BUFFER_LIST *)v29->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v29);
    v29 = v30;
  }
  while ( v30 );
  v23 = v34 - v7;
LABEL_30:
  if ( v23 < a3 )
  {
    v24 = *((_DWORD *)MiniportAdapterHandle + 30) & 0x40000;
    v25 = a3 - v23;
    v26 = (struct _NDIS_PACKET **)(a2 + 8LL * v23);
    do
    {
      v27 = *v26++;
      v28 = v27->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v27->Private.Count + v28) != -1073741670 )
      {
        if ( v24 )
        {
          if ( (v27[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v27[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v27);
          else
            (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))MiniportAdapterHandle + 272))(
              *((_QWORD *)MiniportAdapterHandle + 3),
              v27);
        }
        else
        {
          *(unsigned int *)((char *)&v27->Private.Count + v28) = 0;
        }
      }
      --v25;
    }
    while ( v25 );
  }
}
