/*
 * XREFs of PopInitializeSystemIdleDetection @ 0x140A21D1C
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     PopPulseSystemIdleEvent @ 0x140749AA8 (PopPulseSystemIdleEvent.c)
 */

void PopInitializeSystemIdleDetection()
{
  PopAcquireRwLockExclusive((ULONG_PTR)PopSystemIdleLock);
  PopPulseSystemIdleEvent(1u);
  PopIdleScanDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopCheckForIdleness;
  *(_QWORD *)&PopIdleScanTimer.Header.Lock = 8LL;
  PopIdleScanTimer.Header.WaitListHead.Blink = &PopIdleScanTimer.Header.WaitListHead;
  PopIdleScanTimer.Header.WaitListHead.Flink = &PopIdleScanTimer.Header.WaitListHead;
  PopIdleScanDpc.TargetInfoAsUlong = 275;
  PopIdleScanDpc.DeferredContext = 0LL;
  PopIdleScanDpc.DpcData = 0LL;
  PopIdleScanDpc.ProcessorHistory = 0LL;
  PopIdleScanTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopIdleScanTimer.Processor = 0LL;
  if ( PopIdleScanInterval )
    KeSetCoalescableTimer(
      &PopIdleScanTimer,
      (LARGE_INTEGER)(-10000000LL * (unsigned int)PopIdleScanInterval),
      1000 * PopIdleScanInterval,
      0x3E8u,
      &PopIdleScanDpc);
  PopReleaseRwLock((ULONG_PTR)PopSystemIdleLock);
}
