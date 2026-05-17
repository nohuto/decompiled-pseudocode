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
    sub_180074208(a1);
    v14 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)dword_180166080, v14);
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
        sub_180035E30(v8, v6, 0);
    }
    v10 = (volatile signed __int32 *)a1[18];
    if ( v10 == (volatile signed __int32 *)qword_180166470 )
    {
      v12 = &unk_180166480;
      v13 = &qword_180166470;
    }
    else
    {
      if ( v10 != (volatile signed __int32 *)qword_180166458 )
      {
        if ( !_InterlockedDecrement(v10) )
          sub_180081630(v10, v6, v4);
        goto LABEL_14;
      }
      v12 = &unk_180166468;
      v13 = &qword_180166458;
    }
    sub_18002F2D4((const void **)v13, (__int64)v12);
    goto LABEL_14;
  }
  RtlAcquireSRWLockExclusive(&qword_18016A320);
  v17 = a1 + 19;
  v18 = a1[19];
  v19 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v18 + 8) != a1 + 19 || (_QWORD *)*v19 != v17 )
    __fastfail(3u);
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  a1[20] = a1 + 19;
  *v17 = v17;
  RtlReleaseSRWLockExclusive(&qword_18016A320);
LABEL_14:
  v11 = a1[4];
  if ( v11 )
  {
    memset(v20, 0, 0xF8uLL);
    v20[11] = v11;
    v20[12] = a1[11];
    sub_180076EC8(v20);
    _guard_dispatch_icall_fptr();
    sub_1800351D0(v20);
  }
}
