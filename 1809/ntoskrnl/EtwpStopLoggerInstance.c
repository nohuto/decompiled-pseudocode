/*
 * XREFs of EtwpStopLoggerInstance @ 0x1406CCAF4
 * Callers:
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     ExCancelTimer @ 0x1400FA350 (ExCancelTimer.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpStackRundown @ 0x140315BC4 (EtwpStackRundown.c)
 *     EtwpDisableTraceProviders @ 0x1405C3530 (EtwpDisableTraceProviders.c)
 *     EtwpSendSessionNotification @ 0x140659F28 (EtwpSendSessionNotification.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14072703C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwpLogPmcCounterRundown @ 0x1408BFCF4 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpStopLoggerInstance(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v6; // eax
  __int64 v8; // rax
  ULONG_PTR v9; // rcx

  v2 = *(_QWORD *)(a1 + 1080);
  _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x40u);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
    EtwpUpdateLoggerGroupMasks(a1, 0LL);
  v3 = *(_DWORD *)(a1 + 832);
  if ( (v3 & 0x20) == 0 )
  {
    EtwpDisableTraceProviders(v2, *(_DWORD *)a1);
    v3 = *(_DWORD *)(a1 + 832);
  }
  if ( (v3 & 0x4000) != 0 )
  {
    v4 = 0;
    while ( *(unsigned __int16 *)(v2 + 2LL * v4 + 4048) != *(_DWORD *)a1 )
    {
      if ( ++v4 >= 8 )
        goto LABEL_11;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v2 + 432, 0LL);
    *(_BYTE *)(v2 + 4064) &= ~(1 << v4);
    memset((void *)(32LL * v4 + v2 + 152), 0, 0x20uLL);
    *(_WORD *)(v2 + 2LL * v4 + 4048) = 0;
    *(_QWORD *)(v2 + 440) = 0LL;
    ExReleasePushLockEx(v2 + 432, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
LABEL_11:
  if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 832);
    if ( (v6 & 0x800) != 0 )
    {
      EtwpLogPmcCounterRundown(a1, *(unsigned int *)a1);
      v6 = *(_DWORD *)(a1 + 832);
    }
    if ( (v6 & 0x1000000) != 0 )
      EtwpStackRundown(*(_QWORD *)(a1 + 992), v2, *(_DWORD *)a1);
  }
  if ( !_InterlockedExchange((volatile __int32 *)(a1 + 336), 0) )
    return 2147483685LL;
  v8 = *(_QWORD *)(a1 + 1064);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
      ExCancelTimer(v9, 0LL);
  }
  *(_QWORD *)(*(_QWORD *)(v2 + 456) + 8LL * *(unsigned int *)a1) = a1 | 1;
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
