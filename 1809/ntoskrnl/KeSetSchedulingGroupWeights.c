/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x140115D7C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1402E9948 (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x140115F1C (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x140116198 (KiUpdateMinimumWeight.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetSchedulingGroupWeights(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1;
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &v16);
  if ( (_DWORD)v4 )
  {
    v7 = a2;
    v8 = a3 - a2;
    do
    {
      v9 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
      if ( (v9 & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v7 + 4LL) = v9 & 0xFFFFFFFE;
        if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, 0LL, *(_QWORD *)(*(_QWORD *)v7 + 96LL)) )
          KiAssignSchedulingGroupWeights(1LL, 0LL);
      }
      v10 = *(_QWORD **)v7;
      v11 = *(_QWORD *)(v8 + v7);
      v7 += 8LL;
      *v10 = v11;
      --v4;
    }
    while ( v4 );
  }
  LOBYTE(v6) = 1;
  KiUpdateMinimumWeight(0LL, v6, *(_QWORD *)(*(_QWORD *)a2 + 96LL));
  LOBYTE(v12) = 1;
  KiAssignSchedulingGroupWeights(0LL, v12);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v16);
  OldIrql = v16.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
