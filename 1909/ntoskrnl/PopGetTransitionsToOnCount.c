/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14015E540
 * Callers:
 *     PopSetSleepMarker @ 0x14072667C (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopTelemetryOsState);
  v0 = dword_140442068;
  PopReleaseRwLock((ULONG_PTR)&PopTelemetryOsState);
  return v0;
}
