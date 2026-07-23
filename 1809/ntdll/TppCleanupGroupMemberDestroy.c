/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18002D600
 * Callers:
 *     TppWorkpFree @ 0x18002C4E0 (TppWorkpFree.c)
 *     TppSimplepFree @ 0x18002D460 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x18002D4A0 (TpSimpleTryPost.c)
 *     TppDestroyTimer @ 0x18002D5D4 (TppDestroyTimer.c)
 *     TppWorkInitialize @ 0x18002DAD4 (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x180030F30 (TpAllocIoCompletion.c)
 *     TppIopFree @ 0x180031300 (TppIopFree.c)
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x180086B20 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180087F50 (TppJobpFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18002F090 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x18002F0D4 (TppCleanupGroupRemoveMember.c)
 *     TppPoolpFree @ 0x180082A9C (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  PVOID v7; // rcx
  __int64 v8; // rdi
  _RTL_SRWLOCK *v9; // rdx
  __int64 *v10; // rcx
  void *v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdx
  _QWORD v15[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v11 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v11);
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
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[18] + 72LL));
    v7 = (PVOID)a1[18];
    if ( v7 == TppPoolpGlobalPool )
    {
      v9 = &TppPoolpGlobalPoolLock;
      v10 = (__int64 *)&TppPoolpGlobalPool;
    }
    else
    {
      if ( v7 != (PVOID)TppPoolpSerializedPool )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          TppPoolpFree(v7);
        goto LABEL_13;
      }
      v9 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
      v10 = &TppPoolpSerializedPool;
    }
    TppPoolpDereferenceGlobalPool(v10, v9);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v12 = a1 + 19;
  v13 = a1[19];
  v14 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v13 + 8) != a1 + 19 || (_QWORD *)*v14 != v12 )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  a1[20] = a1 + 19;
  *v12 = v12;
  RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v8 = a1[4];
  if ( v8 )
  {
    memset(v15, 0, 0xF8uLL);
    v15[11] = v8;
    v15[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback(v15);
    _guard_dispatch_icall_fptr();
    TppCallbackEpilog((unsigned int *)v15);
  }
}
