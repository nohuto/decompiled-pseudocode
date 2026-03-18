/*
 * XREFs of EtwpUpdatePeriodicCaptureState @ 0x1408FD174
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     ExCancelTimer @ 0x140113CD0 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1401147D0 (ExSetTimer.c)
 *     ExAllocateTimer @ 0x140176220 (ExAllocateTimer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C4F00 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C4F48 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpCheckNotificationAccess @ 0x140665190 (EtwpCheckNotificationAccess.c)
 */

__int64 __fastcall EtwpUpdatePeriodicCaptureState(unsigned int a1, unsigned int a2, unsigned __int16 a3, _QWORD *a4)
{
  int v4; // ebp
  int v5; // esi
  void *v6; // r14
  char v7; // r15
  unsigned int *v11; // rax
  unsigned int *v12; // rdi
  volatile signed __int64 *v13; // rbp
  void *v14; // rcx
  PVOID PoolWithTag; // rax
  _QWORD *v16; // rax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  __int16 v21; // [rsp+24h] [rbp-74h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+48h] [rbp-50h]

  v4 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v21 = a1;
  v7 = 0;
  v23 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  v11 = EtwpAcquireLoggerContextByLoggerId(v23, a1, 0);
  v12 = v11;
  if ( v11 )
  {
    if ( (v11[208] & 0x40) != 0 )
    {
      v5 = -1073741162;
LABEL_21:
      v19 = (void *)*((_QWORD *)v12 + 135);
      if ( v19 )
      {
        ExFreePoolWithTag(v19, 0);
        *((_QWORD *)v12 + 135) = 0LL;
        *((_WORD *)v12 + 536) = 0;
      }
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      if ( !v7 )
        goto LABEL_30;
      v13 = (volatile signed __int64 *)(v12 + 176);
LABEL_27:
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
LABEL_30:
      EtwpReleaseLoggerContext(v12, 0);
      return (unsigned int)v5;
    }
    if ( a3 )
    {
      while ( 1 )
      {
        v5 = EtwpCheckNotificationAccess(&a4[2 * v4], (__int64)(v12 + 73));
        if ( v5 < 0 )
          break;
        if ( ++v4 >= a3 )
          goto LABEL_8;
      }
      v5 = -1073741790;
      v7 = 0;
      goto LABEL_21;
    }
LABEL_8:
    v13 = (volatile signed __int64 *)(v12 + 176);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v12 + 176), 0LL);
    v14 = (void *)*((_QWORD *)v12 + 135);
    if ( v14 )
    {
      if ( !*((_QWORD *)v12 + 136) )
      {
        ExCancelTimer(0LL, 0LL);
        v12[274] = 0;
        v14 = (void *)*((_QWORD *)v12 + 135);
      }
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)v12 + 135) = 0LL;
      *((_WORD *)v12 + 536) = 0;
    }
    if ( !a3 )
      goto LABEL_27;
    *((_WORD *)v12 + 536) = a3;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * a3, 0x55777445u);
    *((_QWORD *)v12 + 135) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_14:
      v7 = 1;
      v5 = -1073741801;
      goto LABEL_21;
    }
    memmove(PoolWithTag, a4, 16LL * a3);
    if ( !*((_QWORD *)v12 + 136) )
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x55777445u);
      v6 = v16;
      if ( !v16 )
        goto LABEL_14;
      *((_WORD *)v16 + 20) = v21;
      v16[4] = v23;
      v16[2] = SendCaptureStateNotificationsWorker;
      v16[3] = v16;
      *v16 = 0LL;
      *((_QWORD *)v12 + 136) = ExAllocateTimer((__int64)&PeriodicCaptureStateTimerCallback, (__int64)v16, 8u);
    }
    v24 = 0LL;
    v25 = -1LL;
    v17 = *((_QWORD *)v12 + 136);
    v18 = -10000000LL * a2;
    *((_QWORD *)v12 + 133) = v18;
    ExSetTimer(v17, v18, 0LL, (__int64)&v24);
    v12[274] = 1;
    goto LABEL_27;
  }
  return (unsigned int)-1073741811;
}
