/*
 * XREFs of PspProcessClose @ 0x1406C63C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsTerminateProcess @ 0x1406E90D0 (PsTerminateProcess.c)
 *     PspRundownProcess @ 0x1408C9598 (PspRundownProcess.c)
 */

__int64 __fastcall PspProcessClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v7; // ebp
  volatile signed __int64 *v8; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a4 > 1 || (result = *(unsigned int *)(a2 + 1176), (_DWORD)result) )
  {
    if ( (*(_DWORD *)(a2 + 1788) & 0x8000) == 0 )
    {
      result = *(_QWORD *)(a2 + 1008);
      if ( *(_QWORD *)(a1 + 744) == result )
      {
        result = *(unsigned int *)(a1 + 780);
        if ( (result & 0x40000008) != 0 )
          return PsTerminateProcess(a2, 3221225738LL);
      }
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0x2000000;
    --CurrentThread->KernelApcDisable;
    v8 = (volatile signed __int64 *)(a2 + 736);
    ExAcquirePushLockExclusiveEx(a2 + 736, 0LL);
    if ( !*(_DWORD *)(a2 + 1176) )
    {
      _m_prefetchw((const void *)(a2 + 780));
      v7 = _InterlockedOr((volatile signed __int32 *)(a2 + 780), 8u);
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    result = (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( (v7 & 0x2000000) == 0 )
      return PspRundownProcess((PVOID)a2);
  }
  return result;
}
