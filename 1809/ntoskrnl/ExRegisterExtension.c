/*
 * XREFs of ExRegisterExtension @ 0x140728660
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExpFindHost @ 0x1407289B4 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1408D8248 (ExpDereferenceHost.c)
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
  char v17; // bl
  _QWORD *v18; // rcx
  unsigned int v20; // ebx

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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( !Host )
    return 3221226021LL;
  v8 = a3[2];
  if ( v8 < *(_WORD *)(Host + 28) )
  {
    v20 = -1073741811;
LABEL_40:
    ExpDereferenceHost(Host);
    return v20;
  }
  v9 = 0;
  if ( v8 )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v9) )
    {
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
    v20 = -1073741790;
    goto LABEL_40;
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v20 = -1073741771;
    goto LABEL_40;
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
  v17 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
  KeAbPostRelease(Host + 72);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v18 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v18 )
    *v18 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
