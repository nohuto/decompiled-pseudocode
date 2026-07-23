/*
 * XREFs of sub_18003741C @ 0x18003741C
 * Callers:
 *     sub_180031A74 @ 0x180031A74 (sub_180031A74.c)
 *     sub_180037220 @ 0x180037220 (sub_180037220.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 *     sub_180037608 @ 0x180037608 (sub_180037608.c)
 *     TpAllocIoCompletion @ 0x180062780 (TpAllocIoCompletion.c)
 *     sub_1800774C0 @ 0x1800774C0 (sub_1800774C0.c)
 *     sub_1800787D4 @ 0x1800787D4 (sub_1800787D4.c)
 *     sub_18007D710 @ 0x18007D710 (sub_18007D710.c)
 *     TpAllocJobNotification @ 0x18007E070 (TpAllocJobNotification.c)
 *     sub_180082BF0 @ 0x180082BF0 (sub_180082BF0.c)
 *     sub_180083B60 @ 0x180083B60 (sub_180083B60.c)
 * Callees:
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035E30 @ 0x180035E30 (sub_180035E30.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180074208 @ 0x180074208 (sub_180074208.c)
 *     sub_180076EC8 @ 0x180076EC8 (sub_180076EC8.c)
 *     sub_180081630 @ 0x180081630 (sub_180081630.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __fastcall sub_18003741C(_QWORD *a1)
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
    sub_180074208(a1);
    v13 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080, v13);
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
        sub_180035E30(v7, v16, 0);
    }
    v9 = (PVOID)a1[18];
    if ( v9 == qword_180166470 )
    {
      v11 = &stru_180166480;
      v12 = (const void **)&qword_180166470;
    }
    else
    {
      if ( v9 != (PVOID)qword_180166458 )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v9) )
          sub_180081630(v9);
        goto LABEL_14;
      }
      v11 = &stru_180166468;
      v12 = (const void **)&qword_180166458;
    }
    sub_18002F2D4(v12, v11);
    goto LABEL_14;
  }
  RtlAcquireSRWLockExclusive(&stru_18016A320);
  v18 = a1 + 19;
  v19 = a1[19];
  v20 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v19 + 8) != a1 + 19 || (_QWORD *)*v20 != v18 )
    __fastfail(3u);
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  a1[20] = a1 + 19;
  *v18 = v18;
  RtlReleaseSRWLockExclusive(&stru_18016A320);
LABEL_14:
  v10 = a1[4];
  if ( v10 )
  {
    memset(v21, 0, 0xF8uLL);
    v21[11] = v10;
    v21[12] = a1[11];
    sub_180076EC8(v21);
    _guard_dispatch_icall_fptr();
    sub_1800351D0((unsigned int *)v21);
  }
}
