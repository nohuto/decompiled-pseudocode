/*
 * XREFs of ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054610
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0053E54 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0067FF0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C006EAFC (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMCoIndicateReceiveNdisPacketToNdisPacket(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 i; // r13
  struct _NDIS_PACKET *v9; // rbx
  __int64 NdisPacketOobOffset; // rbp
  char *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _NDIS_STACK_RESERVED *v14; // rdi
  int v15; // ecx
  struct _NDIS_MINIPORT_BLOCK *v16; // rdx
  int v17; // ecx
  signed __int32 v18; // edx
  struct _NDIS_PACKET *v19; // rdx
  struct _NDIS_STACK_RESERVED *v21; // [rsp+78h] [rbp+10h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+80h] [rbp+18h] BYREF

  v3 = a1[9];
  v6 = *(_QWORD *)(v3 + 120);
  v7 = *(_QWORD *)(v6 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v7 + 288), &LockState, 0);
  *(_BYTE *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(*(_QWORD *)(v3 + 16) + 720LL)) = 1;
  if ( a3 )
  {
    for ( i = a3; i; --i )
    {
      v9 = *a2;
      NdisPacketOobOffset = (*a2)->Private.NdisPacketOobOffset;
      ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
      v11 = (char *)v9 + NdisPacketOobOffset;
      NDIS_STACK_RESERVED_FROM_PACKET(v9, &v21);
      v12 = *(_QWORD *)(v6 + 3168);
      if ( v12 )
      {
        v13 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v13 + v12 + 32);
      }
      v14 = v21;
      *((_DWORD *)v21 + 2) = -1;
      *((_DWORD *)v14 + 3) = 0;
      *(_QWORD *)v14 = v6;
      v9->Private.ValidCounts = 0;
      if ( *((_DWORD *)v11 + 8) != -1073741670 )
        *((_DWORD *)v11 + 8) = 0;
      if ( (*(_DWORD *)(v3 + 4) & 0x10) != 0 )
        v15 = 0;
      else
        v15 = (*(__int16 (__fastcall **)(_QWORD, _QWORD, struct _NDIS_PACKET *))(v3 + 56))(
                *(_QWORD *)(*(_QWORD *)(v3 + 16) + 32LL),
                *(_QWORD *)(v3 + 24),
                v9);
      *((_DWORD *)v14 + 3) = v15;
      v16 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120);
      if ( v16->PmodeOpens )
      {
        ndisCoIndicatePromiscPacket(a1, v16, *(struct _NDIS_OPEN_BLOCK **)v7, v9, 1);
        ndisCoIndicatePromiscPacket(
          a1,
          *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120),
          *(struct _NDIS_OPEN_BLOCK **)(v7 + 8),
          v9,
          1);
        ndisCoIndicatePromiscPacket(
          a1,
          *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 120),
          *(struct _NDIS_OPEN_BLOCK **)(v7 + 16),
          v9,
          1);
      }
      v17 = *((_DWORD *)v14 + 3);
      if ( v17 )
      {
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, v17 + 1) + v17 + 1;
        if ( v18 > 0 && (*(_DWORD *)(v6 + 120) & 0x40000) == 0 )
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
        v14 = v21;
      }
      else
      {
        v18 = 0;
        *((_DWORD *)v14 + 2) = 0;
      }
      if ( v18 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 1828));
        goto LABEL_34;
      }
      --*(_DWORD *)&v9[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v11 + 8) != -1073741670 )
      {
        if ( (*(_DWORD *)(v6 + 120) & 0x40000) != 0 )
        {
          *(_QWORD *)v14 = 0LL;
          *((_DWORD *)v11 + 8) = 259;
          if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
            goto LABEL_29;
          v19 = v9;
          if ( !*(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
          {
            (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(v6 + 3792) + 224LL))(
              *(_QWORD *)(v6 + 24),
              v9);
            goto LABEL_34;
          }
        }
        else
        {
          if ( !*(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
          {
            *((_DWORD *)v11 + 8) = 0;
            goto LABEL_34;
          }
          *(_QWORD *)v14 = 0LL;
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
          if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
          {
LABEL_29:
            NDIS_FREE_XFER_DATA_PACKET(v9);
            goto LABEL_34;
          }
          v19 = v9;
        }
        ndisReturnPacketToNetBufferList(v6, v19);
      }
LABEL_34:
      ++a2;
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v7 + 288), &LockState);
}
