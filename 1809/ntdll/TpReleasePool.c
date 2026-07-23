/*
 * XREFs of TpReleasePool @ 0x180082880
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18002D82C (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x180082A9C (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x18008AE5C (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A38B0 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x180110CD8 (TppETWPoolClose.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  _RTL_SRWLOCK *v14; // rdx
  const void **v15; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v18; // [rsp+88h] [rbp+10h]
  signed __int64 v19; // [rsp+90h] [rbp+18h]

  v18 = 0;
  if ( !Pool
    || Pool == TppPoolpGlobalPool
    || Pool == (PTP_POOL)TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, v1, v2);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      TppRaiseInvalidParameter(v5, v4, v6);
    }
    else
    {
      if ( !*((_BYTE *)Pool + 376) )
      {
        *((_BYTE *)Pool + 376) = 1;
        ZwShutdownWorkerFactory(*((HANDLE *)Pool + 7), (LONG *)Pool);
      }
      while ( 1 )
      {
        _m_prefetchw((char *)Pool + 8);
        v7 = *((_QWORD *)Pool + 1);
        LODWORD(v19) = v7;
        do
        {
          if ( !HIDWORD(v7) )
            break;
          HIDWORD(v19) = HIDWORD(v7) - 1;
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v19, v7);
          LODWORD(v19) = v7;
        }
        while ( v8 != v7 );
        if ( !HIDWORD(v7) )
          break;
        v9 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v9 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v9; j = (unsigned int)(j + 1) )
          {
            v12 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j);
            if ( v12 )
              v9 = v12 - 16;
            else
              v9 = 0LL;
          }
        }
        if ( !v9 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v9 && *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
      v18 = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 )
      TppETWPoolClose(Pool);
    if ( v18 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v14 = &TppPoolpGlobalPoolLock;
        v15 = (const void **)&TppPoolpGlobalPool;
      }
      else
      {
        if ( Pool != (PTP_POOL)TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
            TppPoolpFree(Pool);
          return;
        }
        v14 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
        v15 = (const void **)&TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool(v15, v14);
    }
  }
}
