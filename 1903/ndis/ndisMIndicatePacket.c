/*
 * XREFs of ndisMIndicatePacket @ 0x1C00A3260
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     NdisGetFirstBufferFromPacket @ 0x1C0091600 (NdisGetFirstBufferFromPacket.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00A2DF4 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C00AAB38 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ?ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00ADEE4 (-ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMIndicatePacket(struct _NDIS_MINIPORT_BLOCK *a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int Number; // eax
  _X_FILTER *EthDB; // rcx
  struct _NDIS_PACKET **v6; // rbx
  char v8; // r15
  struct _NDIS_RW_LOCK_EX *BindListLock; // rcx
  struct _NDIS_PACKET *v10; // rbx
  __int64 v11; // rcx
  struct _NDIS_STACK_RESERVED *v12; // r13
  char *v13; // r14
  _NDIS_MINIPORT_STATS *BottomIfStats; // r8
  __int64 v15; // rax
  _NDIS_MINIPORT_STATS *v16; // r8
  __int64 v17; // rax
  _NDIS_MINIPORT_STATS *v18; // rdx
  struct _NDIS_STACK_RESERVED *v19; // r12
  __int64 v20; // r8
  _NDIS_OPEN_BLOCK *OpenList; // rsi
  __int64 v22; // r13
  _NDIS_OPEN_BLOCK *FilterNextOpen; // rax
  _NDIS_PACKET **IndicatedPacket; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rax
  _NDIS_PACKET *v27; // rax
  int (__fastcall *ReceivePacketHandler)(void *, _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v29; // rcx
  int v30; // ecx
  __int64 v31; // rdx
  bool v32; // zf
  struct _NDIS_PACKET *v33; // rdx
  _X_FILTER *v34; // rsi
  _NDIS_OPEN_BLOCK *v35; // rcx
  __int64 v36; // rdi
  PNDIS_PER_PROCESSOR_SLOT__ *ReceivedAPacketSlot; // rax
  _NDIS_OPEN_BLOCK *v38; // rbx
  unsigned int v39; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v40; // [rsp+44h] [rbp-45h]
  unsigned int v41; // [rsp+48h] [rbp-41h]
  struct _NDIS_STACK_RESERVED *v42; // [rsp+50h] [rbp-39h] BYREF
  _X_FILTER *v43; // [rsp+58h] [rbp-31h]
  unsigned int v44; // [rsp+60h] [rbp-29h]
  ULONG_PTR v45; // [rsp+68h] [rbp-21h]
  int v46; // [rsp+70h] [rbp-19h] BYREF
  __int64 v47; // [rsp+78h] [rbp-11h] BYREF
  _NDIS_PACKET *v48; // [rsp+80h] [rbp-9h]
  _NDIS_OPEN_BLOCK *v49; // [rsp+88h] [rbp-1h]
  struct _NDIS_STACK_RESERVED *v50; // [rsp+90h] [rbp+7h]
  struct _MDL *v51; // [rsp+98h] [rbp+Fh] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+F8h] [rbp+6Fh]
  unsigned int v54; // [rsp+100h] [rbp+77h]
  int v55; // [rsp+108h] [rbp+7Fh]

  v54 = a3;
  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  EthDB = a1->EthDB;
  v6 = (struct _NDIS_PACKET **)a2;
  v45 = a2;
  v43 = EthDB;
  *(_WORD *)&LockState.OldIrql = 0;
  v8 = 0;
  BindListLock = EthDB->BindListLock;
  LockState.Flags = 0;
  v55 = 0;
  v41 = Number;
  NdisAcquireRWLockRead(BindListLock, &LockState, 0);
  v40 = 0;
  if ( !a3 )
  {
    v34 = v43;
    goto LABEL_60;
  }
  do
  {
    v10 = *v6;
    ++*(_DWORD *)&v10[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v10, &v42);
    v12 = v42;
    v50 = v42;
    if ( *((_DWORD *)v42 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        a1->pAdapterInstanceName,
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, (ULONG_PTR)a1, (ULONG_PTR)v10, BugCheckParameter4);
    }
    v13 = (char *)v10 + v10->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v11, &v51, &v47, &v46, &v39);
    if ( (v10->Private.Flags & 0x20000) == 0 && (v10->Private.NdisPacketFlags & 2) == 0 )
    {
      BottomIfStats = a1->BottomIfStats;
      if ( BottomIfStats )
      {
        v15 = KeGetPcr()->Prcb.Number;
        ++BottomIfStats[v15].ifHCInUcastPkts;
        v16 = a1->BottomIfStats;
        if ( v16 )
        {
          v17 = v39;
          v18 = &v16[KeGetPcr()->Prcb.Number];
          v18->ifHCInUcastOctets += v39;
          v18->ifHCInOctets += v17;
        }
      }
    }
    v10->Private.Flags &= ~0x20000u;
    *((_DWORD *)v12 + 2) = -1;
    v19 = v42;
    *((_DWORD *)v42 + 3) = 0;
    *(_QWORD *)v19 = a1;
    v10->Private.ValidCounts = 0;
    if ( *((_DWORD *)v13 + 8) == -1073741670 || (a1->PnPFlags & 0x800) != 0 )
    {
      v20 = 1LL;
      v8 = 1;
    }
    else
    {
      if ( (a1->Flags & 0x8000) == 0 )
        *((_DWORD *)v13 + 8) = 0;
      v20 = 1LL;
    }
    OpenList = v43->OpenList;
    if ( v43->OpenList )
    {
      v22 = v41 << 12;
      do
      {
        FilterNextOpen = OpenList->FilterNextOpen;
        ++v55;
        v49 = FilterNextOpen;
        *((_BYTE *)OpenList->ReceivedAPacketSlot + v22) = 1;
        IndicatedPacket = a1->IndicatedPacket;
        v25 = *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset);
        v26 = KeGetPcr()->Prcb.Number;
        v44 = v25;
        v27 = IndicatedPacket[v26];
        v48 = v27;
        LODWORD(v27) = KeGetPcr()->Prcb.Number;
        IndicatedPacket[(_QWORD)v27] = v10;
        if ( v8 || (ReceivePacketHandler = OpenList->ReceivePacketHandler) == 0LL )
        {
          *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = -1073741670;
          ((void (__fastcall *)(void *, struct _NDIS_PACKET *))OpenList->ReceiveHandler)(
            OpenList->ProtocolBindingContext,
            v10);
          *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = v44;
        }
        else
        {
          v29 = *(struct _NET_BUFFER_LIST **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset);
          if ( v29 && v25 == -1073741670 )
          {
            ndisNblTrackerTransferOwnershipSingleNbl(
              v29,
              (struct NDIS_NBL_TRACKER_HANDLE__ *)IndicatedPacket,
              OpenList->NblTracker,
              0x9Au);
            ReceivePacketHandler = OpenList->ReceivePacketHandler;
          }
          *((_DWORD *)v19 + 3) += (__int16)ReceivePacketHandler(OpenList->ProtocolBindingContext, v10);
        }
        v20 = 1LL;
        if ( *((int *)v19 + 3) > 0 && (OpenList->OpenFlags & 8) == 0 )
          v8 = 1;
        a1->IndicatedPacket[KeGetPcr()->Prcb.Number] = v48;
        OpenList = v49;
      }
      while ( v49 );
      v12 = v50;
    }
    v30 = *((_DWORD *)v19 + 3);
    v8 = 0;
    if ( v30 )
    {
      v31 = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, v30 + 1) + v30 + 1);
      v32 = (_DWORD)v31 == 0;
      if ( (int)v31 <= 0 )
        goto LABEL_34;
      if ( (a1->Flags & 0x40000) == 0 )
        *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v31 = 0LL;
      *((_DWORD *)v12 + 2) = 0;
    }
    v32 = (_DWORD)v31 == 0;
LABEL_34:
    if ( v32 )
    {
      --*(_DWORD *)&v10[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v13 + 8) == -1073741670 )
        goto LABEL_50;
      if ( (a1->Flags & 0x40000) != 0 )
      {
        *(_QWORD *)v42 = 0LL;
        *((_DWORD *)v13 + 8) = 259;
        if ( (v10[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v10[-1].ProtocolReserved[4] == -1 )
          goto LABEL_45;
        v33 = v10;
        if ( *(_MDL **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset) )
          goto LABEL_40;
        ((void (__fastcall *)(void *, struct _NDIS_PACKET *, __int64))a1->DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler)(
          a1->MiniportAdapterContext,
          v10,
          1LL);
      }
      else
      {
        if ( *(_MDL **)((char *)&v10[1].Private.Head + v10->Private.NdisPacketOobOffset) )
        {
          *(_QWORD *)v42 = 0LL;
          *(unsigned int *)((char *)&v10->Private.Count + v10->Private.NdisPacketOobOffset) = 259;
          if ( (v10[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v10[-1].ProtocolReserved[4] != -1 )
          {
            v33 = v10;
LABEL_40:
            ndisReturnPacketToNetBufferList(a1, v33);
            goto LABEL_50;
          }
LABEL_45:
          NDIS_FREE_XFER_DATA_PACKET(v10);
          goto LABEL_50;
        }
        *((_DWORD *)v13 + 8) = 0;
      }
    }
    else if ( (a1->Flags & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)&a1->IndicatedPacketsCount, 1u);
    }
LABEL_50:
    v6 = (struct _NDIS_PACKET **)(v45 + 8);
    ++v40;
    v45 += 8LL;
  }
  while ( v40 < v54 );
  v34 = v43;
  if ( v55 )
  {
    v35 = v43->OpenList;
    if ( v43->OpenList )
    {
      v36 = v41 << 12;
      do
      {
        ReceivedAPacketSlot = v35->ReceivedAPacketSlot;
        v38 = v35->FilterNextOpen;
        if ( *((_BYTE *)ReceivedAPacketSlot + v36) )
        {
          *((_BYTE *)ReceivedAPacketSlot + v36) = 0;
          ((void (__fastcall *)(void *, __int64, __int64))v35->ReceiveCompleteHandler)(
            v35->ProtocolBindingContext,
            v31,
            v20);
        }
        v35 = v38;
      }
      while ( v38 );
    }
  }
LABEL_60:
  NdisReleaseRWLock(v34->BindListLock, &LockState);
}
