/*
 * XREFs of RtlpAddVectoredHandler @ 0x180084200
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x1800841F0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800DAB10 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlQueryProtectedPolicy @ 0x180084430 (RtlQueryProtectedPolicy.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdx
  _UNKNOWN **v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // r8
  __int64 v20; // r9
  _UNKNOWN ***v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // r8
  __int64 v24; // r9
  _QWORD *v26; // rax
  int v27; // ebx
  int v28; // ecx
  NTSTATUS v29; // eax
  __int64 v30; // [rsp+30h] [rbp-28h]
  int ProcessInformation; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (int)LdrEnsureMrdataHeapExists() < 0 || (int)RtlQueryProtectedPolicy(&unk_18011D7E8) >= 0 && v30 )
    return 0LL;
  if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
    v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v27 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v27 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 32LL);
  v14 = (_QWORD *)Heap;
  if ( Heap )
  {
    v15 = `RtlpGetCookieValue'::`2'::CookieValue;
    *(_DWORD *)(Heap + 16) = 1;
    if ( !v15 )
    {
      v29 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
      if ( v29 < 0 )
        RtlRaiseStatus((unsigned int)v29);
      v15 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v16 = __ROR8__(a2 ^ v15, v15 & 0x3F);
    v14[3] = v16;
    v17 = &LdrpVectorHandlerList + 3 * v3 + 1;
    LdrProtectMrdata(0, v16, v12, v13);
    RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * v3), v18, v19, v20);
    if ( *v17 == (_UNKNOWN *)v17 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v21 = (_UNKNOWN ***)*v17;
      if ( *((_UNKNOWN ***)*v17 + 1) == v17 )
      {
        *v14 = v21;
        v14[1] = v17;
        v21[1] = (_UNKNOWN **)v14;
        *v17 = v14;
LABEL_13:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1, v22, v23, v24);
        goto LABEL_14;
      }
    }
    else
    {
      v26 = v17[1];
      if ( (_UNKNOWN **)*v26 == v17 )
      {
        *v14 = v17;
        v14[1] = v26;
        *v26 = v14;
        v17[1] = v14;
        goto LABEL_13;
      }
    }
    __fastfail(3u);
  }
LABEL_14:
  if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
    v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v28 - 1;
    if ( v28 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return v14;
}
