/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x1408C160C
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExCancelTimer @ 0x1400FA350 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1400FD0B0 (ExSetTimer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocateTimer @ 0x14016BA20 (ExAllocateTimer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x140657E58 (EtwpCheckNotificationAccess.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(unsigned int a1, unsigned int a2, unsigned __int16 a3, _QWORD *a4)
{
  int v4; // esi
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v9; // rax
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rdi
  PVOID PoolWithTag; // rax
  void *v14; // rcx
  PVOID v15; // rax
  __int64 Timer; // rax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  _QWORD v21[2]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v9 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[108], a1, 0);
  v10 = (__int64)v9;
  if ( v9 )
  {
    if ( (v9[208] & 0x40) != 0 )
    {
      v4 = -1073741162;
LABEL_28:
      EtwpReleaseLoggerContext((unsigned int *)v10, 0);
      return (unsigned int)v4;
    }
    v11 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        v4 = EtwpCheckNotificationAccess(&a4[2 * v11], v10 + 292);
        if ( v4 < 0 )
          break;
        if ( ++v11 >= a3 )
          goto LABEL_8;
      }
      v4 = -1073741790;
      goto LABEL_28;
    }
LABEL_8:
    ExAcquirePushLockExclusiveEx(v10 + 704, 0LL);
    v12 = *(_QWORD *)(v10 + 1064);
    if ( !v12 )
    {
      if ( !a3 )
      {
LABEL_25:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 704));
        KeAbPostRelease(v10 + 704);
        goto LABEL_28;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x55777445u);
      *(_QWORD *)(v10 + 1064) = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_11:
        v4 = -1073741801;
        goto LABEL_25;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      v12 = *(_QWORD *)(v10 + 1064);
    }
    v14 = *(void **)(v12 + 24);
    if ( v14 )
    {
      if ( *(_QWORD *)(v12 + 8) )
      {
        ExCancelTimer(*(_QWORD *)(v12 + 8), 0LL);
        v14 = *(void **)(v12 + 24);
        *(_DWORD *)(v12 + 64) = 0;
      }
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v12 + 24) = 0LL;
      *(_WORD *)(v12 + 16) = 0;
    }
    if ( !a3 )
      goto LABEL_25;
    v15 = ExAllocatePoolWithTag(PagedPool, 16LL * a3, 0x55777445u);
    *(_QWORD *)(v12 + 24) = v15;
    if ( !v15 )
      goto LABEL_11;
    *(_WORD *)(v12 + 16) = a3;
    memmove(v15, a4, 16LL * a3);
    if ( !*(_QWORD *)(v12 + 8) )
    {
      Timer = ExAllocateTimer((__int64)PeriodicCaptureStateTimerCallback, v10, 8u);
      *(_QWORD *)(v12 + 8) = Timer;
      if ( !Timer )
      {
        ExFreePoolWithTag(*(PVOID *)(v12 + 24), 0);
        *(_QWORD *)(v12 + 24) = 0LL;
        *(_WORD *)(v12 + 16) = 0;
        goto LABEL_11;
      }
      *(_QWORD *)(v12 + 56) = v10;
      *(_QWORD *)(v12 + 48) = SendCaptureStateNotificationsWorker;
      *(_QWORD *)(v12 + 32) = 0LL;
    }
    v21[1] = -1LL;
    v21[0] = 0LL;
    v17 = *(_QWORD *)(v12 + 8);
    v18 = -10000000LL * a2;
    *(_QWORD *)v12 = v18;
    ExSetTimer(v17, v18, 0LL, (__int64)v21);
    *(_DWORD *)(v12 + 64) = 1;
    goto LABEL_25;
  }
  return (unsigned int)-1073741811;
}
