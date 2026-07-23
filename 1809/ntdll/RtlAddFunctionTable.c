/*
 * XREFs of RtlAddFunctionTable @ 0x18006F5E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x18006FAF0 (RtlAvlInsertNodeEx.c)
 *     ZwQuerySystemTime @ 0x1800A0E40 (ZwQuerySystemTime.c)
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
  int v13; // ecx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v16; // r8
  ULONG v17; // esi
  unsigned __int64 EndAddress; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r9
  int v21; // r11d
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 *v29; // rax
  int v30; // eax
  int v31; // ecx

  if ( LdrEnsureMrdataHeapExists() < 0 )
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
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
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
      {
        v22 = *(_QWORD *)(v11 + 40);
        EndAddress = v19;
      }
      else
      {
        *(_QWORD *)(v11 + 40) = EndAddress;
        v22 = (unsigned int)EndAddress;
      }
      ++v16;
      ++v17;
      v19 = v22;
    }
    while ( v17 < EntryCount );
  }
  *(_QWORD *)(v11 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v11 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v23 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v24) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_38;
  while ( *(_QWORD *)(v11 + 32) >= *(v23 - 7) )
  {
    v25 = (_QWORD *)v23[1];
    if ( !v25 )
    {
      LOBYTE(v24) = 1;
      goto LABEL_38;
    }
LABEL_36:
    v23 = v25;
  }
  v25 = (_QWORD *)*v23;
  if ( *v23 )
    goto LABEL_36;
  LOBYTE(v24) = 0;
LABEL_38:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v23, v24, v11 + 88);
  v26 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v27) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_45;
  while ( 2 )
  {
    if ( *(_QWORD *)(v11 + 40) >= *(v26 - 10) )
    {
      v28 = (_QWORD *)v26[1];
      if ( !v28 )
      {
        LOBYTE(v27) = 1;
        goto LABEL_45;
      }
      goto LABEL_43;
    }
    v28 = (_QWORD *)*v26;
    if ( *v26 )
    {
LABEL_43:
      v26 = v28;
      continue;
    }
    break;
  }
  LOBYTE(v27) = 0;
LABEL_45:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v26, v27, v11 + 112);
  v29 = (__int64 *)qword_1801782C0;
  if ( *(__int64 **)qword_1801782C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v11 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v11 + 8) = v29;
  *v29 = v11;
  qword_1801782C0 = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v30) = LdrControlFlowGuardEnforced();
  if ( v30 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
    if ( v31 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
