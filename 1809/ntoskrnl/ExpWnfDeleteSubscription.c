/*
 * XREFs of ExpWnfDeleteSubscription @ 0x140608CA4
 * Callers:
 *     ExUnsubscribeWnfStateChange @ 0x140607B80 (ExUnsubscribeWnfStateChange.c)
 *     NtUnsubscribeWnfStateChange @ 0x140607BC0 (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfDeleteProcessContext @ 0x140608AA4 (ExpWnfDeleteProcessContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406119F8 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDeleteSubscription(struct _EX_RUNDOWN_REF *P, __int64 a2)
{
  __int64 v2; // r14
  _RTL_BALANCED_NODE *v4; // rax
  _RTL_BALANCED_NODE *v5; // rsi
  unsigned __int64 Count; // rbp
  unsigned __int64 v7; // rsi
  int v8; // r12d
  int v9; // r13d
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rbp
  struct _EX_RUNDOWN_REF **v12; // rdx
  PVOID *v13; // rcx
  int Ptr_high; // eax
  unsigned __int64 v15; // rdx
  struct _EX_RUNDOWN_REF **v16; // rcx
  _RTL_BALANCED_NODE *v17; // rax
  _RTL_BALANCED_NODE *v18; // r15
  int v19; // ecx
  int v20; // r15d
  unsigned __int64 v21; // rdx
  struct _EX_RUNDOWN_REF **v22; // rcx
  unsigned __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a2 + 1720);
  if ( v2 )
  {
    v4 = KeAbPreAcquire(v2 + 80, 0LL, 0);
    v5 = v4;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 80), v4, v2 + 80);
    if ( v5 )
      BYTE2(v5[1].Left) |= 1u;
  }
  Count = P[5].Count;
  v23 = Count;
  if ( Count )
  {
    v7 = P[6].Count;
    v8 = 0;
    v9 = 0;
    if ( v7 )
    {
      v10 = KeAbPreAcquire(v7 + 112, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 112), v10, v7 + 112);
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      v12 = (struct _EX_RUNDOWN_REF **)P[8].Count;
      if ( v12[1] != &P[8] )
        goto LABEL_58;
      v13 = (PVOID *)P[9].Count;
      if ( *v13 != &P[8] )
        goto LABEL_58;
      *v13 = v12;
      v12[1] = (struct _EX_RUNDOWN_REF *)v13;
      Ptr_high = HIDWORD(P[12].Ptr);
      P[6].Count = 0LL;
      if ( (Ptr_high & 1) != 0 )
        LOBYTE(v9) = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 160), 0xFFFFFFFF) == 1;
    }
    v15 = P[3].Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v15 + 8) == &P[3] )
    {
      v16 = (struct _EX_RUNDOWN_REF **)P[4].Count;
      if ( *v16 == &P[3] )
      {
        *v16 = (struct _EX_RUNDOWN_REF *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = KeAbPreAcquire(v2 + 104, 0LL, 0);
        v18 = v17;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 104), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 104), v17, v2 + 104);
        if ( v18 )
          BYTE2(v18[1].Left) |= 1u;
        v19 = P[15].Count;
        if ( v19 != 1 && ((PEPROCESS)P[5].Count == PsInitialSystemProcess || !v19) )
          goto LABEL_25;
        v21 = P[13].Count;
        if ( *(struct _EX_RUNDOWN_REF **)(v21 + 8) == &P[13] )
        {
          v22 = (struct _EX_RUNDOWN_REF **)P[14].Count;
          if ( *v22 == &P[13] )
          {
            *v22 = (struct _EX_RUNDOWN_REF *)v21;
            *(_QWORD *)(v21 + 8) = v22;
            if ( v7 && (BYTE4(P[15].Ptr) & 1) != 0 )
              LOBYTE(v8) = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 164), 0xFFFFFFFF) == 1;
LABEL_25:
            P[5].Count = 0LL;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 104));
            KeAbPostRelease(v2 + 104);
            if ( v7 )
            {
              v20 = 0;
              if ( v9 || v8 )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 8)) )
                {
                  v20 = 1;
                }
                else
                {
                  v9 = 0;
                  v8 = 0;
                }
              }
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 112));
              KeAbPostRelease(v7 + 112);
              if ( v2 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
                KeAbPostRelease(v2 + 80);
                v2 = 0LL;
              }
              if ( v8 )
                ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL);
              if ( v9 )
                ExpWnfNotifyNameSubscribers(v7, 4LL, 1LL);
              if ( v20 )
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 8));
            }
            Count = v23;
            goto LABEL_43;
          }
        }
      }
    }
LABEL_58:
    __fastfail(3u);
  }
LABEL_43:
  if ( v2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v2 + 80));
    KeAbPostRelease(v2 + 80);
  }
  ExReleaseRundownProtection_0(P + 1);
  if ( Count )
  {
    ExWaitForRundownProtectionRelease(P + 1);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
