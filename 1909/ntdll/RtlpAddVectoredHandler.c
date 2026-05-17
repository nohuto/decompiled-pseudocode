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

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // ecx
  _UNKNOWN **v11; // rdi
  _UNKNOWN ***v12; // rax
  int v13; // edx
  _QWORD *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // [rsp+30h] [rbp-28h]
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 && ((int)RtlQueryProtectedPolicy(&unk_18011E0F8) < 0 || !v17) )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      if ( v6 == -1 )
        goto LABEL_34;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 32LL);
    v9 = (_QWORD *)Heap;
    if ( !Heap )
    {
LABEL_18:
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return v9;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
        if ( v13 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v9;
      }
LABEL_34:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    v10 = `RtlpGetCookieValue'::`2'::CookieValue;
    *(_DWORD *)(Heap + 16) = 1;
    if ( !v10 )
    {
      v16 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
      if ( v16 < 0 )
        RtlRaiseStatus((unsigned int)v16);
      v10 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v9[3] = __ROR8__(a2 ^ v10, v10 & 0x3F);
    v11 = &LdrpVectorHandlerList + 3 * v3 + 1;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
    if ( *v11 == (_UNKNOWN *)v11 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v12 = (_UNKNOWN ***)*v11;
      if ( *((_UNKNOWN ***)*v11 + 1) == v11 )
      {
        *v9 = v12;
        v9[1] = v11;
        v12[1] = (_UNKNOWN **)v9;
        *v11 = v9;
LABEL_17:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1);
        goto LABEL_18;
      }
    }
    else
    {
      v15 = v11[1];
      if ( (_UNKNOWN **)*v15 == v11 )
      {
        *v9 = v11;
        v9[1] = v15;
        *v15 = v9;
        v11[1] = v9;
        goto LABEL_17;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
