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

__int64 __fastcall RtlpRemoveVectoredHandler(void **a1, unsigned int a2)
{
  __int64 v4; // rsi
  void **v5; // rdi
  void **i; // rbx
  int v7; // eax
  int v8; // edi
  void **v10; // rcx
  void **v11; // rax
  void **v12; // rdi
  int v13; // eax
  PVOID v14; // rcx
  int v15; // eax
  int v16; // edx
  int v18; // eax
  int v19; // ecx

  v4 = 3LL * a2;
  v5 = (void **)(&LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * a2);
  RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * a2));
  for ( i = (void **)*v5; ; i = (void **)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  LOBYTE(v7) = LdrControlFlowGuardEnforced();
  if ( !v7 )
    goto LABEL_9;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    RtlProtectHeap(LdrpMrdataHeap, 0);
  if ( v8 == -1 )
    goto LABEL_33;
  *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
LABEL_9:
  if ( (*((_DWORD *)i + 4))-- != 1 )
  {
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( v18 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_33;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v12 = 0LL;
    goto LABEL_15;
  }
  LdrProtectMrdata(0);
  v10 = (void **)*i;
  v11 = (void **)i[1];
  if ( *((void ***)*i + 1) != i || *v11 != i )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = v11;
  if ( v11 == v10 )
    _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
  v12 = i;
LABEL_15:
  RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
  if ( v12 )
  {
    LOBYTE(v13) = LdrControlFlowGuardEnforced();
    v14 = v13 ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v14, 0, i);
    LdrProtectMrdata(1);
    LOBYTE(v15) = LdrControlFlowGuardEnforced();
    if ( v15 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
        if ( v16 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
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
