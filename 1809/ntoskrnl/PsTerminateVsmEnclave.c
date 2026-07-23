/*
 * XREFs of PsTerminateVsmEnclave @ 0x14088F69C
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     MiTerminateEnclave @ 0x14085B980 (MiTerminateEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // r15
  int v6; // eax
  LARGE_INTEGER *Timeout; // rsi
  _QWORD *v8; // r12
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  NTSTATUS result; // eax
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-A0h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (signed __int64 *)(a1 + 48);
  ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  v6 = *(_DWORD *)(a1 + 44);
  Timeout = 0LL;
  if ( v6 )
  {
    if ( (a2 & 4) == 0 && v6 == 1 )
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
        v15 = *(_QWORD *)(a1 + 24);
        VslpEnterIumSecureMode(2u, 44LL, 0, (__int64)v14);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((ULONG_PTR)v5);
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
