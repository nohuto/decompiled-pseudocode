/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x1401218A8
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140121820 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140125CEC (KeWakeWaitChain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebp
  char v4; // si
  unsigned __int8 OldIrql; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v2 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += v3;
  v4 = *(_BYTE *)(a1 + 27);
  v9 = v2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = KeWakeWaitChain(&v9, 0LL, 0LL);
  if ( v3 && v4 )
    result = ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
  __incgsdword(0x6374u);
  return result;
}
