/*
 * XREFs of FsRtlPrivateCheckWaitingLocks @ 0x14012F070
 * Callers:
 *     FsRtlFastUnlockSingleShared @ 0x14008C1B8 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14008C4C0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14012ED34 (FsRtlPrivateFastUnlockAll.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlPrivateInsertLock @ 0x14008D08C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x14008D384 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IoGetRequestorProcess @ 0x14010E000 (IoGetRequestorProcess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140122504 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCompleteLockIrpReal @ 0x14013FB90 (FsRtlCompleteLockIrpReal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlPrivateRemoveLock @ 0x14026F804 (FsRtlPrivateRemoveLock.c)
 */

void __fastcall FsRtlPrivateCheckWaitingLocks(_QWORD *a1, KSPIN_LOCK *a2, KIRQL a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v7; // rbx
  __int64 v8; // r13
  char v9; // al
  char v10; // r15
  char v11; // al
  char v12; // bl
  __int64 v13; // r15
  char inserted; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+44h] [rbp-1Ch]
  PVOID Object; // [rsp+48h] [rbp-18h]
  PEPROCESS RequestorProcess; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]
  int v23; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h]

  v3 = (_QWORD *)a2[3];
  v4 = a2 + 3;
  while ( v3 )
  {
    v7 = v3[3];
    v24 = v7;
    v8 = *(_QWORD *)(v7 + 184);
    *(_QWORD *)&v16 = *(_QWORD *)(v8 + 24);
    *((_QWORD *)&v16 + 1) = **(_QWORD **)(v8 + 8);
    v21 = *((_QWORD *)&v16 + 1) + v16 - 1;
    Object = *(PVOID *)(v8 + 48);
    RequestorProcess = IoGetRequestorProcess((PIRP)v7);
    v18 = *(_DWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
      v17 = 1;
      v9 = FsRtlPrivateCheckForExclusiveLockAccess((__int64)a2, (unsigned __int64 *)&v16);
    }
    else
    {
      v17 = 0;
      v9 = FsRtlPrivateCheckForSharedLockAccess((__int64)a2, (__int64)&v16);
    }
    v10 = v9;
    if ( !v9 )
      goto LABEL_21;
    *(_BYTE *)(v7 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    v11 = v10;
    v12 = 0;
    v13 = v24;
    if ( !*(_BYTE *)(v24 + 68) )
      v12 = v11;
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v24 + 69));
    if ( v12 )
    {
      inserted = FsRtlPrivateInsertLock(a1, *(_QWORD *)(v8 + 48), &v16);
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
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      FsRtlCompleteLockIrpReal(a1[1], v3[2], v13, inserted == 0 ? 0xC000009A : 0, &v23, Object);
      if ( inserted )
      {
        if ( v23 < 0 )
          FsRtlPrivateRemoveLock(a1, &v16, 0LL);
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
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
