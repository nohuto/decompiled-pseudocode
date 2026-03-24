/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140142B2C
 * Callers:
 *     PopSetSleepMarker @ 0x1406DD1BC (PopSetSleepMarker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140416728;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
