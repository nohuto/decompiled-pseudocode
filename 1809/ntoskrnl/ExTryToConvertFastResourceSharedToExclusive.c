/*
 * XREFs of ExTryToConvertFastResourceSharedToExclusive @ 0x14031B850
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExpTryUpgradeResource @ 0x14031F48C (ExpTryUpgradeResource.c)
 */

char __fastcall ExTryToConvertFastResourceSharedToExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v7; // r9
  char v8; // al
  unsigned __int8 v9; // bp
  char v10; // si
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v13[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
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
  v13[0] = 0LL;
  v13[1] = (volatile signed __int64 *)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)v13, (volatile __int64 *)(BugCheckParameter2 + 96), a3);
  v10 = ExpTryUpgradeResource(BugCheckParameter2);
  KxReleaseQueuedSpinLock(v13);
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
