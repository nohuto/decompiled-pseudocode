/*
 * XREFs of PopEsGetState @ 0x1407203FC
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 */

__int64 PopEsGetState()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
  v0 = PopEsState;
  PopReleaseRwLock((ULONG_PTR)&PopEsLock);
  return v0;
}
