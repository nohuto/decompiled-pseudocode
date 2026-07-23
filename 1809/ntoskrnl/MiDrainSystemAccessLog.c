/*
 * XREFs of MiDrainSystemAccessLog @ 0x14000FF28
 * Callers:
 *     MiCleanWorkingSet @ 0x14000FEA4 (MiCleanWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiDeleteSessionAddressSpace @ 0x1401543C0 (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140173C88 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 SharedVm; // rax
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  result = MiGetSharedVm(a1, a2);
  v5 = result;
  if ( *(_QWORD *)(result + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    SharedVm = MiGetSharedVm(a1, v4);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
    v9 = *(void **)(v5 + 48);
    if ( v9 )
    {
      MiEmptyPageAccessLog(v9);
      *(_QWORD *)(v5 + 48) = 0LL;
    }
    v10 = MiGetSharedVm(a1, v8);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 40));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
