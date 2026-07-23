/*
 * XREFs of RtlpAddVectoredHandler @ 0x18007FF70
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x18007FF60 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800D8A60 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     RtlQueryProtectedPolicy @ 0x180080180 (RtlQueryProtectedPolicy.c)
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

ULONG_PTR **__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  ULONG_PTR **Heap; // rax
  ULONG_PTR **v11; // rbx
  unsigned int v12; // ecx
  ULONG_PTR *v13; // rdi
  ULONG_PTR v14; // rax
  int v15; // eax
  int v16; // edx
  ULONG_PTR **v18; // rax
  int v19; // eax
  unsigned __int64 PolicyValue[5]; // [rsp+30h] [rbp-28h] BYREF
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( LdrEnsureMrdataHeapExists() >= 0
    && (RtlQueryProtectedPolicy((PGUID)&PolicyGuid, PolicyValue) < 0 || !PolicyValue[0]) )
  {
    LOBYTE(v6) = LdrControlFlowGuardEnforced();
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap(LdrpMrdataHeap, 0);
      if ( v7 == -1 )
        goto LABEL_34;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
      ProcessHeap = LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (ULONG_PTR **)RtlAllocateHeap(ProcessHeap, 0, 0x20uLL);
    v11 = Heap;
    if ( !Heap )
    {
LABEL_18:
      LOBYTE(v15) = LdrControlFlowGuardEnforced();
      if ( !v15 )
        return v11;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
        if ( v16 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v11;
      }
LABEL_34:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    v12 = `RtlpGetCookieValue'::`2'::CookieValue;
    *((_DWORD *)Heap + 4) = 1;
    if ( !v12 )
    {
      v19 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
      if ( v19 < 0 )
        RtlRaiseStatus(v19);
      v12 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v11[3] = (ULONG_PTR *)__ROR8__(a2 ^ v12, v12 & 0x3F);
    v13 = &LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * v3;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
    if ( (ULONG_PTR *)*v13 == v13 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v14 = *v13;
      if ( *(ULONG_PTR **)(*v13 + 8) == v13 )
      {
        *v11 = (ULONG_PTR *)v14;
        v11[1] = v13;
        *(_QWORD *)(v14 + 8) = v11;
        *v13 = (ULONG_PTR)v11;
LABEL_17:
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
        LdrProtectMrdata(1);
        goto LABEL_18;
      }
    }
    else
    {
      v18 = (ULONG_PTR **)v13[1];
      if ( *v18 == v13 )
      {
        *v11 = v13;
        v11[1] = (ULONG_PTR *)v18;
        *v18 = (ULONG_PTR *)v11;
        v13[1] = (ULONG_PTR)v11;
        goto LABEL_17;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
