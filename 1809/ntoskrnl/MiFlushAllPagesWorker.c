/*
 * XREFs of MiFlushAllPagesWorker @ 0x1401532B8
 * Callers:
 *     MiFlushAllPages @ 0x140153238 (MiFlushAllPages.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400EEE4C (MiStoreUpdateMemoryConditions.c)
 *     CcNotifyWriteBehindEx @ 0x1401533B4 (CcNotifyWriteBehindEx.c)
 *     MiWakeModifiedPageWriter @ 0x1401533D8 (MiWakeModifiedPageWriter.c)
 *     MiCanFlushMakeProgress @ 0x140153430 (MiCanFlushMakeProgress.c)
 */

_QWORD *__fastcall MiFlushAllPagesWorker(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r8
  __int64 v10; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 768));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 772));
  do
  {
    if ( !(unsigned int)MiCanFlushMakeProgress(a1, 0LL) || a4 && *(_DWORD *)(a4 + 4) )
      break;
    KeSetEvent((PRKEVENT)(a1 + 776), 0, 0);
    MiWakeModifiedPageWriter(a1, -1LL, v9, v10);
    CcNotifyWriteBehindEx(2LL, *(_QWORD *)(a1 + 168));
    if ( *(_DWORD *)(a1 + 1144) )
      MiStoreUpdateMemoryConditions(a1);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
    if ( KiQueryUnbiasedInterruptTime() - a2 > a3 )
      break;
  }
  while ( *(_QWORD *)(a1 + 7680) > 0x32uLL );
  _InterlockedAdd((volatile signed __int32 *)(a1 + 768), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 772), 0xFFFFFFFF);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
