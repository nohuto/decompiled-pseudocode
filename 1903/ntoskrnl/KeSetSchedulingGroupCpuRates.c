/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x1400E7FAC
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400E807C (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400E82F4 (KiUpdateMinimumWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400E84C4 (KiUpdateCpuTargetByRate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetSchedulingGroupCpuRates(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 4LL);
  if ( (v7 & 1) == 0 )
  {
    LOBYTE(v5) = 1;
    *(_DWORD *)(v6 + 4) = v7 | 1;
    KiUpdateMinimumWeight(0LL, v5, *(_QWORD *)(*a2 + 96LL));
    KiAssignSchedulingGroupWeights(0LL, 0LL);
    v6 = *a2;
  }
  LOBYTE(v5) = 1;
  *(_QWORD *)v6 = *a3;
  KiUpdateCpuTargetByRate(*a2, v5);
  LOBYTE(v8) = 1;
  if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, v8, *(_QWORD *)(*a2 + 96LL)) )
    KiAssignSchedulingGroupWeights(1LL, 0LL);
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
