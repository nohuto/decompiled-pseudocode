/*
 * XREFs of MiGetPrivatePageCount @ 0x1401438EC
 * Callers:
 *     MiAllocateCrcList @ 0x1406F8350 (MiAllocateCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  bool v8; // cc
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v3 = (_QWORD *)(a1 + 7808);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = v4[13];
    v6 = v2;
    v4 = (_QWORD *)*v4;
    v7 = v2 + v5;
    v8 = v7 <= v2;
    v2 = v7;
    if ( v8 )
      v2 = v6;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  return v2;
}
