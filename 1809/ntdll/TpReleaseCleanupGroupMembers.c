/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800739F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  _TP_CLEANUP_GROUP *i; // rax
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  _TP_CLEANUP_GROUP *v9; // rdx
  _TP_CLEANUP_GROUP *v10; // r8
  _TP_CLEANUP_GROUP **v11; // rax
  _TP_CLEANUP_GROUP *v12; // rax
  PTP_CLEANUP_GROUP *v13; // rdx
  _TP_CLEANUP_GROUP *v14; // r8
  _TP_CLEANUP_GROUP **v15; // rax
  signed __int32 v16; // r9d
  signed __int32 v17; // r8d
  bool v18; // zf
  signed __int32 v19; // eax
  PTP_CLEANUP_GROUP *v20; // rcx
  _QWORD **v21; // r14
  _QWORD *v22; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v24; // rdi
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rdi
  signed __int32 *v28; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v29; // [rsp+28h] [rbp-40h]
  _TP_CLEANUP_GROUP *v30; // [rsp+30h] [rbp-38h]
  _QWORD *v31; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CleanupGroup || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !CleanupGroup )
      TppRaiseInvalidParameter(0LL, *(_QWORD *)&CancelPendingCallbacks, CleanupParameter);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    for ( i = (_TP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 2);
          i != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 16);
          i = v30 )
    {
      v6 = (volatile signed __int32 *)((char *)i - 40);
      v28 = (signed __int32 *)((char *)i - 40);
      v30 = *(_TP_CLEANUP_GROUP **)i;
      _m_prefetchw((char *)i + 128);
      v7 = *((_DWORD *)i + 32);
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(v6 + 42, v7 | 0x20000, v7);
      }
      while ( v8 != v7 );
      v9 = (_TP_CLEANUP_GROUP *)(v28 + 10);
      if ( (v7 & 0x30000) != 0 )
      {
        v14 = *(_TP_CLEANUP_GROUP **)v9;
        v15 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v28 + 6);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v9 + 8LL) != v9 || *v15 != v9 )
LABEL_24:
          __fastfail(3u);
        *v15 = v14;
        *((_QWORD *)v14 + 1) = v15;
        _m_prefetchw(v28);
        v16 = *v28;
        while ( v16 )
        {
          v17 = v16;
          v19 = _InterlockedCompareExchange(v28, v16 + 1, v16);
          v18 = v16 == v19;
          v16 = v19;
          if ( v18 )
            goto LABEL_20;
        }
        v17 = 0;
LABEL_20:
        if ( v17 )
        {
          v20 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
          if ( *v20 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
            goto LABEL_24;
          *(_QWORD *)v9 = (char *)CleanupGroup + 64;
          *((_QWORD *)v28 + 6) = v20;
          *v20 = v9;
          *((_QWORD *)CleanupGroup + 9) = v9;
        }
        else
        {
          *((_QWORD *)v28 + 6) = v28 + 10;
          *(_QWORD *)v9 = v9;
        }
      }
      else
      {
        *((_QWORD *)v28 + 23) = retaddr;
        v10 = *(_TP_CLEANUP_GROUP **)v9;
        v11 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v28 + 6);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v9 + 8LL) != v9 )
          goto LABEL_24;
        if ( *v11 != v9 )
          goto LABEL_24;
        *v11 = v10;
        *((_QWORD *)v10 + 1) = v11;
        v12 = (_TP_CLEANUP_GROUP *)(v28 + 10);
        v13 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
        if ( *v13 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
          goto LABEL_24;
        *(_QWORD *)v12 = (char *)CleanupGroup + 64;
        *((_QWORD *)v28 + 6) = v13;
        *v13 = v12;
        *((_QWORD *)CleanupGroup + 9) = v12;
      }
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    v21 = (_QWORD **)((char *)CleanupGroup + 64);
    v22 = (_QWORD *)*((_QWORD *)CleanupGroup + 8);
    while ( v22 != v21 )
    {
      v27 = v22 - 5;
      v22 = (_QWORD *)*v22;
      if ( *(_QWORD *)(v27[1] + 16LL) )
        _guard_dispatch_icall_fptr();
      if ( CancelPendingCallbacks && *(_QWORD *)(v27[1] + 24LL) )
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
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    TppBarrierAdjust((char *)CleanupGroup + 32, 0LL);
  }
}
