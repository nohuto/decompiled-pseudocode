/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x180037DCC
 * Callers:
 *     TppWorkInitialize @ 0x180037608 (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x180062820 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x180078C54 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x18007E710 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x180029A80 (RtlAddRefActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x180035E30 (RtlpWakeSRWLock.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x180081CD0 (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // eax
  int v9; // r15d
  _ACTIVATION_CONTEXT *v10; // rcx
  NTSTATUS v11; // edi
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdx
  volatile signed __int64 *v15; // rcx
  signed __int64 v16; // rax
  volatile signed __int32 *v17; // rax
  _RTL_SRWLOCK *v18; // rdx
  volatile signed __int32 **v19; // rcx
  signed __int64 v20; // r8
  __int64 v21; // rdx
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _ACTIVATION_CONTEXT *v27; // rcx
  PACTIVATION_CONTEXT ActivationContext; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-38h]

  ActivationContext = 0LL;
  v29 = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  v6 = (volatile signed __int32 **)(a1 + 144);
  if ( a3 )
  {
    v7 = *(volatile signed __int32 **)(a3 + 8);
    *v6 = v7;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
    if ( *(_DWORD *)a3 <= 1u )
    {
      *(_DWORD *)(a1 + 192) = 1;
    }
    else
    {
      v8 = *(_DWORD *)(a3 + 60);
      if ( v8 >= 3 )
        return (unsigned int)-1073741811;
      *(_DWORD *)(a1 + 192) = v8;
    }
  }
  else
  {
    *v6 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_DWORD *)(a1 + 192) = 1;
    v7 = 0LL;
  }
  v9 = a4 & 2;
  if ( (a4 & 2) != 0 && v7 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v10 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
  if ( v10 )
  {
    if ( v10 != (_ACTIVATION_CONTEXT *)-1LL )
      RtlAddRefActivationContext(v10);
  }
  else
  {
    v11 = RtlQueryInformationActivationContext(
            1u,
            0LL,
            0LL,
            ActivationContextBasicInformation,
            &ActivationContext,
            0x10uLL,
            0LL);
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( (v29 & 1) != 0 )
    {
      RtlReleaseActivationContext(ActivationContext);
      ActivationContext = (PACTIVATION_CONTEXT)-1LL;
    }
    *(_QWORD *)(a1 + 96) = ActivationContext;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_13:
    v11 = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*v6 + 9);
      v12 = (__int64 *)(a1 + 152);
      v13 = (__int64)(*v6 + 20);
      v14 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v14 != (__int64 *)v13 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(a1 + 160) = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      v15 = (volatile signed __int64 *)(*v6 + 18);
      v16 = _InterlockedCompareExchange64(v15, 0LL, 1LL);
      if ( v16 != 1 )
      {
        do
        {
          v20 = v16 & 6;
          v21 = 3LL;
          if ( v20 != 2 )
            v21 = -1LL;
          v22 = v16 + v21;
          v23 = v16;
          v16 = _InterlockedCompareExchange64(v15, v22, v16);
        }
        while ( v23 != v16 );
        if ( v20 == 2 )
          RtlpWakeSRWLock(v15, v22, 0);
      }
      v11 = 0;
    }
    else
    {
      RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      v24 = (_QWORD *)(a1 + 152);
      v25 = off_18015FAA0;
      if ( *off_18015FAA0 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v24 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v25;
      *v25 = v24;
      off_18015FAA0 = (_UNKNOWN **)(a1 + 152);
      RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
    }
    v17 = *(volatile signed __int32 **)(a1 + 16);
    if ( v17 )
    {
      _InterlockedAdd(v17, 1u);
      v11 = 0;
    }
    goto LABEL_35;
  }
  if ( v9 )
  {
    v18 = &TppPoolpSerializedPoolLock;
    v19 = (volatile signed __int32 **)&TppPoolpSerializedPool;
  }
  else
  {
    v18 = &TppPoolpGlobalPoolLock;
    v19 = (volatile signed __int32 **)&TppPoolpGlobalPool;
  }
  v11 = TppPoolpReferenceGlobalPool(v19, v18, v6);
  if ( v11 >= 0 )
    goto LABEL_13;
LABEL_35:
  if ( v11 < 0 )
  {
    v27 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
    if ( (unsigned __int64)&v27[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v27);
  }
  return (unsigned int)v11;
}
