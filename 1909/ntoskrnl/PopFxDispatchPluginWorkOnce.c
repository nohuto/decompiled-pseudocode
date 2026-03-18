/*
 * XREFs of PopFxDispatchPluginWorkOnce @ 0x1405B1C74
 * Callers:
 *     PopFxProcessWorkPool @ 0x1405B1E30 (PopFxProcessWorkPool.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1400E3B18 (PopFxDisableWorkOrderWatchdog.c)
 *     PopPluginWork @ 0x1400E3D78 (PopPluginWork.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1400E3DE4 (PopFxEnableWorkOrderWatchdog.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r8
  _QWORD v3[8]; // [rsp+20h] [rbp-E0h] BYREF
  int v4[16]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD DeferredContext[11]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v4, 0, sizeof(v4));
  memset(DeferredContext, 0, sizeof(DeferredContext));
  memset(v3, 0, 0x38uLL);
  v3[5] = BugCheckParameter3;
  v3[6] = DeferredContext;
  *(_QWORD *)&DeferredContext[9] = v3;
  KeInitializeTimerEx((PKTIMER)&DeferredContext[1], NotificationTimer);
  KeInitializeDpc((PRKDPC)&DeferredContext[5], (PKDEFERRED_ROUTINE)PopFxWorkOrderWatchdog, DeferredContext);
  PopFxEnableWorkOrderWatchdog((__int64)v3, PopFxWatchdogWorkOrderTimeout);
  if ( PopPluginWork(BugCheckParameter3, v4) )
  {
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
    *((_QWORD *)&DeferredContext[9] + 1) = v4;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopWorkOrderLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopWorkOrderLock);
    KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
    PopFxProcessWork(BugCheckParameter3, v4, v2);
  }
  PopFxDisableWorkOrderWatchdog((__int64 *)DeferredContext);
}
