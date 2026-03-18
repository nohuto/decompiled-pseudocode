/*
 * XREFs of PopSystemIdleWorker @ 0x1408B2C90
 * Callers:
 *     PopPolicyWorkerThread @ 0x140132110 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PopUpdateLastUserInputTime @ 0x1407305AC (PopUpdateLastUserInputTime.c)
 *     PopPulseSystemIdleEvent @ 0x140749AA8 (PopPulseSystemIdleEvent.c)
 *     PopIdleDetection @ 0x1408A4E98 (PopIdleDetection.c)
 *     PopExecuteSystemIdleAction @ 0x1408B2AA4 (PopExecuteSystemIdleAction.c)
 *     PopIsSystemIdle @ 0x1408B2BC4 (PopIsSystemIdle.c)
 */

__int64 PopSystemIdleWorker()
{
  int v1; // ecx
  int v2; // edi
  unsigned __int8 IsSystemIdle; // bl
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x100uLL, 0LL, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  while ( _BitScanForward((unsigned int *)&v1, PopPendingSystemIdleResetMask) )
  {
    _InterlockedAnd(&PopPendingSystemIdleResetMask, ~(1 << v1));
    if ( v1 == 2 )
      PopPulseSystemIdleEvent(2u);
  }
  PopUpdateLastUserInputTime();
  v2 = dword_140428214;
  IsSystemIdle = PopIsSystemIdle((__int64)&unk_140428228, dword_140428214, &v5, (__int64)&unk_140428328);
  dword_140428308 = PopSystemIdleContext;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  PopIdleDetection(v2, v5 / (unsigned int)PopIdleScanInterval);
  PopExecuteSystemIdleAction((unsigned int)dword_140428308, IsSystemIdle, (__int64)&unk_140428310);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_140428308 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  return 0LL;
}
