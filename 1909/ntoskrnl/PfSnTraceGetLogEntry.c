/*
 * XREFs of PfSnTraceGetLogEntry @ 0x1400D243C
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x1400D1F14 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x1400D2034 (PfSnCheckLogSequenceNumber.c)
 *     PfSnTraceTimerRoutine @ 0x1400D44B0 (PfSnTraceTimerRoutine.c)
 *     PfSnLogHelper @ 0x14066A8AC (PfSnLogHelper.c)
 *     PfSnLogIdentifier @ 0x1406E5CCC (PfSnLogIdentifier.c)
 *     PfSnLogStreamDelete @ 0x1406EF624 (PfSnLogStreamDelete.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     PfSnTraceBufferAllocate @ 0x14012EB60 (PfSnTraceBufferAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v10; // r15
  KIRQL v11; // r14
  _QWORD *v12; // rcx
  struct _KPRCB *v13; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return (unsigned int)-1073741431;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 96);
    v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    v8 = 0;
    while ( v7 > 0 )
    {
      if ( v7 <= *(_DWORD *)(v6 + 20) )
      {
        *a3 = v6 + 16LL * (int)(v7 - a2) + 24;
        return v8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), -a2);
      v10 = (_QWORD *)PfSnTraceBufferAllocate();
      if ( !v10 )
      {
        v8 = -1073741670;
        goto LABEL_29;
      }
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      if ( *(_QWORD *)(a1 + 96) == v6 )
      {
        v12 = *(_QWORD **)(a1 + 112);
        if ( *v12 != a1 + 104 )
          __fastfail(3u);
        v10[1] = v12;
        *v10 = a1 + 104;
        *v12 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 128));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v11);
      }
      else
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 128));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          v13 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v13);
        }
        __writecr8(v11);
        ExFreePoolWithTag(v10, 0);
      }
      v6 = *(_QWORD *)(a1 + 96);
      v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    }
    v8 = -1073741675;
LABEL_29:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
  }
  return v8;
}
