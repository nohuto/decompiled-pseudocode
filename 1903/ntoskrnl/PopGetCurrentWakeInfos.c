/*
 * XREFs of PopGetCurrentWakeInfos @ 0x14015BD60
 * Callers:
 *     PopGetWakeSource @ 0x14071D570 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(_QWORD *a1)
{
  _QWORD *v2; // rsi
  unsigned int v3; // ebx
  unsigned __int8 OldIrql; // di
  __int64 result; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v7; // rcx
  __int64 i; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  v3 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)PopWakeInfoCount, 0x206D654Du);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = PopWakeInfoList;
      for ( i = 0LL; (__int64 *)v7 != &PopWakeInfoList && (unsigned int)i < v3; i = (unsigned int)(i + 1) )
      {
        PoolWithTag[i] = v7;
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 16));
        v7 = *(_QWORD *)v7;
      }
    }
    else
    {
      v3 = 0;
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
  result = v3;
  *a1 = v2;
  return result;
}
