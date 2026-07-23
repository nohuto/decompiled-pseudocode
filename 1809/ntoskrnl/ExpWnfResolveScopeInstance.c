/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1406109EC
 * Callers:
 *     NtCreateWnfStateName @ 0x14060ED20 (NtCreateWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060F8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x14060FBB0 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140610054 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1406103C0 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1406AC580 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1406B6170 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14075F710 (NtDeleteWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1406110F4 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x140611984 (ExpWnfFindScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x1406B4388 (ExpWnfCreateProcessContext.c)
 *     ExpWnfFreeScopeInstance @ 0x1406CD260 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfAllocateScopeInstance @ 0x1406CD75C (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x140761350 (ExpWnfAllocateScopeMap.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(struct _EX_RUNDOWN_REF **a1, __int64 a2, __int64 a3, int a4, PSID Sid)
{
  __int64 v5; // r13
  char *ServerSiloGlobals; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r8
  int v11; // eax
  ULONG v12; // edx
  PVOID *v13; // r15
  struct _EX_RUNDOWN_REF *v14; // rsi
  bool v15; // zf
  int CurrentScopeInstance; // ebx
  PVOID PoolWithTag; // rax
  __int64 v19; // r12
  unsigned __int64 *v20; // rdi
  PRTL_BALANCED_NODE v21; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v23; // r14d
  __int64 HostSilo; // rax
  _RTL_BALANCED_NODE *v25; // rax
  _RTL_BALANCED_NODE *v26; // rbx
  struct _EX_RUNDOWN_REF *v27; // rax
  char *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rbx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-40h] BYREF
  PVOID v32; // [rsp+38h] [rbp-38h] BYREF
  __int64 v33; // [rsp+40h] [rbp-30h] BYREF
  PVOID v34; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v35; // [rsp+50h] [rbp-20h]
  PVOID P; // [rsp+58h] [rbp-18h]
  _BYTE v37[16]; // [rsp+60h] [rbp-10h] BYREF
  int v39; // [rsp+C0h] [rbp+50h]

  v39 = a3;
  v5 = a4;
  P = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode || a4 == 4 )
  {
    HostSilo = PsGetHostSilo();
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(HostSilo);
  }
  else
  {
    ServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  v9 = (volatile signed __int64 *)(ServerSiloGlobals + 904);
  if ( !*((_QWORD *)ServerSiloGlobals + 113) )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v34);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(v9, (signed __int64)v34, 0LL) )
      ExFreePoolWithTag(v34, 0x20666E57u);
  }
  v33 = *(_QWORD *)(a2 + 1720);
  v10 = v33;
  if ( !v33 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v33);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v10 = v33;
  }
  if ( Sid || (v11 = 1, a3) )
    v11 = 0;
  HIDWORD(NumberOfBytes) = v11;
  v12 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 4 )
    {
      v13 = (PVOID *)(v10 + 8 * ((unsigned int)(v5 - 1) + 4LL));
      goto LABEL_12;
    }
    v13 = (PVOID *)(*v9 + 16);
  }
  else
  {
    v13 = (PVOID *)(*v9 + 8);
  }
  HIDWORD(NumberOfBytes) = 1;
LABEL_12:
  v14 = (struct _EX_RUNDOWN_REF *)*v13;
  v32 = *v13;
  if ( HIDWORD(NumberOfBytes) && v14 )
    goto LABEL_14;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v12 = 4;
          goto LABEL_47;
        case 2:
          v12 = RtlLengthSid(Sid);
          goto LABEL_47;
        case 3:
LABEL_47:
          NumberOfBytes = v12;
          goto LABEL_29;
      }
    }
    v12 = 0;
    goto LABEL_47;
  }
  LODWORD(NumberOfBytes) = 8;
  v35 = v37;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                           a2,
                           v39,
                           v5,
                           (unsigned int)v37,
                           (__int64)&NumberOfBytes,
                           (__int64)&NumberOfBytes + 4);
  if ( CurrentScopeInstance == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v35 = PoolWithTag;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                             a2,
                             v39,
                             v5,
                             (_DWORD)PoolWithTag,
                             (__int64)&NumberOfBytes,
                             (__int64)&NumberOfBytes + 4);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_17;
  if ( (_DWORD)NumberOfBytes )
    Sid = v35;
LABEL_29:
  if ( HIDWORD(NumberOfBytes) && v14 )
  {
LABEL_14:
    v15 = ExAcquireRundownProtection_0(v14 + 1) == 0;
    goto LABEL_15;
  }
  v19 = *v9 + 8 * (2 * v5 + v5 + 4);
  v20 = (unsigned __int64 *)(*v9 + 8 * (v5 + 2 * v5 + 3));
  v21 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v20, v21, (ULONG_PTR)v20);
  if ( v21 )
    BYTE2(v21[1].Left) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v19, Sid, (unsigned int)NumberOfBytes);
  v14 = ScopeInstance;
  if ( ScopeInstance )
  {
    v23 = ExAcquireRundownProtection_0(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v20);
    KeAbPostRelease((ULONG_PTR)v20);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v20);
    KeAbPostRelease((ULONG_PTR)v20);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&v32, (unsigned int)v5, Sid, (unsigned int)NumberOfBytes);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_17;
    v25 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx(v20, v25, (ULONG_PTR)v20);
    if ( v26 )
      BYTE2(v26[1].Left) |= 1u;
    v27 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v19, Sid, (unsigned int)NumberOfBytes);
    v14 = v27;
    if ( !v27 )
    {
      v28 = (char *)v32;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v32 + 1);
      v29 = *(_QWORD *)v19;
      v30 = v28 + 32;
      if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
        __fastfail(3u);
      *v30 = v29;
      v30[1] = v19;
      *(_QWORD *)(v29 + 8) = v30;
      *(_QWORD *)v19 = v30;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v20);
      KeAbPostRelease((ULONG_PTR)v20);
      if ( HIDWORD(NumberOfBytes) )
        _InterlockedCompareExchange64((volatile signed __int64 *)v13, (signed __int64)v32, 0LL);
      v14 = (struct _EX_RUNDOWN_REF *)v32;
      goto LABEL_16;
    }
    v23 = ExAcquireRundownProtection_0(v27 + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v20);
    KeAbPostRelease((ULONG_PTR)v20);
    ExpWnfFreeScopeInstance(v32);
  }
  v15 = v23 == 0;
LABEL_15:
  if ( !v15 )
  {
LABEL_16:
    CurrentScopeInstance = 0;
    *a1 = v14;
    goto LABEL_17;
  }
  CurrentScopeInstance = -1073741772;
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
