/*
 * XREFs of PsTerminateVsmEnclave @ 0x1408CCB5C
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     MiTerminateEnclave @ 0x140894D88 (MiTerminateEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2)
{
  LARGE_INTEGER *Timeout; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // r15
  int v7; // eax
  _QWORD *v8; // r12
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  NTSTATUS result; // eax
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v14[14]; // [rsp+40h] [rbp-A8h] BYREF

  Timeout = 0LL;
  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (signed __int64 *)(a1 + 48);
  ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  v7 = *(_DWORD *)(a1 + 44);
  if ( v7 )
  {
    if ( (a2 & 4) == 0 && v7 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      *(_DWORD *)(a1 + 72) = 0;
      v8 = (_QWORD *)(a1 + 56);
      while ( 1 )
      {
        v9 = (_QWORD *)*v8;
        if ( (_QWORD *)*v8 == v8 )
          break;
        v10 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        *v9 = 0LL;
        *((_DWORD *)v9 + 10) = -1073740526;
        KeSetEvent((PRKEVENT)(v9 + 2), 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( a2 >= 0 )
      {
        memset(v14, 0, 0x68uLL);
        v14[1] = *(_QWORD *)(a1 + 24);
        VslpEnterIumSecureMode(2, 48LL, 0LL, (__int64)v14);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegion();
  if ( a2 < 0 )
    return 0;
  if ( (a2 & 5) != 0 )
  {
    v13 = 0LL;
    Timeout = (LARGE_INTEGER *)&v13;
  }
  result = KeWaitForSingleObject((PVOID)(a1 + 80), Executive, KeGetCurrentThread()->PreviousMode, 0, Timeout);
  if ( result == 258 )
    return (a2 & 4) != 0 ? -1073740527 : 259;
  return result;
}
