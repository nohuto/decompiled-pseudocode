/*
 * XREFs of MiAttachThreadDone @ 0x1400E2224
 * Callers:
 *     MiUnlockStealVm @ 0x1400A1594 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1401308C4 (MmQueryCommitReleaseState.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC8F4 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v7 = *(_DWORD *)(a1 + 184);
  BYTE1(v7) = BYTE1(v7) & 0xF | (16 * ((BYTE1(v7) >> 4) - 1));
  *(_WORD *)(a1 + 184) = v7;
  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    KeSignalGate(v2, 1LL);
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
