/*
 * XREFs of ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C00893A4
 * Callers:
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0089940 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ethFindMulticast @ 0x1C00A2D5C (ethFindMulticast.c)
 */

void __fastcall ndisMIsLoopbackNetBuffer(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER *a2,
        struct _NET_BUFFER_LIST *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _MDL *CurrentMdl; // rcx
  char v7; // bp
  unsigned __int8 v8; // di
  char *MappedSystemVa; // rbx
  unsigned __int8 *v13; // r15
  char *v14; // rbx
  _X_FILTER *EthDB; // rcx
  _X_FILTER *v16; // rsi
  unsigned int MiniportPacketFilter; // r14d
  bool v18; // zf
  struct _LOCK_STATE_EX LockState; // [rsp+68h] [rbp+10h] BYREF

  CurrentMdl = a2->CurrentMdl;
  v7 = 0;
  *(_WORD *)&LockState.OldIrql = 0;
  v8 = 0;
  LockState.Flags = 0;
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  v13 = a5;
  *a4 = 0;
  *v13 = 0;
  if ( MappedSystemVa )
  {
    v14 = &MappedSystemVa[a2->CurrentMdlOffset];
    if ( a1->MiniportMediaType )
      goto LABEL_34;
    if ( (a1->Flags & 0x800000) != 0 )
    {
      if ( (*v14 & 1) == 0
        && (EthDB = a1->EthDB, *(_DWORD *)(v14 + 2) == *(_DWORD *)&EthDB->AdapterAddress[2])
        && *(_WORD *)v14 == *(_WORD *)EthDB->AdapterAddress )
      {
        v8 = 1;
        v7 = 1;
      }
      else
      {
        v8 = 1;
      }
LABEL_32:
      if ( (a3->Flags & 0x200) != 0 )
        v7 = 1;
LABEL_36:
      *a4 = v8;
      *v13 = v7;
      return;
    }
    NdisAcquireRWLockRead(a1->EthDB->BindListLock, &LockState, 0);
    v16 = a1->EthDB;
    v8 = 0;
    v7 = 0;
    MiniportPacketFilter = v16->MiniportPacketFilter;
    if ( (*v14 & 1) != 0 )
    {
      if ( *v14 == -1 && v14[1] == -1 && v14[2] == -1 && v14[3] == -1 && v14[4] == -1 && v14[5] == -1 )
      {
        v18 = (MiniportPacketFilter & 8) == 0;
LABEL_20:
        if ( v18 )
          goto LABEL_29;
        goto LABEL_28;
      }
      if ( (MiniportPacketFilter & 4) == 0 )
      {
        if ( (MiniportPacketFilter & 2) == 0 )
          goto LABEL_29;
        v18 = (unsigned __int8)ethFindMulticast(
                                 v16->NextNumAddresses,
                                 0LL,
                                 (unsigned __int8 *)v16->NextMCastAddressBuf,
                                 v14) == 0;
        goto LABEL_20;
      }
    }
    else
    {
      if ( *(_DWORD *)(v14 + 2) != *(_DWORD *)&v16->AdapterAddress[2] || *(_WORD *)v14 != *(_WORD *)v16->AdapterAddress )
      {
LABEL_29:
        if ( (MiniportPacketFilter & 0xA0) != 0 )
          v8 = 1;
        NdisReleaseRWLock(v16->BindListLock, &LockState);
        if ( v8 )
          goto LABEL_32;
LABEL_34:
        if ( (a3->Flags & 0x200) != 0 )
          v8 = 1;
        goto LABEL_36;
      }
      v7 = 1;
    }
LABEL_28:
    v8 = 1;
    goto LABEL_29;
  }
}
