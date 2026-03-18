/*
 * XREFs of MiStoreSetPageFileRunEvicted @ 0x140158F04
 * Callers:
 *     MiStoreEvictPageFile @ 0x140131E08 (MiStoreEvictPageFile.c)
 * Callees:
 *     RtlSetBits @ 0x1400076F0 (RtlSetBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x1400CF210 (RtlClearBits.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreSetPageFileRunEvicted(__int64 a1, ULONG a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), a2, v3);
  v6 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 200) -= v3;
  RtlClearBits((PRTL_BITMAP)(v6 + 8), a2, v3);
  *(_QWORD *)(a1 + 24) += v3;
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
