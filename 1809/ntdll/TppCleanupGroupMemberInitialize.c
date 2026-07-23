/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x18002DB64
 * Callers:
 *     TppWorkInitialize @ 0x18002DAD4 (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x180030F30 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x18002E500 (RtlAddRefActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180082A9C (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  unsigned int v7; // eax
  int v8; // r14d
  _ACTIVATION_CONTEXT *v9; // rcx
  NTSTATUS v10; // ebx
  _RTL_SRWLOCK *v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rcx
  _RTL_SRWLOCK *v16; // rsi
  volatile signed __int32 *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _ACTIVATION_CONTEXT *v21; // rcx
  PACTIVATION_CONTEXT ActivationContext; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h]

  ActivationContext = 0LL;
  v23 = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  v6 = (volatile signed __int32 **)(a1 + 144);
  if ( !a3 )
  {
    *v6 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    goto LABEL_29;
  }
  *v6 = *(volatile signed __int32 **)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_29:
    v7 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a3 + 60);
  if ( v7 >= 3 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 192) = v7;
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 && *v6 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != (_ACTIVATION_CONTEXT *)-1LL )
      RtlAddRefActivationContext(v9);
  }
  else
  {
    v10 = RtlQueryInformationActivationContext(
            1u,
            0LL,
            0LL,
            ActivationContextBasicInformation,
            &ActivationContext,
            0x10uLL,
            0LL);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( (v23 & 1) != 0 )
    {
      RtlReleaseActivationContext(ActivationContext);
      ActivationContext = (PACTIVATION_CONTEXT)-1LL;
    }
    *(_QWORD *)(a1 + 96) = ActivationContext;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_14:
    v10 = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*v6 + 9);
      v13 = (__int64 *)(a1 + 152);
      v14 = (__int64)(*v6 + 20);
      v15 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v15 != (__int64 *)v14 )
        __fastfail(3u);
      *v13 = v14;
      *(_QWORD *)(a1 + 160) = v15;
      *v15 = v13;
      *(_QWORD *)(v14 + 8) = v13;
      v16 = (_RTL_SRWLOCK *)(*v6 + 18);
    }
    else
    {
      v16 = &TppCleanupGroupMemberpNoPoolListLock;
      RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      v18 = (_QWORD *)(a1 + 152);
      v19 = off_18015FAA8;
      if ( *off_18015FAA8 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v18 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v19;
      *v19 = v18;
      off_18015FAA8 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v16);
    v17 = *(volatile signed __int32 **)(a1 + 16);
    if ( v17 )
    {
      _InterlockedAdd(v17, 1u);
      v10 = 0;
    }
    goto LABEL_26;
  }
  if ( v8 )
  {
    v11 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
    v12 = &TppPoolpSerializedPool;
  }
  else
  {
    v11 = &TppPoolpGlobalPoolLock;
    v12 = (__int64 *)&TppPoolpGlobalPool;
  }
  v10 = TppPoolpReferenceGlobalPool(v12, v11, v6);
  if ( v10 >= 0 )
    goto LABEL_14;
LABEL_26:
  if ( v10 < 0 )
  {
    v21 = *(_ACTIVATION_CONTEXT **)(a1 + 96);
    if ( (unsigned __int64)&v21[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v21);
  }
  return (unsigned int)v10;
}
