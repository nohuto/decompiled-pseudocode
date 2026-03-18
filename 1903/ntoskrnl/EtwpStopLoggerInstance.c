/*
 * XREFs of EtwpStopLoggerInstance @ 0x1406B759C
 * Callers:
 *     EtwpStopTrace @ 0x1406B4F7C (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     ExCancelTimer @ 0x140113CD0 (ExCancelTimer.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpStackRundown @ 0x1403343C8 (EtwpStackRundown.c)
 *     EtwpDisableTraceProviders @ 0x140665C08 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x1406B6324 (EtwpSendSessionNotification.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1407076A8 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x1408FB780 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  int v4; // eax
  ULONG_PTR v5; // rcx
  unsigned int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v1 = *(_QWORD *)(a1 + 1112);
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  v3 = *(_DWORD *)(a1 + 832);
  if ( (v3 & 0x20) == 0 )
  {
    EtwpDisableTraceProviders(v1, *(_DWORD *)a1);
    v3 = *(_DWORD *)(a1 + 832);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v7 = 0;
    while ( *(unsigned __int16 *)(v1 + 2LL * v7 + 4048) != *(_DWORD *)a1 )
    {
      if ( ++v7 >= 8 )
        goto LABEL_6;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 432, 0LL);
    *(_BYTE *)(v1 + 4064) &= ~(1 << v7);
    memset((void *)(32LL * v7 + v1 + 152), 0, 0x20uLL);
    *(_WORD *)(v1 + 2LL * v7 + 4048) = 0;
    *(_QWORD *)(v1 + 440) = 0LL;
    ExReleasePushLockEx(v1 + 432, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 832);
    if ( (v4 & 0x800) != 0 )
    {
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
      v4 = *(_DWORD *)(a1 + 832);
    }
    if ( (v4 & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 992), v1, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  v5 = *(_QWORD *)(a1 + 1088);
  if ( v5 )
    ExCancelTimer(v5, 0LL);
  *(_QWORD *)(*(_QWORD *)(v1 + 456) + 8LL * *(unsigned int *)a1) = a1 | 1;
  if ( KeGetEffectiveIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  EtwpSendSessionNotification(a1, 2u, 0);
  return 0LL;
}
