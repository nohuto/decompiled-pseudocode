/*
 * XREFs of PopEsGetState @ 0x140747F6C
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 */

__int64 PopEsGetState()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  v0 = PopEsState;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
  return v0;
}
