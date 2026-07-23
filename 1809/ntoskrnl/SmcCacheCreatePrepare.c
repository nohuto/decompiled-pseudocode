/*
 * XREFs of SmcCacheCreatePrepare @ 0x1408ACE9C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1408ACF68 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x14076231C (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x1408AFD60 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14055C160, 0LL);
  if ( (dword_14055C140 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart(&qword_14055C3F0);
    if ( v2 >= 0 )
      dword_14055C140 |= 8u;
  }
  if ( (dword_14055C140 & 4) == 0 && (dword_14055C140 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_14055C3F0);
    if ( v2 >= 0 )
      dword_14055C140 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14055C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14055C160);
  KeAbPostRelease((ULONG_PTR)&qword_14055C160);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
