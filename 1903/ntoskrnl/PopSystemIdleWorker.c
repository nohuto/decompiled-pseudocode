/*
 * XREFs of PopSystemIdleWorker @ 0x1408B33F0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140131900 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PopUpdateLastUserInputTime @ 0x14073A824 (PopUpdateLastUserInputTime.c)
 *     PopPulseSystemIdleEvent @ 0x140747BA8 (PopPulseSystemIdleEvent.c)
 *     PopExecuteSystemIdleAction @ 0x1408B31B0 (PopExecuteSystemIdleAction.c)
 *     PopIsSystemIdle @ 0x1408B32D0 (PopIsSystemIdle.c)
 */

__int64 PopSystemIdleWorker()
{
  int v1; // ecx
  bool IsSystemIdle; // al
  unsigned __int8 v3; // bl

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
  IsSystemIdle = PopIsSystemIdle((__int64)&unk_140428218, dword_140428204, (__int64)&unk_140428318);
  dword_1404282F8 = PopSystemIdleContext;
  v3 = IsSystemIdle;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  PopExecuteSystemIdleAction((unsigned int)dword_1404282F8, v3, (__int64)&unk_140428300);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  dword_1404282F8 = 0;
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  return 0LL;
}
