/*
 * XREFs of WheapDeferredRecoveryServiceDpcRoutine @ 0x140320F70
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapDeferredRecoveryServiceDpcRoutine(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 v3; // rtt
  __int64 v4; // rtt
  char v5; // al
  KIRQL v6; // al
  KIRQL v7; // di
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v9; // eax
  bool v10; // cc
  __int64 result; // rax

  v2 = WheaDrsList;
  v3 = WheaDrsList;
  if ( v3 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) )
  {
    do
    {
      _mm_pause();
      v2 = WheaDrsList;
      v4 = WheaDrsList;
    }
    while ( v4 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) );
  }
  v5 = *(_BYTE *)(v2 + 24);
  if ( v5 == 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v2 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 16))(v2, *(_QWORD *)(v2 + 32));
  }
  else if ( !v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink);
    *(_QWORD *)v2 = WheaPassiveDrsList;
    v7 = v6;
    WheaPassiveDrsList = v2;
    KxReleaseSpinLock((PKSPIN_LOCK)&WheapDispatchPtr.DeviceQueue.DeviceListHead.Blink);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v7);
    if ( _InterlockedIncrement(&WheaPassiveDrsItemsToProcess) == 1 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&WheapDispatchPtr.DeviceQueue.32, CriticalWorkQueue);
  }
  v9 = _InterlockedExchangeAdd(&WheaDrsItemsToProcess, 0xFFFFFFFF);
  v10 = v9 <= 1;
  result = (unsigned int)(v9 - 1);
  if ( !v10 )
    return KiInsertQueueDpc(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
  return result;
}
