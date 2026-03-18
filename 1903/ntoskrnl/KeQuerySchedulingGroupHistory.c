/*
 * XREFs of KeQuerySchedulingGroupHistory @ 0x140083BE4
 * Callers:
 *     PspQueryRateControlHistory @ 0x1406154EC (PspQueryRateControlHistory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQuerySchedulingGroupHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  LARGE_INTEGER v12; // rax
  unsigned __int64 v13; // r8
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v8 = KeNumberProcessors_0;
  *a2 = 0LL;
  if ( v8 )
  {
    v9 = (__int64 *)(a1 + 176);
    v10 = v8;
    do
    {
      v11 = *v9;
      v9 += 53;
      *a2 |= v11;
      --v10;
    }
    while ( v10 );
  }
  *a3 = PsDfssGenerationLengthMS;
  v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v13 = (unsigned int)*a3;
  v14 = v12;
  v15 = 1000 * (v12.QuadPart - *(_QWORD *)(a1 + 24));
  *(LARGE_INTEGER *)(a1 + 24) = v14;
  *a4 = v15 / PerformanceFrequency.QuadPart / v13;
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
