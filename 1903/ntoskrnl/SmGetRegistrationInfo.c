/*
 * XREFs of SmGetRegistrationInfo @ 0x140786A8C
 * Callers:
 *     SmProcessRegistrationRequest @ 0x1407869E0 (SmProcessRegistrationRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     SmRegistrationInfoFill @ 0x140786B50 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x140787DA8 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14058C160, 0LL);
  if ( (dword_14058C140 & 8) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = SmRegistrationCtxStart(&qword_14058C3F0);
    if ( v5 >= 0 )
      dword_14058C140 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058C160);
  KeAbPostRelease((ULONG_PTR)&qword_14058C160);
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = a1;
    v5 = SmRegistrationInfoFill(&qword_14058C3F0, v6, a2 + 8);
    if ( v5 >= 0 )
      return 0;
  }
  return (unsigned int)v5;
}
