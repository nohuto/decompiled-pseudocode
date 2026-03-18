/*
 * XREFs of ExTryToConvertFastResourceSharedToExclusive @ 0x140339D40
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpTryUpgradeResource @ 0x14033E764 (ExpTryUpgradeResource.c)
 */

char __fastcall ExTryToConvertFastResourceSharedToExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  bool v3; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v7; // r9
  char v8; // al
  unsigned __int8 v9; // bp
  char v10; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v7 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v7 != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v7, 0LL);
  if ( *(_QWORD *)(a2 + 24) != BugCheckParameter2 )
    KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
  v8 = *(_BYTE *)(a2 + 17);
  if ( (v8 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (v8 & 4) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(v8 & 4) << 14, 0LL);
  if ( !*(_BYTE *)(a2 + 18) || *(_QWORD *)(a2 + 40) != a2 + 40 )
    KeBugCheckEx(0x1C6u, 0x13uLL, BugCheckParameter2, 0LL, 0LL);
  v9 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v9 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v10 = ExpTryUpgradeResource(BugCheckParameter2);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v10 )
    *(_BYTE *)(a2 + 17) |= 4u;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v9);
  return v10;
}
