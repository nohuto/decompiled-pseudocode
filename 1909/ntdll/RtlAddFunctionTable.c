/*
 * XREFs of RtlAddFunctionTable @ 0x180065BC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x1800660C0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x18009D9D0 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // edx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v16; // rdx
  ULONG v17; // r9d
  unsigned __int64 EndAddress; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  int v21; // r11d
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 *v28; // rax
  int v29; // eax
  int v30; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v7 == -1 )
    {
LABEL_47:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( v8 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v11 = (__int64)Heap;
  if ( !Heap )
  {
    LOBYTE(v12) = LdrControlFlowGuardEnforced();
    if ( v12 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_47;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
      if ( v13 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v16 = FunctionTable + 1;
  *(_QWORD *)(v11 + 32) = BeginAddress;
  v17 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 40) = EndAddress;
  *(_QWORD *)(v11 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v19 = (unsigned int)EndAddress;
    v20 = (unsigned int)BeginAddress;
    v21 = 0;
    do
    {
      if ( !v21 && v16->BeginAddress < FunctionTable[v17 - 1].BeginAddress )
      {
        v21 = 1;
        *(_DWORD *)(v11 + 80) = 1;
      }
      BeginAddress = v16->BeginAddress;
      if ( BeginAddress >= v20 )
      {
        BeginAddress = v20;
      }
      else
      {
        v20 = (unsigned int)BeginAddress;
        *(_QWORD *)(v11 + 32) = BeginAddress;
      }
      EndAddress = v16->EndAddress;
      if ( EndAddress <= v19 )
        EndAddress = *(_QWORD *)(v11 + 40);
      else
        *(_QWORD *)(v11 + 40) = EndAddress;
      ++v16;
      ++v17;
      v19 = EndAddress;
    }
    while ( v17 < EntryCount );
  }
  *(_QWORD *)(v11 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v11 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v22 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v23) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_36;
  while ( *(_QWORD *)(v11 + 32) >= *(v22 - 7) )
  {
    v24 = (_QWORD *)v22[1];
    if ( !v24 )
    {
      LOBYTE(v23) = 1;
      goto LABEL_36;
    }
LABEL_34:
    v22 = v24;
  }
  v24 = (_QWORD *)*v22;
  if ( *v22 )
    goto LABEL_34;
  LOBYTE(v23) = 0;
LABEL_36:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v22, v23, v11 + 88);
  v25 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v26) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_43;
  while ( 2 )
  {
    if ( *(_QWORD *)(v11 + 40) >= *(v25 - 10) )
    {
      v27 = (_QWORD *)v25[1];
      if ( !v27 )
      {
        LOBYTE(v26) = 1;
        goto LABEL_43;
      }
      goto LABEL_41;
    }
    v27 = (_QWORD *)*v25;
    if ( *v25 )
    {
LABEL_41:
      v25 = v27;
      continue;
    }
    break;
  }
  LOBYTE(v26) = 0;
LABEL_43:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v25, v26, v11 + 112);
  v28 = (__int64 *)qword_18017A2C0;
  if ( *(__int64 **)qword_18017A2C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v11 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v11 + 8) = v28;
  *v28 = v11;
  qword_18017A2C0 = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v29) = LdrControlFlowGuardEnforced();
  if ( v29 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_47;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v30 - 1;
    if ( v30 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
