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
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  volatile signed __int64 *v7; // rcx
  signed __int64 v8; // rax
  PVOID v9; // rcx
  __int64 v10; // rdi
  _RTL_SRWLOCK *v11; // rdx
  const void **v12; // rcx
  void *v13; // r8
  signed __int64 v14; // r8
  __int64 v15; // rdx
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD v21[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v13 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v13);
  }
  v2 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v2 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = (_RTL_SRWLOCK *)a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 9);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    v7 = (volatile signed __int64 *)(a1[18] + 72LL);
    v8 = _InterlockedCompareExchange64(v7, 0LL, 1LL);
    if ( v8 != 1 )
    {
      do
      {
        v14 = v8 & 6;
        v15 = 3LL;
        if ( v14 != 2 )
          v15 = -1LL;
        v16 = v8 + v15;
        v17 = v8;
        v8 = _InterlockedCompareExchange64(v7, v16, v8);
      }
      while ( v17 != v8 );
      if ( v14 == 2 )
        RtlpWakeSRWLock(v7, v16, 0);
    }
    v9 = (PVOID)a1[18];
    if ( v9 == TppPoolpGlobalPool )
    {
      v11 = &TppPoolpGlobalPoolLock;
      v12 = (const void **)&TppPoolpGlobalPool;
    }
    else
    {
      if ( v9 != (PVOID)TppPoolpSerializedPool )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v9) )
          TppPoolpFree(v9);
        goto LABEL_14;
      }
      v11 = &TppPoolpSerializedPoolLock;
      v12 = (const void **)&TppPoolpSerializedPool;
    }
    TppPoolpDereferenceGlobalPool(v12, v11);
    goto LABEL_14;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v18 = a1 + 19;
  v19 = a1[19];
  v20 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v19 + 8) != a1 + 19 || (_QWORD *)*v20 != v18 )
    __fastfail(3u);
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  a1[20] = a1 + 19;
  *v18 = v18;
  RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_14:
  v10 = a1[4];
  if ( v10 )
  {
    memset(v21, 0, 0xF8uLL);
    v21[11] = v10;
    v21[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback(v21);
    _guard_dispatch_icall_fptr();
    TppCallbackEpilog((unsigned int *)v21);
  }
}
