/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x180085520
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180085510 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800DAB30 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r14d
  __int64 v6; // rsi
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  unsigned __int64 i; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rdi
  void *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  __int64 v22; // r9
  int v24; // edi
  int v25; // edx
  int v26; // ecx

  v4 = a2;
  v6 = 3LL * (unsigned int)a2;
  v7 = (unsigned __int64 *)(&LdrpVectorHandlerList + 3 * (unsigned int)a2 + 1);
  RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * (unsigned int)a2), a2, a3, a4);
  for ( i = *v7; ; i = *(_QWORD *)i )
  {
    if ( (unsigned __int64 *)i == v7 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v8, v9, v10);
    v24 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v24 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v24 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (*(_DWORD *)(i + 16))-- == 1 )
  {
    LdrProtectMrdata(0, v8, v9, v10);
    v13 = *(_QWORD **)i;
    v14 = *(_QWORD **)(i + 8);
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v14 != i )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    if ( v14 == v13 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
    v15 = i;
  }
  else
  {
    if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v8, v9, v10);
      v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
      if ( v26 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v15 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
  if ( v15 )
  {
    v16 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v16, 0, i);
    LdrProtectMrdata(1, v17, v18, v19);
    if ( qword_1801783A0 )
    {
      if ( (byte_18017838C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v20, v21, v22);
        v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
        if ( v25 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
    }
  }
  return 1LL;
}
