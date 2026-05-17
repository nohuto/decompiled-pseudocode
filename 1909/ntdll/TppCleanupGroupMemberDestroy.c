/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18003741C
 * Callers:
 *     TppDestroyTimer @ 0x180031A74 (TppDestroyTimer.c)
 *     TppSimplepFree @ 0x180037220 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 *     TppWorkInitialize @ 0x180037608 (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x180062820 (TpAllocIoCompletion.c)
 *     TppWorkpFree @ 0x180077940 (TppWorkpFree.c)
 *     TppAllocAlpcCompletion @ 0x180078C54 (TppAllocAlpcCompletion.c)
 *     TppIopFree @ 0x18007DDB0 (TppIopFree.c)
 *     TpAllocJobNotification @ 0x18007E710 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x180083290 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180084200 (TppJobpFree.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWakeSRWLock @ 0x180035E30 (RtlpWakeSRWLock.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     TppCleanupGroupRemoveMember @ 0x180074688 (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180077348 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppPoolpFree @ 0x180081CD0 (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  signed __int64 v4; // r8
  _QWORD *v5; // rax
  signed __int64 v6; // rdx
  signed __int64 *v7; // rcx
  volatile signed __int64 *v8; // rcx
  signed __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  unsigned __int64 v11; // rdi
  void *v12; // rdx
  __int64 *v13; // rcx
  volatile signed __int32 *v14; // r8
  __int64 v15; // rdx
  signed __int64 v16; // rtt
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  unsigned __int64 v20[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v14 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, v14);
  }
  v2 = (volatile signed __int32 *)a1[12];
  if ( v2 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 72);
    v5 = a1 + 19;
    v6 = a1[19];
    v7 = (signed __int64 *)a1[20];
    if ( *(_QWORD **)(v6 + 8) != a1 + 19 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    a1[20] = a1 + 19;
    *v5 = v5;
    v8 = (volatile signed __int64 *)(a1[18] + 72LL);
    v9 = _InterlockedCompareExchange64(v8, 0LL, 1LL);
    if ( v9 != 1 )
    {
      do
      {
        v4 = v9 & 6;
        v15 = 3LL;
        if ( v4 != 2 )
          v15 = -1LL;
        v6 = v9 + v15;
        v16 = v9;
        v9 = _InterlockedCompareExchange64(v8, v6, v9);
      }
      while ( v16 != v9 );
      if ( v4 == 2 )
        RtlpWakeSRWLock(v8, v6, 0);
    }
    v10 = (volatile signed __int32 *)a1[18];
    if ( v10 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v12 = &TppPoolpGlobalPoolLock;
      v13 = &TppPoolpGlobalPool;
    }
    else
    {
      if ( v10 != (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        if ( !_InterlockedDecrement(v10) )
          TppPoolpFree(v10, v6, v4);
        goto LABEL_14;
      }
      v12 = &TppPoolpSerializedPoolLock;
      v13 = &TppPoolpSerializedPool;
    }
    TppPoolpDereferenceGlobalPool((const void **)v13, (__int64)v12);
    goto LABEL_14;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v17 = a1 + 19;
  v18 = a1[19];
  v19 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v18 + 8) != a1 + 19 || (_QWORD *)*v19 != v17 )
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  a1[20] = a1 + 19;
  *v17 = v17;
  RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_14:
  v11 = a1[4];
  if ( v11 )
  {
    memset(v20, 0, 0xF8uLL);
    v20[11] = v11;
    v20[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback(v20);
    _guard_dispatch_icall_fptr();
    TppCallbackEpilog(v20);
  }
}
