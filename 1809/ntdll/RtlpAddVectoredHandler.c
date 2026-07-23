/*
 * XREFs of RtlpAddVectoredHandler @ 0x180084210
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180084200 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800DAB10 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlQueryProtectedPolicy @ 0x180084440 (RtlQueryProtectedPolicy.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 */

ULONG_PTR **__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // eax
  PVOID ProcessHeap; // rcx
  ULONG_PTR **Heap; // rax
  ULONG_PTR **v9; // rbx
  unsigned int v10; // ecx
  ULONG_PTR *v11; // rdi
  ULONG_PTR v12; // rax
  ULONG_PTR **v14; // rax
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  unsigned __int64 PolicyValue[5]; // [rsp+30h] [rbp-28h] BYREF
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( LdrEnsureMrdataHeapExists() < 0
    || RtlQueryProtectedPolicy((PGUID)&PolicyGuid, PolicyValue) >= 0 && PolicyValue[0] )
  {
    return 0LL;
  }
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v15 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v15 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (ULONG_PTR **)RtlAllocateHeap(ProcessHeap, 0, 0x20uLL);
  v9 = Heap;
  if ( Heap )
  {
    v10 = `RtlpGetCookieValue'::`2'::CookieValue;
    *((_DWORD *)Heap + 4) = 1;
    if ( !v10 )
    {
      v17 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
      if ( v17 < 0 )
        RtlRaiseStatus(v17);
      v10 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v9[3] = (ULONG_PTR *)__ROR8__(a2 ^ v10, v10 & 0x3F);
    v11 = &LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * v3;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
    if ( (ULONG_PTR *)*v11 == v11 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v12 = *v11;
      if ( *(ULONG_PTR **)(*v11 + 8) == v11 )
      {
        *v9 = (ULONG_PTR *)v12;
        v9[1] = v11;
        *(_QWORD *)(v12 + 8) = v9;
        *v11 = (ULONG_PTR)v9;
LABEL_13:
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3));
        LdrProtectMrdata(1);
        goto LABEL_14;
      }
    }
    else
    {
      v14 = (ULONG_PTR **)v11[1];
      if ( *v14 == v11 )
      {
        *v9 = v11;
        v9[1] = (ULONG_PTR *)v14;
        *v14 = (ULONG_PTR *)v9;
        v11[1] = (ULONG_PTR)v9;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
LABEL_14:
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
    if ( v16 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return v9;
}
