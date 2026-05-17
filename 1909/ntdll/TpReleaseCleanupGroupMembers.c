/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x180066B30
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, __int64 a2, __int64 a3, _PEB_LDR_DATA *Ldr)
{
  int v4; // r15d
  _QWORD *i; // rax
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed __int32 *v10; // rcx
  __int64 v11; // rdx
  signed __int32 **v12; // rax
  signed __int32 **v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax
  signed __int32 v17; // r8d
  bool v18; // zf
  signed __int32 v19; // eax
  _QWORD *v20; // rcx
  _QWORD **v21; // r14
  _QWORD *v22; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v24; // rdi
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rdi
  signed __int32 *v28; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v29; // [rsp+20h] [rbp-38h]
  _QWORD *v30; // [rsp+28h] [rbp-30h]
  _QWORD *v31; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    if ( !a1 )
      TppRaiseInvalidParameter(0LL, a2, a3, Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v30 )
    {
      v7 = (volatile signed __int32 *)(i - 5);
      v28 = (signed __int32 *)(i - 5);
      v30 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v8 = *((_DWORD *)i + 32);
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(v7 + 42, v8 | 0x20000, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x30000) != 0 )
      {
        v14 = v28 + 10;
        v15 = *((_QWORD *)v28 + 5);
        v16 = (_QWORD *)*((_QWORD *)v28 + 6);
        if ( *(signed __int32 **)(v15 + 8) != v28 + 10 || (_QWORD *)*v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        _m_prefetchw(v28);
        v17 = *v28;
        do
        {
          if ( !v17 )
          {
            *((_QWORD *)v28 + 6) = v28 + 10;
            *v14 = v14;
            goto LABEL_12;
          }
          v19 = _InterlockedCompareExchange(v28, v17 + 1, v17);
          v18 = v17 == v19;
          v17 = v19;
        }
        while ( !v18 );
        v20 = *(_QWORD **)(a1 + 72);
        if ( *v20 != a1 + 64 )
          __fastfail(3u);
        *v14 = a1 + 64;
        *((_QWORD *)v28 + 6) = v20;
        *v20 = v14;
        *(_QWORD *)(a1 + 72) = v14;
      }
      else
      {
        *((_QWORD *)v28 + 23) = retaddr;
        v10 = v28 + 10;
        v11 = *((_QWORD *)v28 + 5);
        v12 = (signed __int32 **)*((_QWORD *)v28 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
          __fastfail(3u);
        *v12 = (signed __int32 *)v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = *(signed __int32 ***)(a1 + 72);
        if ( *v13 != (signed __int32 *)(a1 + 64) )
          __fastfail(3u);
        *(_QWORD *)v10 = a1 + 64;
        *((_QWORD *)v28 + 6) = v13;
        *v13 = v10;
        *(_QWORD *)(a1 + 72) = v10;
      }
LABEL_12:
      ;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v21 = (_QWORD **)(a1 + 64);
    v22 = *(_QWORD **)(a1 + 64);
    while ( v22 != v21 )
    {
      v27 = v22 - 5;
      v22 = (_QWORD *)*v22;
      if ( *(_QWORD *)(v27[1] + 16LL) )
        _guard_dispatch_icall_fptr();
      if ( v4 && *(_QWORD *)(v27[1] + 24LL) )
        _guard_dispatch_icall_fptr();
    }
    for ( j = *v21; j != v21; j = v31 )
    {
      v24 = (volatile signed __int32 *)(j - 5);
      v29 = (volatile signed __int32 *)(j - 5);
      v25 = (_QWORD *)*j;
      v31 = (_QWORD *)*j;
      v26 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v26 != j )
        __fastfail(3u);
      *v26 = v25;
      v25[1] = v26;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v24 + 14, 0LL);
      if ( *((_QWORD *)v24 + 3) )
      {
        if ( (v24[42] & 0x10000) != 0 )
        {
          v24 = v29;
        }
        else
        {
          v24 = v29;
          _guard_dispatch_icall_fptr();
        }
      }
      if ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) == 1 )
        _guard_dispatch_icall_fptr();
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    TppBarrierAdjust(a1 + 32, 0LL);
  }
}
