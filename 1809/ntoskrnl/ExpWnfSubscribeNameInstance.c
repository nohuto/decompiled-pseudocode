/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x14061134C
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140610054 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfUpdateSubscription @ 0x140611794 (ExpWnfUpdateSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        unsigned __int64 a1,
        struct _KPROCESS *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        char a7,
        signed __int64 *a8,
        struct _EX_RUNDOWN_REF **a9,
        struct _EX_RUNDOWN_REF **a10,
        _DWORD *a11)
{
  struct _SINGLE_LIST_ENTRY *Next; // r12
  PRTL_BALANCED_NODE v14; // r14
  int updated; // r14d
  __int64 v16; // rdx
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v19; // rsi
  signed __int64 v20; // r12
  unsigned __int64 *v21; // r14
  _RTL_BALANCED_NODE *v22; // rax
  _RTL_BALANCED_NODE *v23; // r15
  volatile signed __int64 *v24; // r15
  PRTL_BALANCED_NODE v25; // rax
  signed __int8 v26; // cf
  struct _EX_RUNDOWN_REF *v27; // rcx
  struct _SINGLE_LIST_ENTRY *v28; // rax
  struct _SINGLE_LIST_ENTRY **p_Next; // rdx
  struct _EX_RUNDOWN_REF **v30; // rdx
  struct _EX_RUNDOWN_REF *v31; // rax
  signed __int32 v32; // ecx
  int v33; // eax
  int v34; // [rsp+50h] [rbp-20h] BYREF
  int v35; // [rsp+54h] [rbp-1Ch] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+58h] [rbp-18h] BYREF
  struct _SINGLE_LIST_ENTRY *v37; // [rsp+60h] [rbp-10h]
  _RTL_BALANCED_NODE *v38; // [rsp+68h] [rbp-8h]

  Next = a2[2].SwapListEntry.Next;
  v37 = Next;
  v34 = 0;
  *a11 = 0;
  v35 = 0;
  if ( a7 == 1 )
  {
    v14 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Next[10], 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)&Next[10], v14, (ULONG_PTR)&Next[10]);
    if ( v14 )
      BYTE2(v14[1].Left) |= 1u;
    updated = ExpWnfUpdateSubscription(
                a1,
                (_DWORD)Next,
                a3,
                a4,
                a6,
                (__int64)&v36,
                (__int64)&v34,
                (__int64)&v35,
                (__int64)a8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Next[10], 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Next[10]);
    KeAbPostRelease((ULONG_PTR)&Next[10]);
    if ( updated >= 0 )
      goto LABEL_9;
  }
  if ( PsInitialSystemProcess == a2 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x20666E57u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  LODWORD(v19->Count) = 8915205;
  v19[10].Count = a3;
  v19[11].Count = a4;
  LODWORD(v19[12].Count) = a5;
  HIDWORD(v19[12].Ptr) = a6;
  v19[1].Count = 0LL;
  v19[7].Count = *(unsigned __int64 *)(a1 + 40);
  if ( a7 )
  {
    do
      v20 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v20 );
    if ( a8 )
      *a8 = v20;
  }
  else
  {
    v20 = (signed __int64)v19;
    if ( a9 )
      *a9 = v19;
  }
  v21 = (unsigned __int64 *)&v37[10];
  v22 = KeAbPreAcquire((ULONG_PTR)&v37[10], 0LL, 0);
  v23 = v22;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
    ExfAcquirePushLockExclusiveEx(v21, v22, (ULONG_PTR)v21);
  if ( v23 )
    BYTE2(v23[1].Left) |= 1u;
  v24 = (volatile signed __int64 *)(a1 + 112);
  v25 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  v26 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v38 = v25;
  if ( v26 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v25, a1 + 112);
    v25 = v38;
  }
  if ( v25 )
    BYTE2(v25[1].Left) |= 1u;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(
                a1,
                (_DWORD)v37,
                a3,
                a4,
                a6,
                (__int64)&v36,
                (__int64)&v34,
                (__int64)&v35,
                (__int64)a8) < 0 )
    {
      v19[5].Count = (unsigned __int64)a2;
      v19[6].Count = a1;
      v19[2].Count = v20;
      ExAcquireRundownProtection_0(v19 + 1);
      if ( a9 )
        ExAcquireRundownProtection_0(v19 + 1);
      v27 = v19 + 3;
      v28 = v37 + 11;
      p_Next = &v37[12].Next->Next;
      if ( *p_Next != &v37[11]
        || (v27->Count = (unsigned __int64)v28,
            v19[4].Count = (unsigned __int64)p_Next,
            *p_Next = (struct _SINGLE_LIST_ENTRY *)v27,
            v28[1].Next = (struct _SINGLE_LIST_ENTRY *)v27,
            v30 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128),
            v31 = v19 + 8,
            *v30 != (struct _EX_RUNDOWN_REF *)(a1 + 120)) )
      {
        __fastfail(3u);
      }
      v31->Count = a1 + 120;
      v19[9].Count = (unsigned __int64)v30;
      *v30 = v31;
      *(_QWORD *)(a1 + 128) = v31;
      if ( (BYTE4(v19[12].Ptr) & 1) != 0 )
      {
        v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v33 = v34;
        if ( !v32 )
          v33 = 1;
        v34 = v33;
      }
      if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21);
      KeAbPostRelease((ULONG_PTR)v21);
      *a10 = v19;
      goto LABEL_10;
    }
    if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v21);
    KeAbPostRelease((ULONG_PTR)v21);
    ExFreePoolWithTag(v19, 0x20666E57u);
LABEL_9:
    *a10 = v36;
LABEL_10:
    v16 = 0LL;
    if ( v35 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v16 = 8LL;
    if ( v34 > 0 )
    {
      v16 = (unsigned int)v16 | 2;
    }
    else if ( v34 < 0 )
    {
      v16 = (unsigned int)v16 | 4;
    }
    if ( (_DWORD)v16 )
    {
      ExpWnfNotifyNameSubscribers(a1, v16, 1LL);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v21);
  KeAbPostRelease((ULONG_PTR)v21);
  ExFreePoolWithTag(v19, 0x20666E57u);
  return 3221225524LL;
}
