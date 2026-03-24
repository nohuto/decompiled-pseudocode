/*
 * XREFs of PopFxIdleWorkerTail @ 0x1400FEA08
 * Callers:
 *     PopFxIdleWorker @ 0x1400FE8F4 (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140131F10 (PoFxCompleteIdleCondition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x1400FE230 (PopFxActivateComponentWorker.c)
 *     PopFxAddRefDevice @ 0x1400FE2C8 (PopFxAddRefDevice.c)
 *     PopFxProcessWork @ 0x1400FE390 (PopFxProcessWork.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400FEBD0 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x1400FEC4C (PopFxCompleteComponentActivation.c)
 *     PoFxIdleComponent @ 0x1400FECF0 (PoFxIdleComponent.c)
 *     PpmInterlockedUpdateTimeNoFence @ 0x1400FEE80 (PpmInterlockedUpdateTimeNoFence.c)
 *     PopFxUpdateAccountingActiveTime @ 0x1400FEEB4 (PopFxUpdateAccountingActiveTime.c)
 *     PopPluginComponentActive @ 0x1400FF3B8 (PopPluginComponentActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxIdleWorkerTail(struct _IO_REMOVE_LOCK *BugCheckParameter2, unsigned int a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  KIRQL v8; // bp
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned int i; // edi
  __int64 result; // rax
  KIRQL v13; // bp
  __int64 v14; // r8
  struct _LIST_ENTRY *Flink; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx

  v6 = *((_QWORD *)&BugCheckParameter2[25].Common.RemoveEvent.Header.WaitListHead.Flink->Flink + a2);
  v7 = MEMORY[0xFFFFF78000000008];
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
  if ( *(int *)(v6 + 216) > 0 )
  {
    PopFxUpdateAccountingActiveTime(v6 + 200, v7, 0LL);
    *(_BYTE *)(v6 + 208) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v8);
  PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[1].Common.RemoveEvent.Header.WaitListHead.Flink, a2, 0LL);
  PpmInterlockedUpdateTimeNoFence(&BugCheckParameter2[15].Common.RemoveEvent, v7, 0LL);
  _m_prefetchw((const void *)(v6 + 88));
  if ( _InterlockedOr((volatile signed __int32 *)(v6 + 88), 0) == 0x40000000 )
  {
    if ( (unsigned __int8)PopPluginComponentActive(BugCheckParameter2, a2, v9, a3) == 1 )
      PopFxProcessWork(0LL, a3, v10);
    for ( i = 0; i < *(_DWORD *)(v6 + 172); ++i )
      PoFxIdleComponent(BugCheckParameter2, *(unsigned int *)(*(_QWORD *)(v6 + 176) + 8LL * i), 2LL);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 88), 0, 0x40000000);
    if ( (_DWORD)result != 0x40000000 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
      return PopFxActivateComponentWorker((ULONG_PTR)BugCheckParameter2, v6, 0, 0LL);
    }
  }
  else
  {
    PopFxAddRefDevice(BugCheckParameter2);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    _InterlockedAnd((volatile signed __int32 *)(v6 + 88), 0xBFFFFFFF);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 200));
    if ( *(int *)(v6 + 216) > 0 )
    {
      *(_QWORD *)(v6 + 224) = v7;
      *(_BYTE *)(v6 + 208) = 1;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 200));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    __writecr8(v13);
    LOBYTE(v14) = 1;
    PopDiagTraceFxComponentLogicalCondition(BugCheckParameter2[1].Common.RemoveEvent.Header.WaitListHead.Flink, a2, v14);
    Flink = BugCheckParameter2[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    if ( Flink )
      ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD))Flink)(
        BugCheckParameter2[5].Common.RemoveEvent.Header.WaitListHead.Blink,
        a2);
    return PopFxCompleteComponentActivation((ULONG_PTR)BugCheckParameter2);
  }
  return result;
}
