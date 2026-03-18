/*
 * XREFs of CcNotifyOfMappedWriteComplete @ 0x140124764
 * Callers:
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcReleaseByteRangeFromWrite @ 0x140078FE8 (CcReleaseByteRangeFromWrite.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14007A700 (CcGetPartition.c)
 *     MmGetControlAreaPartition @ 0x140124950 (MmGetControlAreaPartition.c)
 *     CcIsFatalWriteError @ 0x14012E974 (CcIsFatalWriteError.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 */

__int64 __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v6; // rsi
  char v9; // r15
  __int64 Partition; // r14
  __int64 v11; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  v16 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0;
  Partition = CcGetPartition((_QWORD *)v4);
  if ( Partition != *(_QWORD *)(MmGetControlAreaPartition(a1) + 8) )
    KeBugCheckEx(0x34u, 0x12B6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a4 < 0 )
    v9 = (unsigned __int8)CcIsFatalWriteError(v4) == 0;
  v11 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v11 )
  {
    if ( a2 > v11 )
      goto LABEL_7;
    LODWORD(v6) = v11 - a2;
  }
  if ( (_DWORD)v6 )
    CcReleaseByteRangeFromWrite(v4, &v16, v6, 0LL, v9);
LABEL_7:
  if ( *(_QWORD *)(Partition + 744) != Partition + 744 )
    CcPostDeferredWrites(Partition);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  --*(_DWORD *)(v4 + 516);
  CcDecrementOpenCount(v4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
