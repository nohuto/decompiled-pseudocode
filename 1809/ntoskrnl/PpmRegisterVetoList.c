/*
 * XREFs of PpmRegisterVetoList @ 0x1408685D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 */

__int64 __fastcall PpmRegisterVetoList(__int64 a1)
{
  unsigned int v2; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 0;
  if ( PpmIdleVetoList )
    v2 = -1073741431;
  else
    PpmIdleVetoList = a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v2;
}
