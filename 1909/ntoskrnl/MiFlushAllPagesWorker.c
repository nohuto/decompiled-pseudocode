/*
 * XREFs of MiFlushAllPagesWorker @ 0x14016A7C8
 * Callers:
 *     MiFlushAllPages @ 0x14016A738 (MiFlushAllPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400DB7A8 (MiStoreUpdateMemoryConditions.c)
 *     MiCanFlushMakeProgress @ 0x14015BF68 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x14015C9B4 (MiWakeModifiedPageWriter.c)
 *     CcNotifyWriteBehindEx @ 0x14016A8C4 (CcNotifyWriteBehindEx.c)
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
    CcNotifyWriteBehindEx(2LL, *(_QWORD *)(a1 + 168));
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
