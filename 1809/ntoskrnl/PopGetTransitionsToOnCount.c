/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140142C2C
 * Callers:
 *     PopSetSleepMarker @ 0x1406DE45C (PopSetSleepMarker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140417828;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
