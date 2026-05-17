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
 *     TppAlpcpFree @ 0x180086B10 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180087F40 (TppJobpFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18002F090 (TppCallbackCheckThreadBeforeCallback.c)
 *     TppCleanupGroupRemoveMember @ 0x18002F0D4 (TppCleanupGroupRemoveMember.c)
 *     TppPoolpFree @ 0x180082A8C (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1, unsigned __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rdi
  void *v13; // rdx
  __int64 *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD v18[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    a3 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(a3, 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag, (unsigned __int64)a3);
  }
  v5 = a1[12];
  if ( v5 != -1 )
    RtlReleaseActivationContext(v5);
  v6 = a1[18];
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(v6 + 72, a2, (unsigned __int64 *)a3, a4);
    v7 = a1 + 19;
    v8 = a1[19];
    v9 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v8 + 8) != a1 + 19 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[20] = a1 + 19;
    *v7 = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[18] + 72LL));
    v11 = (volatile signed __int32 *)a1[18];
    if ( v11 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v13 = &TppPoolpGlobalPoolLock;
      v14 = &TppPoolpGlobalPool;
    }
    else
    {
      if ( v11 != (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
          TppPoolpFree(v11, v10);
        goto LABEL_13;
      }
      v13 = &TppPoolpSerializedPoolLock;
      v14 = &TppPoolpSerializedPool;
    }
    TppPoolpDereferenceGlobalPool(v14, v13);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppCleanupGroupMemberpNoPoolListLock, a2, (unsigned __int64 *)a3, a4);
  v15 = a1 + 19;
  v16 = a1[19];
  v17 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v16 + 8) != a1 + 19 || (_QWORD *)*v17 != v15 )
    __fastfail(3u);
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  a1[20] = a1 + 19;
  *v15 = v15;
  RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v12 = a1[4];
  if ( v12 )
  {
    memset(v18, 0, 0xF8uLL);
    v18[11] = v12;
    v18[12] = a1[11];
    TppCallbackCheckThreadBeforeCallback(v18);
    _guard_dispatch_icall_fptr();
    TppCallbackEpilog((unsigned int *)v18);
  }
}
