/*
 * XREFs of PopTimeoutWakeTracking @ 0x1401584EC
 * Callers:
 *     PopWakeSourceTimeoutWorker @ 0x1406E2270 (PopWakeSourceTimeoutWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PopWakeInfoDereference @ 0x1401586E0 (PopWakeInfoDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFinalizeWakeInfo @ 0x1406E2400 (PopFinalizeWakeInfo.c)
 */

__int64 __fastcall PopTimeoutWakeTracking(__int64 *a1)
{
  __int16 *v2; // rsi
  unsigned __int8 OldIrql; // di
  __int64 v4; // rax
  unsigned __int8 v5; // di
  unsigned __int8 v6; // bl
  __int64 result; // rax
  __int64 i; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v11; // rcx
  __int16 v12; // [rsp+30h] [rbp-30h] BYREF
  char v13; // [rsp+32h] [rbp-2Eh]
  int v14; // [rsp+34h] [rbp-2Ch]
  _QWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  v12 = 1;
  v15[1] = v15;
  v13 = 6;
  v15[0] = v15;
  v2 = 0LL;
  v14 = 0;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( a1 == (__int64 *)PopCurrentWakeInfo )
  {
    PopCurrentWakeInfo = 0LL;
    PopPendingWakeInfo = (__int64)a1;
    if ( PopWakeSourceWorkInProgress )
    {
      for ( i = qword_140419638; (PVOID *)i != &PopWakeSourceWorkList; i = *(_QWORD *)(i + 8) )
      {
        if ( *(__int64 **)(i + 24) == a1 )
        {
          *(_QWORD *)(i + 32) = &v12;
          v2 = &v12;
          break;
        }
      }
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
