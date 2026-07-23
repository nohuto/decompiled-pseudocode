/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x1406E4624
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x1406E4574 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x1406E45D0 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExfAcquirePushLockSharedEx @ 0x14009C760 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140641174 (ExpWnfNotifyNameSubscribers.c)
 */

char ExpWnfDispatchKernelSubscription()
{
  unsigned __int64 *v0; // r13
  volatile signed __int64 *v1; // rdi
  _RTL_BALANCED_NODE *v2; // rax
  _RTL_BALANCED_NODE *v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // r14
  struct _EX_RUNDOWN_REF v6; // rcx
  struct _EX_RUNDOWN_REF **Count; // rax
  volatile signed __int64 *v8; // r12
  unsigned int Ptr_high; // r15d
  PRTL_BALANCED_NODE v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // rsi
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF

  v19 = 0LL;
  v0 = (unsigned __int64 *)PsInitialSystemProcess[2].ActiveProcessors.Bitmap[2];
  v1 = (volatile signed __int64 *)(v0 + 13);
  v2 = KeAbPreAcquire((ULONG_PTR)(v0 + 13), 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v0 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(v0 + 13, v2, (ULONG_PTR)(v0 + 13));
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  while ( 1 )
  {
    v4 = (struct _EX_RUNDOWN_REF *)v0[14];
    if ( v4 == (struct _EX_RUNDOWN_REF *)(v0 + 14) )
      break;
    v5 = v4 - 13;
    ExAcquireRundownProtection_0(v4 - 12);
    LODWORD(v4[2].Count) = 2;
    v6.Count = v4->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v4->Count + 8) != v4
      || (Count = (struct _EX_RUNDOWN_REF **)v4[1].Count, *Count != v4) )
    {
      __fastfail(3u);
    }
    *Count = (struct _EX_RUNDOWN_REF *)v6.Count;
    v8 = (volatile signed __int64 *)(v0 + 10);
    *(_QWORD *)(v6.Count + 8) = Count;
    Ptr_high = HIDWORD(v5[15].Ptr);
    do
    {
      HIDWORD(v5[15].Ptr) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v0 + 13);
      KeAbPostRelease((ULONG_PTR)(v0 + 13));
      v10 = KeAbPreAcquire((ULONG_PTR)(v0 + 10), 0LL, 0);
      if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v0 + 10, v10, (ULONG_PTR)(v0 + 10));
      if ( v10 )
        BYTE2(v10[1].Left) |= 1u;
      v11 = v5[6].Count;
      if ( v11 )
        v11 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8)) != 0);
      v12 = Ptr_high & 0xFFFFFFFE;
      if ( v11 )
        v12 = Ptr_high;
      if ( (v12 & 1) != 0 )
      {
        v13 = *(_DWORD *)(v11 + 96);
        if ( v13 <= LODWORD(v5[12].Count) )
          v12 &= ~1u;
        else
          LODWORD(v5[12].Count) = v13;
      }
      if ( v12 )
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v0 + 10);
        KeAbPostRelease((ULONG_PTR)(v0 + 10));
        v19 = v5[7].Count ^ 0x41C64E6DA3BC0074LL;
        if ( v11 )
          v14 = *(_QWORD *)(v11 + 64);
        else
          v14 = 0LL;
        if ( v11 && (v12 & 1) != 0 )
          v15 = *(unsigned int *)(v11 + 96);
        else
          v15 = 0LL;
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, __int64 *, _QWORD, __int64, __int64, unsigned __int64))v5[10].Count)(
          v5,
          &v19,
          v12,
          v15,
          v14,
          v5[11].Count);
        if ( (v12 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v11, 8u, 0, 0);
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v0 + 10);
        KeAbPostRelease((ULONG_PTR)(v0 + 10));
      }
      if ( v11 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
      v16 = KeAbPreAcquire((ULONG_PTR)(v0 + 13), 0LL, 0);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx(v0 + 13, v16, (ULONG_PTR)(v0 + 13));
      if ( v17 )
        BYTE2(v17[1].Left) |= 1u;
      Ptr_high = HIDWORD(v5[15].Ptr);
    }
    while ( Ptr_high );
    LODWORD(v5[15].Count) = 0;
    ExReleaseRundownProtection_0(v5 + 1);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v0 + 13);
  return KeAbPostRelease((ULONG_PTR)(v0 + 13));
}
