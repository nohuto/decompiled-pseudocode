/*
 * XREFs of MiStoreSetPageFileRunEvicted @ 0x140156F48
 * Callers:
 *     MiStoreEvictPageFile @ 0x140137F68 (MiStoreEvictPageFile.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreSetPageFileRunEvicted(__int64 a1, ULONG a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), a2, v4);
  v6 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 200) -= v4;
  RtlClearBits((PRTL_BITMAP)(v6 + 8), a2, v4);
  *(_QWORD *)(a1 + 24) += v4;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
