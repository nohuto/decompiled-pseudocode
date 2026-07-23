/*
 * XREFs of ExRegisterExtension @ 0x140758600
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExpFindHost @ 0x14075898C (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x140914218 (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v6; // rdi
  __int64 Host; // rdi
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // rsi
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // rbp
  void (__fastcall *v14)(_QWORD, _QWORD); // rax
  PVOID v15; // rdx
  void (__fastcall *v16)(__int64, _QWORD); // rax
  _QWORD *v17; // rcx
  unsigned int v19; // ebx

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) && a3[2] )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&ExpHostListLock, v6, (ULONG_PTR)&ExpHostListLock);
  if ( v6 )
    BYTE2(v6[1].Left) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegion();
  if ( !Host )
    return 3221226021LL;
  v8 = a3[2];
  if ( v8 < *(_WORD *)(Host + 28) )
  {
    v19 = -1073741811;
LABEL_39:
    ExpDereferenceHost(Host);
    return v19;
  }
  v9 = 0;
  if ( v8 )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v9) )
    {
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
    v19 = -1073741790;
    goto LABEL_39;
  }
LABEL_14:
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = (volatile signed __int64 *)(Host + 72);
  v12 = KeAbPreAcquire(Host + 72, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Host + 72), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Host + 72), v12, Host + 72);
  if ( v13 )
    BYTE2(v13[1].Left) |= 1u;
  if ( *(_QWORD *)(Host + 80) || (*(_BYTE *)(Host + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
    KeAbPostRelease(Host + 72);
    KeLeaveCriticalRegion();
    v19 = -1073741771;
    goto LABEL_39;
  }
  v14 = *(void (__fastcall **)(_QWORD, _QWORD))(Host + 48);
  if ( v14 )
    v14(0LL, *(_QWORD *)(Host + 56));
  v15 = (PVOID)*((_QWORD *)a3 + 1);
  if ( !v15 )
    v15 = MmBadPointer;
  *(_QWORD *)(Host + 80) = v15;
  _InterlockedExchange64((volatile __int64 *)(Host + 64), 0LL);
  v16 = *(void (__fastcall **)(__int64, _QWORD))(Host + 48);
  if ( v16 )
    v16(1LL, *(_QWORD *)(Host + 56));
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
  KeAbPostRelease(Host + 72);
  KeLeaveCriticalRegion();
  v17 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v17 )
    *v17 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
