/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x140656614
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140655464 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140654CC4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfUpdateSubscription @ 0x140656A40 (ExpWnfUpdateSubscription.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        __int64 a1,
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
  unsigned __int64 v11; // r12
  unsigned int v12; // edi
  PRTL_BALANCED_NODE v15; // r14
  int updated; // r14d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v18; // rsi
  signed __int64 v19; // r12
  unsigned __int64 *v20; // r14
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE *v22; // r15
  volatile signed __int64 *v23; // r15
  PRTL_BALANCED_NODE v24; // rax
  signed __int8 v25; // cf
  struct _EX_RUNDOWN_REF *v26; // rcx
  unsigned __int64 v27; // rax
  struct _EX_RUNDOWN_REF **v28; // rdx
  struct _EX_RUNDOWN_REF **v29; // rdx
  struct _EX_RUNDOWN_REF *v30; // rax
  signed __int32 v31; // ecx
  int v32; // eax
  unsigned int v33; // edx
  int v35; // [rsp+50h] [rbp-20h] BYREF
  int v36; // [rsp+54h] [rbp-1Ch] BYREF
  struct _EX_RUNDOWN_REF *v37; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v38; // [rsp+60h] [rbp-10h]
  _RTL_BALANCED_NODE *v39; // [rsp+68h] [rbp-8h]

  v11 = a2[2].ActiveProcessors.Bitmap[2];
  v12 = 0;
  v38 = v11;
  v35 = 0;
  *a11 = 0;
  v36 = 0;
  if ( a7 == 1 )
  {
    v15 = KeAbPreAcquire(v11 + 80, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 80), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v11 + 80), v15, v11 + 80);
    if ( v15 )
      BYTE2(v15[1].Left) |= 1u;
    updated = ExpWnfUpdateSubscription(a1, v11, a3, a4, a6, (__int64)&v37, (__int64)&v35, (__int64)&v36, (__int64)a8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 80), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v11 + 80));
    KeAbPostRelease(v11 + 80);
    if ( updated >= 0 )
      goto LABEL_9;
  }
  if ( PsInitialSystemProcess == a2 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x20666E57u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  LODWORD(v18->Count) = 8915205;
  v18[10].Count = a3;
  v18[11].Count = a4;
  LODWORD(v18[12].Count) = a5;
  HIDWORD(v18[12].Ptr) = a6;
  v18[1].Count = 0LL;
  v18[7].Count = *(unsigned __int64 *)(a1 + 40);
  if ( a7 )
  {
    do
      v19 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v19 );
    if ( a8 )
      *a8 = v19;
  }
  else
  {
    v19 = (signed __int64)v18;
    if ( a9 )
      *a9 = v18;
  }
  v20 = (unsigned __int64 *)(v38 + 80);
  v21 = KeAbPreAcquire(v38 + 80, 0LL, 0);
  v22 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
    ExfAcquirePushLockExclusiveEx(v20, v21, (ULONG_PTR)v20);
  if ( v22 )
    BYTE2(v22[1].Left) |= 1u;
  v23 = (volatile signed __int64 *)(a1 + 112);
  v24 = KeAbPreAcquire(a1 + 112, 0LL, 0);
  v25 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v39 = v24;
  if ( v25 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v24, a1 + 112);
    v24 = v39;
  }
  if ( v24 )
    BYTE2(v24[1].Left) |= 1u;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(a1, v38, a3, a4, a6, (__int64)&v37, (__int64)&v35, (__int64)&v36, (__int64)a8) < 0 )
    {
      v18[5].Count = (unsigned __int64)a2;
      v18[6].Count = a1;
      v18[2].Count = v19;
      ExAcquireRundownProtection_0(v18 + 1);
      if ( a9 )
        ExAcquireRundownProtection_0(v18 + 1);
      v26 = v18 + 3;
      v27 = v38 + 88;
      v28 = *(struct _EX_RUNDOWN_REF ***)(v38 + 96);
      if ( *v28 != (struct _EX_RUNDOWN_REF *)(v38 + 88)
        || (v26->Count = v27,
            v18[4].Count = (unsigned __int64)v28,
            *v28 = v26,
            *(_QWORD *)(v27 + 8) = v26,
            v29 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128),
            v30 = v18 + 8,
            *v29 != (struct _EX_RUNDOWN_REF *)(a1 + 120)) )
      {
        __fastfail(3u);
      }
      v30->Count = a1 + 120;
      v18[9].Count = (unsigned __int64)v29;
      *v29 = v30;
      *(_QWORD *)(a1 + 128) = v30;
      if ( (BYTE4(v18[12].Ptr) & 1) != 0 )
      {
        v31 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v32 = v35;
        if ( !v31 )
          v32 = 1;
        v35 = v32;
      }
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v20);
      KeAbPostRelease((ULONG_PTR)v20);
      *a10 = v18;
      goto LABEL_41;
    }
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v20);
    KeAbPostRelease((ULONG_PTR)v20);
    ExFreePoolWithTag(v18, 0x20666E57u);
LABEL_9:
    *a10 = v37;
LABEL_41:
    v33 = 0;
    if ( v36 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v33 = 8;
    if ( v35 > 0 )
    {
      v33 |= 2u;
    }
    else if ( v35 < 0 )
    {
      v33 |= 4u;
    }
    if ( v33 )
    {
      LOBYTE(v12) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v33, 1, v12);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v20);
  KeAbPostRelease((ULONG_PTR)v20);
  ExFreePoolWithTag(v18, 0x20666E57u);
  return 3221225524LL;
}
