/*
 * XREFs of MiFlushAllPagesWorker @ 0x140160C18
 * Callers:
 *     MiFlushAllPages @ 0x140160B64 (MiFlushAllPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400F3268 (MiStoreUpdateMemoryConditions.c)
 *     MiCanFlushMakeProgress @ 0x14015B8C8 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14015C314 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x140160BF4 (CcNotifyWriteBehindEx.c)
 */

_QWORD *__fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 776));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 780));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 784), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL);
    CcNotifyWriteBehindEx(2, *(_QWORD *)(a1 + 168));
    if ( *(_DWORD *)(a1 + 1144) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 8448) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 776), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 780), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
