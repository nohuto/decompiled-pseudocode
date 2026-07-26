/*
 * XREFs of ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087C90
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0087AD0 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMAllocSGList @ 0x1C00790F0 (ndisMAllocSGList.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00878A0 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 */

void __fastcall ndisCoSendPacketsToNdisPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r15
  struct _NDIS_PACKET **v5; // rbx
  int v7; // r13d
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  struct _NDIS_PACKET **v10; // r12
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  struct _NDIS_PACKET *v12; // rsi
  _MDL *Head; // rbx
  PVOID MappedSystemVa; // rax
  struct _NDIS_STACK_RESERVED *v15; // rcx
  __int64 v16; // rax
  struct _NDIS_STACK_RESERVED *v17; // [rsp+30h] [rbp-58h] BYREF
  _X_FILTER *EthDB; // [rsp+38h] [rbp-50h]
  struct _LOCK_STATE_EX LockState; // [rsp+90h] [rbp+8h] BYREF
  struct _NDIS_PACKET **v20; // [rsp+98h] [rbp+10h]
  unsigned int v21; // [rsp+A0h] [rbp+18h]
  unsigned int v22; // [rsp+A8h] [rbp+20h]

  v21 = a3;
  v20 = a2;
  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v5 = a2;
  EthDB = v3->EthDB;
  NdisAcquireRWLockRead(EthDB->BindListLock, &LockState, 0);
  v7 = 0;
  v8 = 0;
  v22 = 0;
  v9 = 0;
  if ( !a3 )
    goto LABEL_26;
  v10 = v5;
  do
  {
    v11 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
    v12 = *v10;
    if ( v11->PmodeOpens )
      ndisCoIndicatePromiscPacket(a1, v11, v3->OpenQueue, *v10, 0);
    ++*(_DWORD *)&v12[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v12, &v17);
    if ( (v3->SendFlags & 2) == 0 )
    {
      Head = v12->Private.Head;
      v7 = 0;
      while ( Head )
      {
        if ( (Head->MdlFlags & 5) != 0 )
          MappedSystemVa = Head->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, 0x40000020u);
        if ( !MappedSystemVa )
        {
          v5 = v20;
          v7 = -1073741670;
          goto LABEL_15;
        }
        Head = Head->Next;
      }
LABEL_16:
      if ( (v3->Flags & 0x40) != 0 )
      {
        v15 = v17;
        *(_QWORD *)v17 = a1[10];
        *((_QWORD *)v15 + 1) = a1;
        ndisMAllocSGList(v3, v12);
      }
      else
      {
        ++v8;
      }
      v16 = v22;
      goto LABEL_23;
    }
LABEL_15:
    if ( !v7 )
      goto LABEL_16;
    ((void (__fastcall *)(__int64, _QWORD *, struct _NDIS_PACKET *))a1[34])(3221225626LL, a1, v12);
    if ( v8 )
    {
      ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &v5[v22], v8);
      v8 = 0;
    }
    v16 = v9 + 1;
    v22 = v9 + 1;
LABEL_23:
    v5 = v20;
    ++v9;
    ++v10;
  }
  while ( v9 < v21 );
  if ( v8 )
    ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &v20[v16], v8);
LABEL_26:
  NdisReleaseRWLock(EthDB->BindListLock, &LockState);
}
