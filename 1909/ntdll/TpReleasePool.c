/*
 * XREFs of TpReleasePool @ 0x180081AA0
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002F2D4 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppPoolpFree @ 0x180081CD0 (TppPoolpFree.c)
 *     ZwShutdownWorkerFactory @ 0x1800A0460 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x18010F4C8 (TppETWPoolClose.c)
 *     TppQueueRemoveHead @ 0x18010FAC0 (TppQueueRemoveHead.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  _RTL_SRWLOCK *v16; // rdx
  const void **v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v20; // [rsp+88h] [rbp+10h]
  signed __int64 v21; // [rsp+90h] [rbp+18h]

  v20 = 0;
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
        v8 = *((_QWORD *)Pool + 1);
        LODWORD(v21) = v8;
        do
        {
          if ( !HIDWORD(v8) )
            break;
          HIDWORD(v21) = HIDWORD(v8) - 1;
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v21, v8);
          LODWORD(v21) = v8;
        }
        while ( v9 != v8 );
        if ( !HIDWORD(v8) )
          break;
        v10 = 0LL;
        for ( i = 0; ; ++i )
        {
          HIDWORD(v18) = i;
          if ( i >= 3 )
            break;
          if ( v10 )
            goto LABEL_27;
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            LODWORD(v18) = j;
            if ( (unsigned int)j >= TppNumberNodes || v10 )
              break;
            v13 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j, i, v6, v7, v18);
            if ( v13 )
              v10 = v13 - 16;
            else
              v10 = 0LL;
          }
        }
        if ( !v10 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v10 && *(_QWORD *)(*(_QWORD *)v10 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
      v20 = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v14 = 2147353478LL;
    if ( *(_BYTE *)v14 )
      TppETWPoolClose(Pool);
    if ( v20 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v16 = &TppPoolpGlobalPoolLock;
        v17 = (const void **)&TppPoolpGlobalPool;
      }
      else
      {
        if ( Pool != (PTP_POOL)TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
            TppPoolpFree(Pool);
          return;
        }
        v16 = &TppPoolpSerializedPoolLock;
        v17 = (const void **)&TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool(v17, v16);
    }
  }
}
