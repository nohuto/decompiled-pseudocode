/*
 * XREFs of ExfReleasePushLockExclusive @ 0x1400C62D0
 * Callers:
 *     ExfReleasePushLock @ 0x1400C61F0 (ExfReleasePushLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140108CE8 (ExfAcquireReleasePushLockExclusive.c)
 * Callees:
 *     ExpWakePushLock @ 0x1400C63C0 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExfReleasePushLockExclusive(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // r8
  __int64 v3; // rdx
  signed __int64 v4; // rtt

  result = _InterlockedCompareExchange64(a1, 0LL, 1LL);
  if ( result != 1 )
  {
    do
    {
      v2 = result & 6;
      v3 = 3LL;
      if ( v2 != 2 )
        v3 = -1LL;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, result + v3, result);
    }
    while ( v4 != result );
    if ( v2 == 2 )
      return ExpWakePushLock();
  }
  return result;
}
