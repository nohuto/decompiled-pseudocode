/*
 * XREFs of ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00888A0
 * Callers:
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00882F0 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00876B0 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00AEFB8 (ndisReturnNetBufferListsInternal.c)
 */

void __fastcall ndisMCoIndicateReceiveNetBufferListsToNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v9; // r14
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1[9];
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 120) + 400LL);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v9 + 288), &LockState, 0);
  *(_BYTE *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(*(_QWORD *)(v4 + 16) + 720LL)) = 1;
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)v9,
    a2,
    a3,
    a4,
    1);
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)(v9 + 8),
    a2,
    a3,
    a4,
    1);
  ndisCoIndicatePromiscNetBuffer(
    a1,
    *(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120),
    *(struct _NDIS_OPEN_BLOCK **)(v9 + 16),
    a2,
    a3,
    a4,
    1);
  if ( (*(_DWORD *)(v4 + 4) & 0x10) != 0 )
  {
    if ( (a4 & 2) == 0 )
      ndisReturnNetBufferListsInternal(*(struct _NDIS_MINIPORT_BLOCK **)(v4 + 120), a2);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _NET_BUFFER_LIST *, _QWORD, unsigned int))(v4 + 72))(
      *(_QWORD *)(*(_QWORD *)(v4 + 16) + 32LL),
      *(_QWORD *)(v4 + 24),
      a2,
      a3,
      a4);
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v9 + 288), &LockState);
}
