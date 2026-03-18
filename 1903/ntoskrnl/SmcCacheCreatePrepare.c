/*
 * XREFs of SmcCacheCreatePrepare @ 0x1408E8CFC
 * Callers:
 *     SmcProcessCreateRequest @ 0x1408E8DC8 (SmcProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x140787DA8 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x1408EBB24 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14058C160, 0LL);
  if ( (dword_14058C140 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart(&qword_14058C3F0);
    if ( v2 >= 0 )
      dword_14058C140 |= 8u;
  }
  if ( (dword_14058C140 & 4) == 0 && (dword_14058C140 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_14058C3F0);
    if ( v2 >= 0 )
      dword_14058C140 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058C160);
  KeAbPostRelease((ULONG_PTR)&qword_14058C160);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
