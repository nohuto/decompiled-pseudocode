/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x1406B8C54
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x1406B8BA4 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x1406B8C00 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 ExpWnfDispatchKernelSubscription()
{
  struct _SINGLE_LIST_ENTRY *Next; // r13
  volatile signed __int64 *v1; // rdi
  _RTL_BALANCED_NODE *v2; // rax
  _RTL_BALANCED_NODE *v3; // rbx
  struct _SINGLE_LIST_ENTRY *v4; // rsi
  struct _SINGLE_LIST_ENTRY *v5; // r14
  struct _EX_RUNDOWN_REF v6; // rcx
  struct _SINGLE_LIST_ENTRY **p_Next; // rax
  unsigned __int64 *v8; // r12
  unsigned int Next_high; // r15d
  PRTL_BALANCED_NODE v10; // rsi
  __int64 v11; // rsi
  unsigned int v12; // ebp
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // rsi
  struct _SINGLE_LIST_ENTRY *v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF

  Next = PsInitialSystemProcess[2].SwapListEntry.Next;
  v19 = Next;
  v1 = (volatile signed __int64 *)&Next[13];
  v2 = KeAbPreAcquire((ULONG_PTR)&Next[13], 0LL, 0);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[13], 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[13], v2, (ULONG_PTR)&Next[13]);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  while ( 1 )
  {
    v4 = Next[14].Next;
    if ( v4 == &Next[14] )
      break;
    v5 = v4 - 13;
    ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v4[-12]);
    LODWORD(v4[2].Next) = 2;
    v6.Count = (unsigned __int64)v4->Next;
    if ( v4->Next[1].Next != v4 || (p_Next = &v4[1].Next->Next, *p_Next != v4) )
      __fastfail(3u);
    *p_Next = (struct _SINGLE_LIST_ENTRY *)v6.Count;
    v8 = (unsigned __int64 *)&Next[10];
    *(_QWORD *)(v6.Count + 8) = p_Next;
    Next_high = HIDWORD(v5[15].Next);
    do
    {
      HIDWORD(v5[15].Next) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1);
      KeAbPostRelease((ULONG_PTR)v1);
      v10 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v8, v10, (ULONG_PTR)v8);
      if ( v10 )
        BYTE2(v10[1].Left) |= 1u;
      v11 = (__int64)v5[6].Next;
      if ( v11 )
        v11 &= -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8)) != 0);
      v12 = Next_high & 0xFFFFFFFE;
      if ( v11 )
        v12 = Next_high;
      if ( (v12 & 1) != 0 )
      {
        v13 = *(_DWORD *)(v11 + 96);
        if ( v13 <= LODWORD(v5[12].Next) )
          v12 &= ~1u;
        else
          LODWORD(v5[12].Next) = v13;
      }
      if ( v12 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8);
        KeAbPostRelease((ULONG_PTR)v8);
        v20 = (__int64)v5[7].Next ^ 0x41C64E6DA3BC0074LL;
        if ( v11 )
          v14 = *(_QWORD *)(v11 + 64);
        else
          v14 = 0LL;
        if ( v11 && (v12 & 1) != 0 )
          v15 = *(unsigned int *)(v11 + 96);
        else
          v15 = 0LL;
        ((void (__fastcall *)(struct _SINGLE_LIST_ENTRY *, __int64 *, _QWORD, __int64, __int64, struct _SINGLE_LIST_ENTRY *))v5[10].Next)(
          v5,
          &v20,
          v12,
          v15,
          v14,
          v5[11].Next);
        if ( (v12 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v11, 8u, 0, 0);
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v8);
        KeAbPostRelease((ULONG_PTR)v8);
      }
      if ( v11 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 8));
      v16 = KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0);
      v17 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v1, v16, (ULONG_PTR)v1);
      if ( v17 )
        BYTE2(v17[1].Left) |= 1u;
      Next_high = HIDWORD(v5[15].Next);
    }
    while ( Next_high );
    LODWORD(v5[15].Next) = 0;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v5[1]);
    Next = v19;
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
