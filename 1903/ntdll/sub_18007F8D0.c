/*
 * XREFs of sub_18007F8D0 @ 0x18007F8D0
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x18007F8C0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800D89A0 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlQueryProtectedPolicy @ 0x18007FAE0 (RtlQueryProtectedPolicy.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

ULONG_PTR **__fastcall sub_18007F8D0(int a1, __int64 a2, unsigned int a3)
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
  if ( sub_18007C0A8() >= 0 && (RtlQueryProtectedPolicy((PGUID)&PolicyGuid, PolicyValue) < 0 || !PolicyValue[0]) )
  {
    LOBYTE(v6) = LdrControlFlowGuardEnforced();
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v7 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        RtlProtectHeap(qword_18017A278, 0);
      if ( v7 == -1 )
        goto LABEL_34;
      *(_DWORD *)qword_18017A288 = v7 + 1;
      RtlReleaseSRWLockExclusive(&stru_180165010);
    }
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
      ProcessHeap = qword_18017A278;
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
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v16 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v16 - 1;
        if ( v16 == 1 )
          RtlProtectHeap(qword_18017A278, 1u);
        RtlReleaseSRWLockExclusive(&stru_180165010);
        return v11;
      }
LABEL_34:
      RtlReleaseSRWLockExclusive(&stru_180165010);
      __fastfail(0xEu);
    }
    v12 = dword_180166018;
    *((_DWORD *)Heap + 4) = 1;
    if ( !v12 )
    {
      v19 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
      if ( v19 < 0 )
        RtlRaiseStatus(v19);
      v12 = ProcessInformation;
      dword_180166018 = ProcessInformation;
    }
    v11[3] = (ULONG_PTR *)__ROR8__(a2 ^ v12, v12 & 0x3F);
    v13 = &LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * v3;
    sub_180035F18(0);
    RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + 3 * v3));
    if ( (ULONG_PTR *)*v13 == v13 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, v3 + 2);
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
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + 3 * v3));
        sub_180035F18(1);
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
