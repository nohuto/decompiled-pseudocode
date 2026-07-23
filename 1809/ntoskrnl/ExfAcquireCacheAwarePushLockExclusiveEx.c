/*
 * XREFs of ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1400053F0
 * Callers:
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1400053A0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x14031AEA0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 */

volatile signed __int32 *__fastcall ExfAcquireCacheAwarePushLockExclusiveEx(volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax
  volatile signed __int32 **v2; // rbx
  volatile signed __int32 **v3; // rdi

  result = *a1;
  v2 = a1 + 1;
  v3 = a1 + 32;
  if ( _interlockedbittestandset64(*a1, 0LL) )
    result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(*a1);
  while ( v2 < v3 )
  {
    result = *v2;
    if ( _interlockedbittestandset64(*v2, 0LL) )
    {
      result = *--v3;
      if ( _interlockedbittestandset64(result, 0LL) )
        result = (volatile signed __int32 *)ExfAcquirePushLockExclusiveEx(*v3);
    }
    else
    {
      ++v2;
    }
  }
  return result;
}
