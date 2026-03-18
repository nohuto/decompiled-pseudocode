/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x140104434
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140102F94 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140103950 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140103AD4 (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140102C64 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1401034F4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertLock @ 0x140103650 (FsRtlPrivateInsertLock.c)
 *     IoGetRequestorProcess @ 0x1401098D0 (IoGetRequestorProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     FsRtlCompleteLockIrpReal @ 0x140282A10 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateRemoveLock @ 0x140282FE4 (FsRtlPrivateRemoveLock.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(_QWORD *a1, KSPIN_LOCK *a2, KIRQL a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v7; // r13
  __int64 v8; // rbx
  char v9; // al
  char v10; // r15
  char v11; // bl
  char inserted; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  _OWORD v14[3]; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+58h]

  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    memset(v14, 0, sizeof(v14));
    v7 = v3[3];
    v8 = *(_QWORD *)(v7 + 184);
    v17 = v8;
    *(_QWORD *)&v14[0] = *(_QWORD *)(v8 + 24);
    *((_QWORD *)&v14[0] + 1) = **(_QWORD **)(v8 + 8);
    *((_QWORD *)&v14[2] + 1) = *((_QWORD *)&v14[0] + 1) + *(_QWORD *)&v14[0] - 1LL;
    *((_QWORD *)&v14[1] + 1) = *(_QWORD *)(v8 + 48);
    *(_QWORD *)&v14[2] = IoGetRequestorProcess((PIRP)v7);
    DWORD1(v14[1]) = *(_DWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
      LOBYTE(v14[1]) = 1;
      v9 = FsRtlPrivateCheckForExclusiveLockAccess((__int64)a2, (__int64)v14);
    }
    else
    {
      LOBYTE(v14[1]) = 0;
      v9 = FsRtlPrivateCheckForSharedLockAccess((__int64)a2, (__int64)v14);
    }
    v10 = v9;
    if ( !v9 )
      goto LABEL_21;
    *(_BYTE *)(v7 + 69) = KeAcquireQueuedSpinLock(7uLL);
    v11 = 0;
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    if ( !*(_BYTE *)(v7 + 68) )
      v11 = v10;
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v7 + 69));
    if ( v11 )
    {
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v17 + 48), v14);
      *v4 = *v3;
      if ( v3 == (_QWORD *)a2[4] )
        a2[4] = (KSPIN_LOCK)v4;
      KxReleaseSpinLock(a2);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(a3);
      ObfReferenceObjectWithTag(*((PVOID *)&v14[1] + 1), 0x746C6644u);
      FsRtlCompleteLockIrpReal(a1[1], v3[2], v7, inserted == 0 ? 0xC000009A : 0, &v16, *((_QWORD *)&v14[1] + 1));
      if ( inserted )
      {
        if ( v16 < 0 )
          FsRtlPrivateRemoveLock(a1, v14, 0LL);
      }
      ObfDereferenceObjectWithTag(*((PVOID *)&v14[1] + 1), 0x746C6644u);
      a3 = KeAcquireSpinLockRaiseToDpc(a2);
      v4 = a2 + 3;
      ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v3);
    }
    else
    {
LABEL_21:
      v4 = v3;
    }
    v3 = (_QWORD *)*v4;
  }
}
