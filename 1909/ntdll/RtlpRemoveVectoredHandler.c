/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x180081560
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180081550 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800D8A80 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 i; // rbx
  int v7; // edi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  void *v12; // rcx
  int v13; // edx
  int v15; // ecx

  v4 = 3LL * a2;
  v5 = (__int64 *)(&LdrpVectorHandlerList + 3 * a2 + 1);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * a2));
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v5 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( !(unsigned int)LdrControlFlowGuardEnforced() )
    goto LABEL_9;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
  if ( v7 == -1 )
    goto LABEL_33;
  *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
LABEL_9:
  if ( (*(_DWORD *)(i + 16))-- != 1 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_33;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
      if ( v15 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v11 = 0LL;
    goto LABEL_15;
  }
  LdrProtectMrdata(0);
  v9 = *(_QWORD **)i;
  v10 = *(_QWORD **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v10 != i )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  if ( v10 == v9 )
    _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
  v11 = i;
LABEL_15:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
  if ( v11 )
  {
    v12 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v12, 0, i);
    LdrProtectMrdata(1);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
        if ( v13 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return 1LL;
      }
LABEL_33:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return 1LL;
}
