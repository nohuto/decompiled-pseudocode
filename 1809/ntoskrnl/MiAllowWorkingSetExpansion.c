/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x1400F32F4
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406798D8 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x140715B68 (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x14075E88C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x1400F3364 (MiReturnWsToExpansionList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertSessionWorkingSet @ 0x1401B4EE4 (MiInsertSessionWorkingSet.c)
 */

__int64 __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14043AE80, &LockHandle);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 1 )
    MiInsertSessionWorkingSet(a1 - 3008);
  MiReturnWsToExpansionList(a1, 0LL);
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
