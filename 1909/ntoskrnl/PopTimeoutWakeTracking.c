/*
 * XREFs of PopTimeoutWakeTracking @ 0x140168984
 * Callers:
 *     PopWakeSourceTimeoutWorker @ 0x140729B00 (PopWakeSourceTimeoutWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopWakeInfoDereference @ 0x140168B94 (PopWakeInfoDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFinalizeWakeInfo @ 0x140729B14 (PopFinalizeWakeInfo.c)
 */

__int64 __fastcall PopTimeoutWakeTracking(__int64 *a1)
{
  _DWORD *v2; // rsi
  unsigned __int8 OldIrql; // di
  __int64 v4; // rax
  unsigned __int8 v5; // di
  unsigned __int8 v6; // bl
  __int64 result; // rax
  __int64 i; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v13[2]; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF

  v13[0] = 393217;
  v13[1] = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  v14[1] = v14;
  v14[0] = v14;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( a1 == (__int64 *)PopCurrentWakeInfo )
  {
    PopCurrentWakeInfo = 0LL;
    PopPendingWakeInfo = (__int64)a1;
    if ( PopWakeSourceWorkInProgress )
    {
      for ( i = qword_140443EB8; (PVOID *)i != &PopWakeSourceWorkList; i = *(_QWORD *)(i + 8) )
      {
        if ( *(__int64 **)(i + 24) == a1 )
        {
          *(_QWORD *)(i + 32) = v13;
          v2 = v13;
          break;
        }
      }
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
    if ( v2 )
      KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( a1 == (__int64 *)PopPendingWakeInfo )
    {
      v4 = PopWakeInfoList;
      if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
        __fastfail(3u);
      ++PopWakeInfoCount;
      PopPendingWakeInfo = 0LL;
      a1[1] = (__int64)&PopWakeInfoList;
      *a1 = v4;
      *(_QWORD *)(v4 + 8) = a1;
      PopWakeInfoList = (__int64)a1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v5 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v10 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v10);
      }
      __writecr8(v5);
      PopFinalizeWakeInfo(a1);
      KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    }
  }
  PopWakeInfoDereference(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v6 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
