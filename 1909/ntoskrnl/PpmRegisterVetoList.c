/*
 * XREFs of PpmRegisterVetoList @ 0x1408A30C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
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
