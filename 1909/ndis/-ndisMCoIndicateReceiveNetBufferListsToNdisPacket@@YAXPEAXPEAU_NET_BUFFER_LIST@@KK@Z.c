/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0088710
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C007AE98 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C007B3A0 (ndisXlateReturnPacketToNetBufferList.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0087880 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00A2FC4 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00AE0B4 (-ndisReturnPacketToNetBufferList@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNdisPacket(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r15
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  _X_FILTER *EthDB; // r12
  __int64 Status; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  _NET_BUFFER *FirstNetBuffer; // rax
  __int64 v13; // r13
  char v14; // al
  __int64 v15; // r12
  struct _NDIS_PACKET *v16; // rbx
  __int64 v17; // r14
  _MDL *v18; // r9
  _NDIS_MINIPORT_STATS *BottomIfStats; // rdx
  __int64 Number; // rax
  struct _NDIS_STACK_RESERVED *v21; // rdi
  int v22; // ecx
  signed __int32 v23; // edx
  struct _NDIS_PACKET *v24; // rdx
  struct _NDIS_MINIPORT_BLOCK *v25; // rdx
  struct _NDIS_OPEN_BLOCK **v26; // r12
  struct _NET_BUFFER_LIST *v27; // r13
  _QWORD *v28; // rbx
  unsigned int v29; // edi
  unsigned int v30; // esi
  char v31; // [rsp+40h] [rbp-C0h]
  struct _LOCK_STATE_EX LockState; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h]
  unsigned int v34; // [rsp+50h] [rbp-B0h]
  unsigned int v35; // [rsp+54h] [rbp-ACh]
  struct _NDIS_STACK_RESERVED *v36; // [rsp+58h] [rbp-A8h] BYREF
  struct _NDIS_OPEN_BLOCK **p_OpenList; // [rsp+60h] [rbp-A0h]
  struct _NET_BUFFER_LIST *v38; // [rsp+68h] [rbp-98h]
  void *v39; // [rsp+70h] [rbp-90h]
  char *v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+84h] [rbp-7Ch]
  struct _NET_BUFFER_LIST *v43; // [rsp+88h] [rbp-78h]
  _NET_BUFFER *v44; // [rsp+90h] [rbp-70h]
  unsigned int v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  struct _NDIS_MINIPORT_BLOCK *v47; // [rsp+A0h] [rbp-60h]
  char v48; // [rsp+B0h] [rbp-50h] BYREF

  v4 = a1[9];
  v35 = a3;
  v38 = a2;
  v39 = a1;
  v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v34 = a4;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  EthDB = v6->EthDB;
  v42 = 0;
  v46 = 0;
  p_OpenList = &EthDB->OpenList;
  NdisAcquireRWLockRead(EthDB->BindListLock, &LockState, 0);
  Status = a2->Status;
  v9 = KeGetPcr()->Prcb.Number << 12;
  v10 = *(_QWORD *)(v4 + 16);
  v43 = a2;
  v41 = 64;
  v45 = 0;
  v11 = *(_QWORD *)(v10 + 720);
  v40 = &v48;
  v47 = v6;
  *(_BYTE *)(v9 + v11) = 1;
  FirstNetBuffer = a2->FirstNetBuffer;
  v13 = Status;
  v44 = FirstNetBuffer;
  do
  {
    v14 = ndisXlateRecvNetBufferListsToPacketArray((__int64 *)&v40);
    v31 = v14;
    if ( !v45 )
      continue;
    v15 = (__int64)v40;
    v33 = v45;
    do
    {
      v16 = *(struct _NDIS_PACKET **)v15;
      v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 42LL);
      ++*(_DWORD *)&v16[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v16, &v36);
      BottomIfStats = v6->BottomIfStats;
      if ( BottomIfStats )
      {
        Number = KeGetPcr()->Prcb.Number;
        ++BottomIfStats[Number].ifHCInUcastPkts;
      }
      v21 = v36;
      *((_DWORD *)v36 + 2) = -1;
      *((_DWORD *)v21 + 3) = (_DWORD)v18;
      *(_QWORD *)v21 = v6;
      v16->Private.ValidCounts = (unsigned __int8)v18;
      if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
      {
        v22 = (int)v18;
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v4 + 56))(
                *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
                *(_QWORD *)(v4 + 24),
                v16);
        v18 = 0LL;
      }
      *((_DWORD *)v21 + 3) = v22;
      if ( v22 )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 2, v22 + 1) + v22 + 1;
        if ( v23 > 0 && (v6->Flags & 0x40000) == 0 )
          *(unsigned int *)((char *)&v16->Private.Count + v16->Private.NdisPacketOobOffset) = 259;
        v21 = v36;
      }
      else
      {
        v23 = (int)v18;
        *((_DWORD *)v21 + 2) = (_DWORD)v18;
      }
      if ( v23 )
      {
        if ( (v6->Flags & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)&v6->IndicatedPacketsCount);
      }
      else
      {
        --*(_DWORD *)&v16[-1].ProtocolReserved[4];
        if ( *(unsigned int *)((char *)&v16->Private.Count + v17) == -1073741670 )
          goto LABEL_31;
        if ( (v6->Flags & 0x40000) != 0 )
        {
          *(_QWORD *)v21 = v18;
          *(unsigned int *)((char *)&v16->Private.Count + v17) = 259;
          if ( (v16[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v16[-1].ProtocolReserved[4] == -1 )
            goto LABEL_26;
          v24 = v16;
          if ( *(_MDL **)((char *)&v16[1].Private.Head + v16->Private.NdisPacketOobOffset) != v18 )
            goto LABEL_21;
          v6->DriverHandle->MiniportDriverCharacteristics.DevicePnPEventNotifyHandler(
            v6->MiniportAdapterContext,
            (_NET_DEVICE_PNP_EVENT *)v16);
        }
        else
        {
          if ( *(_MDL **)((char *)&v16[1].Private.Head + v16->Private.NdisPacketOobOffset) != v18 )
          {
            *(_QWORD *)v21 = v18;
            *(unsigned int *)((char *)&v16->Private.Count + v16->Private.NdisPacketOobOffset) = 259;
            if ( (v16[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v16[-1].ProtocolReserved[4] != -1 )
            {
              v24 = v16;
LABEL_21:
              ndisReturnPacketToNetBufferList(v6, v24);
              goto LABEL_31;
            }
LABEL_26:
            NDIS_FREE_XFER_DATA_PACKET(v16);
            goto LABEL_31;
          }
          *(unsigned int *)((char *)&v16->Private.Count + v17) = (unsigned int)v18;
        }
      }
LABEL_31:
      if ( v13 == -1073741670 )
        ndisXlateReturnPacketToNetBufferList(v16);
      v15 += 8LL;
      --v33;
    }
    while ( v33 );
    v14 = v31;
  }
  while ( v14 );
  v25 = *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120);
  v26 = p_OpenList;
  v27 = v38;
  if ( v25->PmodeOpens )
  {
    v28 = v39;
    v29 = v34;
    v30 = v35;
    ndisCoIndicatePromiscNetBuffer(v39, v25, *p_OpenList, v38, v35, v34, 1);
    ndisCoIndicatePromiscNetBuffer(v28, *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120), v26[1], v27, v30, v29, 1);
    ndisCoIndicatePromiscNetBuffer(v28, *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120), v26[2], v27, v30, v29, 1);
  }
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v26[36], &LockState);
}
