/*
 * XREFs of ExpWnfDeleteNameInstance @ 0x14063F414
 * Callers:
 *     NtDeleteWnfStateName @ 0x14063F860 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteProcessContext @ 0x140671310 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x1406EDFB0 (ExpWnfDeleteNameInstanceCallback.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7020 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfDeleteStateData @ 0x14063F7BC (ExpWnfDeleteStateData.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstance(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  unsigned __int64 *v3; // rsi
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_BALANCED_NODE *v8; // rbx
  volatile signed __int64 *v9; // rdi
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rbx
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // rsi
  struct _EX_RUNDOWN_REF *Count; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rdi
  _RTL_BALANCED_NODE *v17; // rax
  _RTL_BALANCED_NODE *v18; // rsi
  unsigned __int64 v19; // rcx
  struct _EX_RUNDOWN_REF **v20; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 *v23; // r14
  _RTL_BALANCED_NODE *v24; // rax
  _RTL_BALANCED_NODE *v25; // r13
  _RTL_BALANCED_NODE *v26; // rax
  _RTL_BALANCED_NODE *v27; // r13
  struct _EX_RUNDOWN_REF v28; // rax
  struct _EX_RUNDOWN_REF **v29; // rcx

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (ULONG_PTR)v3);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  if ( a2[6].Count )
  {
    v9 = (volatile signed __int64 *)&a2[14];
    v10 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v10, (ULONG_PTR)&a2[14]);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), &a2[2].Count);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    v12 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v12, (ULONG_PTR)&a2[14]);
    if ( v13 )
      BYTE2(v13[1].Left) |= 1u;
    while ( 1 )
    {
      Count = (struct _EX_RUNDOWN_REF *)a2[15].Count;
      if ( Count == &a2[15] )
        break;
      ExAcquireRundownProtection_0(Count - 7);
      v22 = Count[-3].Count;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
      KeAbPostRelease((ULONG_PTR)&a2[14]);
      v23 = (unsigned __int64 *)(*(_QWORD *)(v22 + 1768) + 80LL);
      v24 = KeAbPreAcquire((ULONG_PTR)v23, 0LL, 0);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
        ExfAcquirePushLockExclusiveEx(v23, v24, (ULONG_PTR)v23);
      if ( v25 )
        BYTE2(v25[1].Left) |= 1u;
      v26 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(&a2[14].Count, v26, (ULONG_PTR)&a2[14]);
      if ( v27 )
        BYTE2(v27[1].Left) |= 1u;
      if ( Count[-2].Count )
      {
        v28.Count = Count->Count;
        if ( *(struct _EX_RUNDOWN_REF **)(Count->Count + 8) != Count )
          goto LABEL_51;
        v29 = (struct _EX_RUNDOWN_REF **)Count[1].Count;
        if ( *v29 != Count )
          goto LABEL_51;
        *v29 = (struct _EX_RUNDOWN_REF *)v28.Count;
        *(_QWORD *)(v28.Count + 8) = v29;
        Count[-2].Count = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v23);
      KeAbPostRelease((ULONG_PTR)v23);
      ExReleaseRundownProtection_0(Count - 7);
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    v15 = a2[19].Count;
    if ( v15 )
    {
      v16 = (unsigned __int64 *)(*(_QWORD *)(v15 + 1768) + 56LL);
      v17 = KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        ExfAcquirePushLockExclusiveEx(v16, v17, (ULONG_PTR)v16);
      if ( v18 )
        BYTE2(v18[1].Left) |= 1u;
      v19 = a2[17].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v19 + 8) != &a2[17]
        || (v20 = (struct _EX_RUNDOWN_REF **)a2[18].Count, *v20 != &a2[17]) )
      {
LABEL_51:
        __fastfail(3u);
      }
      *v20 = (struct _EX_RUNDOWN_REF *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
    }
    ExReleaseRundownProtection_0(a2 + 1);
    ExWaitForRundownProtectionRelease(a2 + 1);
    ExpWnfDeleteStateData(a2);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    return 0LL;
  }
}
