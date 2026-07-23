/*
 * XREFs of ExpWnfDeleteSubscription @ 0x140652374
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140652140 (ExpWnfDeleteProcessContext.c)
 *     NtUnsubscribeWnfStateChange @ 0x140652DD0 (NtUnsubscribeWnfStateChange.c)
 *     ExUnsubscribeWnfStateChange @ 0x1406DF660 (ExUnsubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140654CC4 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, __int64 a2)
{
  __int64 v2; // r15
  int v4; // ebp
  _RTL_BALANCED_NODE *v5; // rax
  _RTL_BALANCED_NODE *v6; // rsi
  unsigned __int64 Count; // rsi
  int v8; // r13d
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v10; // r14
  struct _EX_RUNDOWN_REF **v11; // rdx
  PVOID *v12; // rcx
  int Ptr_high; // eax
  struct _EX_RUNDOWN_REF **v14; // rdx
  PVOID *v15; // rcx
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // r12
  int v18; // ecx
  int v19; // r12d
  struct _EX_RUNDOWN_REF **v20; // rdx
  PVOID *v21; // rcx
  BOOL v22; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 1768);
  v4 = 1;
  if ( v2 )
  {
    v5 = KeAbPreAcquire(v2 + 80, 0LL, 0);
    v6 = v5;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 80), v5, v2 + 80);
    if ( v6 )
      BYTE2(v6[1].Left) |= 1u;
  }
  if ( !P[5].Count )
  {
    v4 = 0;
    goto LABEL_42;
  }
  Count = P[6].Count;
  v8 = 0;
  v22 = 0;
  if ( Count )
  {
    v9 = KeAbPreAcquire(Count + 112, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(Count + 112), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Count + 112), v9, Count + 112);
    if ( v10 )
      BYTE2(v10[1].Left) |= 1u;
    v11 = (struct _EX_RUNDOWN_REF **)P[8].Count;
    if ( v11[1] != &P[8] )
      goto LABEL_57;
    v12 = (PVOID *)P[9].Count;
    if ( *v12 != &P[8] )
      goto LABEL_57;
    *v12 = v11;
    v11[1] = (struct _EX_RUNDOWN_REF *)v12;
    Ptr_high = HIDWORD(P[12].Ptr);
    P[6].Count = 0LL;
    if ( (Ptr_high & 1) != 0 )
      v22 = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 160), 0xFFFFFFFF) == 1;
  }
  v14 = (struct _EX_RUNDOWN_REF **)P[3].Count;
  if ( v14[1] != &P[3] )
    goto LABEL_57;
  v15 = (PVOID *)P[4].Count;
  if ( *v15 != &P[3] )
    goto LABEL_57;
  *v15 = v14;
  v14[1] = (struct _EX_RUNDOWN_REF *)v15;
  v16 = KeAbPreAcquire(v2 + 104, 0LL, 0);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v16, v2 + 104);
  if ( v17 )
    BYTE2(v17[1].Left) |= 1u;
  v18 = P[15].Count;
  if ( v18 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v18) )
    goto LABEL_25;
  v20 = (struct _EX_RUNDOWN_REF **)P[13].Count;
  if ( v20[1] != &P[13] || (v21 = (PVOID *)P[14].Count, *v21 != &P[13]) )
LABEL_57:
    __fastfail(3u);
  *v21 = v20;
  v20[1] = (struct _EX_RUNDOWN_REF *)v21;
  if ( Count && (BYTE4(P[15].Ptr) & 1) != 0 )
    LOBYTE(v8) = _InterlockedExchangeAdd((volatile signed __int32 *)(Count + 164), 0xFFFFFFFF) == 1;
LABEL_25:
  P[5].Count = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
  KeAbPostRelease(v2 + 104);
  if ( Count )
  {
    v19 = 0;
    if ( v22 || v8 )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8)) )
      {
        v19 = 1;
      }
      else
      {
        v22 = 0;
        v8 = 0;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Count + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Count + 112));
    KeAbPostRelease(Count + 112);
    if ( v2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
      KeAbPostRelease(v2 + 80);
      v2 = 0LL;
    }
    if ( v8 )
      ExpWnfNotifyNameSubscribers(Count, 8LL, 1LL);
    if ( v22 )
      ExpWnfNotifyNameSubscribers(Count, 4LL, 1LL);
    if ( v19 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Count + 8));
  }
LABEL_42:
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
    KeAbPostRelease(v2 + 80);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( v4 )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
