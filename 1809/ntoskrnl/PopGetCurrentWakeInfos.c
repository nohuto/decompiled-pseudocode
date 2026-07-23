/*
 * XREFs of PopGetCurrentWakeInfos @ 0x140158704
 * Callers:
 *     PopGetWakeSource @ 0x1406E2284 (PopGetWakeSource.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(_QWORD *a1)
{
  _QWORD *v2; // rsi
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  __int64 i; // rdx
  unsigned __int8 OldIrql; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &v10);
  v3 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)PopWakeInfoCount, 0x206D654Du);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = PopWakeInfoList;
      for ( i = 0LL; (__int64 *)v5 != &PopWakeInfoList && (unsigned int)i < v3; i = (unsigned int)(i + 1) )
      {
        PoolWithTag[i] = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        v5 = *(_QWORD *)v5;
      }
    }
    else
    {
      v3 = 0;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v10);
  OldIrql = v10.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10.OldIrql < 2u )
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
