/*
 * XREFs of TpReleasePool @ 0x180082870
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180082A8C (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x18008AE4C (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A3890 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x180110CD8 (TppETWPoolClose.c)
 */

signed __int64 __fastcall TpReleasePool(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v14; // rax
  signed __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  signed __int64 *v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v24; // [rsp+88h] [rbp+10h]
  signed __int64 v25; // [rsp+90h] [rbp+18h]

  v24 = 0;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (signed __int64)NtCurrentPeb();
    v22 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v22 + 72) )
      return TppRaiseInvalidParameter(v22, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 368, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter(v6, v5, v7, v8);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v9 = *(_QWORD *)(a1 + 8);
        LODWORD(v25) = v9;
        do
        {
          if ( !HIDWORD(v9) )
            break;
          HIDWORD(v25) = HIDWORD(v9) - 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v25, v9);
          LODWORD(v25) = v9;
        }
        while ( v10 != v9 );
        if ( !HIDWORD(v9) )
          break;
        v11 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v11 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v11; j = (unsigned int)(j + 1) )
          {
            v14 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j);
            if ( v14 )
              v11 = v14 - 16;
            else
              v11 = 0LL;
          }
        }
        if ( !v11 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v11 && *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
      v24 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    result = (signed __int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (signed __int64)NtCurrentPeb();
      v19 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v19 = 2147353478LL;
    }
    if ( *(_BYTE *)v19 )
      result = TppETWPoolClose(a1);
    if ( v24 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v20 = &TppPoolpGlobalPoolLock;
        v21 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( a1 != TppPoolpSerializedPool )
        {
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            return TppPoolpFree(a1, v16);
          return result;
        }
        v20 = (signed __int64 *)&TppPoolpSerializedPoolLock;
        v21 = &TppPoolpSerializedPool;
      }
      return TppPoolpDereferenceGlobalPool((const void **)v21, (unsigned __int64)v20, v17, v18);
    }
  }
  return result;
}
