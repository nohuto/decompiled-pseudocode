/*
 * XREFs of PopEsGetState @ 0x140749E6C
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 */

__int64 PopEsGetState()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  v0 = PopEsState;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
  return v0;
}
