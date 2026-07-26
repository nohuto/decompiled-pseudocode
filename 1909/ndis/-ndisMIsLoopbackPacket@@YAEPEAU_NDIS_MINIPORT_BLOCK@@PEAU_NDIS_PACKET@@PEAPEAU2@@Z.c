/*
 * XREFs of ?ndisMIsLoopbackPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@PEAPEAU2@@Z @ 0x1C008977C
 * Callers:
 *     ndisMLoopbackPacketX @ 0x1C008B198 (ndisMLoopbackPacketX.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032744 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisPacketSize @ 0x1C0032770 (NdisPacketSize.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C007898C (-NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z.c)
 *     NdisAllocateBuffer @ 0x1C0080B90 (NdisAllocateBuffer.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C008A33C (ndisMCopyFromPacketToBuffer.c)
 *     ethFindMulticast @ 0x1C00A2F2C (ethFindMulticast.c)
 */

bool __fastcall ndisMIsLoopbackPacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PACKET *a2,
        struct _NDIS_PACKET **a3)
{
  _MDL *Head; // rcx
  char v5; // si
  char *MappedSystemVa; // rbx
  _X_FILTER *EthDB; // rcx
  char v11; // bl
  _X_FILTER *v12; // r14
  char v13; // r15
  unsigned int MiniportPacketFilter; // r13d
  bool v15; // zf
  UINT Length; // r14d
  UINT v17; // eax
  __int64 v18; // r13
  UINT v19; // eax
  char *PoolWithTag; // rax
  char *v21; // r15
  char *v22; // rax
  struct _NDIS_PACKET *v23; // rbx
  unsigned int v24; // r15d
  int v25; // edx
  struct _MDL *v26; // r15
  unsigned __int16 v27; // r13
  char *v28; // [rsp+30h] [rbp-10h]
  KSPIN_LOCK *LockState; // [rsp+88h] [rbp+48h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+98h] [rbp+58h] BYREF

  Buffer = 0LL;
  LOWORD(LockState) = 0;
  Head = a2->Private.Head;
  v5 = 0;
  BYTE2(LockState) = 0;
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)Head->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( MappedSystemVa )
  {
    if ( a1->MediaType )
      return (a2->Private.Flags & 0x200) != 0;
    if ( (a1->Flags & 0x800000) != 0 )
    {
      if ( (*MappedSystemVa & 1) == 0
        && (EthDB = a1->EthDB, *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)&EthDB->AdapterAddress[2])
        && *(_WORD *)MappedSystemVa == *(_WORD *)EthDB->AdapterAddress )
      {
        v11 = 1;
        v5 = 1;
      }
      else
      {
        v11 = 1;
      }
      goto LABEL_35;
    }
    NdisAcquireRWLockRead(a1->EthDB->BindListLock, (PLOCK_STATE_EX)&LockState, 0);
    v12 = a1->EthDB;
    v13 = 0;
    v5 = 0;
    MiniportPacketFilter = v12->MiniportPacketFilter;
    if ( (*MappedSystemVa & 1) != 0 )
    {
      if ( *MappedSystemVa == -1
        && MappedSystemVa[1] == -1
        && MappedSystemVa[2] == -1
        && MappedSystemVa[3] == -1
        && MappedSystemVa[4] == -1
        && MappedSystemVa[5] == -1 )
      {
        v15 = (MiniportPacketFilter & 8) == 0;
LABEL_23:
        if ( v15 )
          goto LABEL_32;
        goto LABEL_31;
      }
      if ( (MiniportPacketFilter & 4) == 0 )
      {
        if ( (MiniportPacketFilter & 2) == 0 )
          goto LABEL_32;
        v15 = (unsigned __int8)ethFindMulticast(
                                 v12->NextNumAddresses,
                                 0LL,
                                 (unsigned __int8 *)v12->NextMCastAddressBuf,
                                 MappedSystemVa) == 0;
        goto LABEL_23;
      }
    }
    else
    {
      if ( *(_DWORD *)(MappedSystemVa + 2) != *(_DWORD *)&v12->AdapterAddress[2]
        || *(_WORD *)MappedSystemVa != *(_WORD *)v12->AdapterAddress )
      {
LABEL_32:
        v11 = v13;
        if ( (MiniportPacketFilter & 0xA0) != 0 )
          v11 = 1;
        NdisReleaseRWLock(v12->BindListLock, (PLOCK_STATE_EX)&LockState);
        if ( !v11 )
        {
LABEL_37:
          if ( v5 )
            a2->Private.NdisPacketFlags |= 4u;
          if ( v11 )
          {
            if ( a2->Private.ValidCounts )
            {
              Length = a2->Private.TotalLength;
            }
            else
            {
              NdisQueryPacket(a2, (unsigned int *)1, 0LL, 0LL, (unsigned int *)&LockState);
              Length = (unsigned int)LockState;
            }
            v17 = NdisPacketSize(0x20u);
            v18 = v17;
            v19 = Length + v17;
            if ( v19 >= Length )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x706C444Eu);
              v21 = PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, (unsigned int)v18);
                v22 = &v21[v18];
                v28 = &v21[v18];
                v23 = (struct _NDIS_PACKET *)&v21[48 * ndisPacketStackSize + 16];
                v24 = 0;
                if ( ndisPacketStackSize )
                {
                  do
                  {
                    *(_DWORD *)&v23[-1].ProtocolReserved[4] = v24;
                    NDIS_STACK_RESERVED_FROM_PACKET(v23, (struct _NDIS_STACK_RESERVED **)&LockState);
                    KeInitializeSpinLock(LockState + 3);
                    ++v24;
                  }
                  while ( v24 < ndisPacketStackSize );
                  v22 = v28;
                }
                *(_DWORD *)&v23[-1].ProtocolReserved[4] = -1;
                NdisAllocateBuffer((PNDIS_STATUS)&LockState, &Buffer, 0LL, v22, Length);
                v26 = Buffer;
                if ( !(_DWORD)LockState )
                {
                  v23->Private.Head = Buffer;
                  v23->Private.Tail = v26;
                  v23->Private.Pool = (void *)1886351180;
                  v27 = v18 - 48 * ndisPacketStackSize - 152;
                  v23->Private.NdisPacketOobOffset = v27;
                  *(_QWORD *)&v23->ProtocolReserved[v27] = v23;
                  ndisMCopyFromPacketToBuffer((_DWORD)a2, v25, Length, (_DWORD)v28, (__int64)&LockState);
                  if ( (_DWORD)LockState == Length )
                  {
                    if ( a3 )
                    {
                      *a3 = v23;
                      v23->Private.NdisPacketFlags |= 2u;
                      v23->Private.Flags = a2->Private.Flags & 0x80 | 0x100;
                    }
                    return v5;
                  }
                }
                ExFreePoolWithTag((char *)v23 - 48 * ndisPacketStackSize - 16, 0);
                if ( v26 )
                  IoFreeMdl(v26);
              }
            }
            *a3 = 0LL;
            return 0;
          }
          return (a2->Private.Flags & 0x200) != 0;
        }
LABEL_35:
        if ( (a2->Private.Flags & 0x200) != 0 )
          v5 = 1;
        goto LABEL_37;
      }
      v5 = 1;
    }
LABEL_31:
    v13 = 1;
    goto LABEL_32;
  }
  if ( a3 )
    *a3 = 0LL;
  return 0;
}
