/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800739E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, _PEB_LDR_DATA *Ldr)
{
  int v4; // r15d
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  _QWORD *i; // rax
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 *v13; // rdx
  __int64 v14; // r8
  signed __int32 **v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r8
  signed __int32 **v19; // rax
  signed __int32 v20; // r9d
  signed __int32 v21; // r8d
  bool v22; // zf
  signed __int32 v23; // eax
  signed __int32 **v24; // rcx
  _QWORD **v25; // r14
  _QWORD *v26; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v28; // rdi
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  _QWORD *v31; // rdi
  signed __int32 *v32; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v33; // [rsp+28h] [rbp-40h]
  _QWORD *v34; // [rsp+30h] [rbp-38h]
  _QWORD *v35; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v4 = a2;
  if ( !a1 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    if ( !a1 )
      TppRaiseInvalidParameter(0LL, a2, a3, Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 56, a2, a3, (__int64)Ldr);
    RtlAcquireSRWLockExclusive(a1 + 8, v6, v7, v8);
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v34 )
    {
      v10 = (volatile signed __int32 *)(i - 5);
      v32 = (signed __int32 *)(i - 5);
      v34 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v11 = *((_DWORD *)i + 32);
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(v10 + 42, v11 | 0x20000, v11);
      }
      while ( v12 != v11 );
      v13 = v32 + 10;
      if ( (v11 & 0x30000) != 0 )
      {
        v18 = *(_QWORD *)v13;
        v19 = (signed __int32 **)*((_QWORD *)v32 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v13 + 8LL) != v13 || *v19 != v13 )
LABEL_24:
          __fastfail(3u);
        *v19 = (signed __int32 *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        _m_prefetchw(v32);
        v20 = *v32;
        while ( v20 )
        {
          v21 = v20;
          v23 = _InterlockedCompareExchange(v32, v20 + 1, v20);
          v22 = v20 == v23;
          v20 = v23;
          if ( v22 )
            goto LABEL_20;
        }
        v21 = 0;
LABEL_20:
        if ( v21 )
        {
          v24 = *(signed __int32 ***)(a1 + 72);
          if ( *v24 != (signed __int32 *)(a1 + 64) )
            goto LABEL_24;
          *(_QWORD *)v13 = a1 + 64;
          *((_QWORD *)v32 + 6) = v24;
          *v24 = v13;
          *(_QWORD *)(a1 + 72) = v13;
        }
        else
        {
          *((_QWORD *)v32 + 6) = v32 + 10;
          *(_QWORD *)v13 = v13;
        }
      }
      else
      {
        *((_QWORD *)v32 + 23) = retaddr;
        v14 = *(_QWORD *)v13;
        v15 = (signed __int32 **)*((_QWORD *)v32 + 6);
        if ( *(signed __int32 **)(*(_QWORD *)v13 + 8LL) != v13 )
          goto LABEL_24;
        if ( *v15 != v13 )
          goto LABEL_24;
        *v15 = (signed __int32 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        v16 = v32 + 10;
        v17 = *(_QWORD **)(a1 + 72);
        if ( *v17 != a1 + 64 )
          goto LABEL_24;
        *v16 = a1 + 64;
        *((_QWORD *)v32 + 6) = v17;
        *v17 = v16;
        *(_QWORD *)(a1 + 72) = v16;
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v25 = (_QWORD **)(a1 + 64);
    v26 = *(_QWORD **)(a1 + 64);
    while ( v26 != v25 )
    {
      v31 = v26 - 5;
      v26 = (_QWORD *)*v26;
      if ( *(_QWORD *)(v31[1] + 16LL) )
        _guard_dispatch_icall_fptr();
      if ( v4 && *(_QWORD *)(v31[1] + 24LL) )
        _guard_dispatch_icall_fptr();
    }
    for ( j = *v25; j != v25; j = v35 )
    {
      v28 = (volatile signed __int32 *)(j - 5);
      v33 = (volatile signed __int32 *)(j - 5);
      v29 = (_QWORD *)*j;
      v35 = (_QWORD *)*j;
      v30 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v30 != j )
        __fastfail(3u);
      *v30 = v29;
      v29[1] = v30;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v28 + 14, 0LL);
      if ( *((_QWORD *)v28 + 3) )
      {
        if ( (v28[42] & 0x10000) != 0 )
        {
          v28 = v33;
        }
        else
        {
          v28 = v33;
          _guard_dispatch_icall_fptr();
        }
      }
      if ( _InterlockedExchangeAdd(v28, 0xFFFFFFFF) == 1 )
        _guard_dispatch_icall_fptr();
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    TppBarrierAdjust(a1 + 32, 0LL);
  }
}
