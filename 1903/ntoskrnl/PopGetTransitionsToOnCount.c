/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14015DEA0
 * Callers:
 *     PopSetSleepMarker @ 0x1407247DC (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_1404420E8;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
