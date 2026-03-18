/*
 * XREFs of ExReleaseCacheAwarePushLockExclusive @ 0x14009E4E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall ExReleaseCacheAwarePushLockExclusive(volatile signed __int64 **BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  volatile signed __int64 **v3; // rbx
  volatile signed __int64 *v4; // rcx

  v1 = (unsigned __int64)(BugCheckParameter2 + 32);
  v3 = BugCheckParameter2;
  if ( BugCheckParameter2 < BugCheckParameter2 + 32 )
  {
    do
    {
      v4 = *v3;
      if ( (_InterlockedExchangeAdd64(*v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v4);
      ++v3;
    }
    while ( (unsigned __int64)v3 < v1 );
  }
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
