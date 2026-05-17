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
  int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v9; // rbx
  int v10; // edx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v13; // rdx
  ULONG v14; // r9d
  unsigned __int64 EndAddress; // rcx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r8
  int v18; // r11d
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v6 == -1 )
    {
LABEL_47:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v9 = Heap;
  if ( !Heap )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_47;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v10 - 1;
      if ( v10 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v13 = FunctionTable + 1;
  *(_QWORD *)(v9 + 32) = BeginAddress;
  v14 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 40) = EndAddress;
  *(_QWORD *)(v9 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v16 = (unsigned int)EndAddress;
    v17 = (unsigned int)BeginAddress;
    v18 = 0;
    do
    {
      if ( !v18 && v13->BeginAddress < FunctionTable[v14 - 1].BeginAddress )
      {
        v18 = 1;
        *(_DWORD *)(v9 + 80) = 1;
      }
      BeginAddress = v13->BeginAddress;
      if ( BeginAddress >= v17 )
      {
        BeginAddress = v17;
      }
      else
      {
        v17 = (unsigned int)BeginAddress;
        *(_QWORD *)(v9 + 32) = BeginAddress;
      }
      EndAddress = v13->EndAddress;
      if ( EndAddress <= v16 )
        EndAddress = *(_QWORD *)(v9 + 40);
      else
        *(_QWORD *)(v9 + 40) = EndAddress;
      ++v13;
      ++v14;
      v16 = EndAddress;
    }
    while ( v14 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v9 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v19 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v20) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_36;
  while ( *(_QWORD *)(v9 + 32) >= *(v19 - 7) )
  {
    v21 = (_QWORD *)v19[1];
    if ( !v21 )
    {
      LOBYTE(v20) = 1;
      goto LABEL_36;
    }
LABEL_34:
    v19 = v21;
  }
  v21 = (_QWORD *)*v19;
  if ( *v19 )
    goto LABEL_34;
  LOBYTE(v20) = 0;
LABEL_36:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v19, v20, v9 + 88);
  v22 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v23) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_43;
  while ( 2 )
  {
    if ( *(_QWORD *)(v9 + 40) >= *(v22 - 10) )
    {
      v24 = (_QWORD *)v22[1];
      if ( !v24 )
      {
        LOBYTE(v23) = 1;
        goto LABEL_43;
      }
      goto LABEL_41;
    }
    v24 = (_QWORD *)*v22;
    if ( *v22 )
    {
LABEL_41:
      v22 = v24;
      continue;
    }
    break;
  }
  LOBYTE(v23) = 0;
LABEL_43:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v22, v23, v9 + 112);
  v25 = (__int64 *)qword_18017A2C0;
  if ( *(__int64 **)qword_18017A2C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v9 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v9 + 8) = v25;
  *v25 = v9;
  qword_18017A2C0 = v9;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_47;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
    if ( v26 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
