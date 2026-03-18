/*
 * XREFs of ExRegisterHost @ 0x1407275DC
 * Callers:
 *     IopInitializeIoRate @ 0x14017D070 (IopInitializeIoRate.c)
 *     EtwpInitializeProcessorTrace @ 0x140727380 (EtwpInitializeProcessorTrace.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x1409ADABC (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x1409ADB18 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x1409ADB6C (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x1409ADBC8 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x1409ADC24 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x1409ADC78 (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x1409ADCCC (PspInitializeNetRateControl.c)
 *     VmInitSystem @ 0x1409ADD1C (VmInitSystem.c)
 *     SepInitializeAuthorizationCallbacks @ 0x1409ADD7C (SepInitializeAuthorizationCallbacks.c)
 *     ExpInitSystemPhase1 @ 0x1409B0434 (ExpInitSystemPhase1.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExpFindHost @ 0x140727734 (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x1408D6FA8 (ExpDereferenceHost.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  __int64 Host; // rbp
  _QWORD *v13; // rax
  char v14; // si

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)a3 + 2), 0x60uLL, 0x48457845u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((ULONG_PTR)&ExpHostListLock, 0LL, 0);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (ULONG_PTR)&ExpHostListLock);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  Host = ExpFindHost(*a3, a3[1]);
  if ( Host )
  {
    v6 = -1073741771;
    ExpDereferenceHost(v7);
    ExpDereferenceHost(Host);
  }
  else
  {
    v13 = (_QWORD *)qword_14096D2E0;
    if ( *(__int64 **)qword_14096D2E0 != &ExpHostList )
      __fastfail(3u);
    *v7 = &ExpHostList;
    v7[1] = v13;
    *v13 = v7;
    qword_14096D2E0 = (__int64)v7;
    *a1 = v7;
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
