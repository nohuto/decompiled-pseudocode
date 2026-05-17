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
 *     ZwQuerySystemTime @ 0x1800A0E20 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v21; // r8
  ULONG v22; // esi
  unsigned __int64 EndAddress; // rcx
  unsigned __int64 v24; // r10
  int v25; // r11d
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 *v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // r8
  __int64 v41; // r9
  int v42; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
    v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v9 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v12 = Heap;
  if ( !Heap )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v13, v14, v15);
      v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v21 = FunctionTable + 1;
  *(_QWORD *)(v12 + 32) = BeginAddress;
  v22 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 40) = EndAddress;
  *(_QWORD *)(v12 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v24 = (unsigned int)EndAddress;
    v19 = (unsigned int)BeginAddress;
    v25 = 0;
    do
    {
      if ( !v25 && v21->BeginAddress < FunctionTable[v22 - 1].BeginAddress )
      {
        v25 = 1;
        *(_DWORD *)(v12 + 80) = 1;
      }
      BeginAddress = v21->BeginAddress;
      if ( BeginAddress >= v19 )
      {
        BeginAddress = v19;
      }
      else
      {
        v19 = (unsigned int)BeginAddress;
        *(_QWORD *)(v12 + 32) = BeginAddress;
      }
      EndAddress = v21->EndAddress;
      if ( EndAddress <= v24 )
      {
        v18 = *(_QWORD *)(v12 + 40);
        EndAddress = v24;
      }
      else
      {
        *(_QWORD *)(v12 + 40) = EndAddress;
        v18 = (unsigned int)EndAddress;
      }
      ++v21;
      ++v22;
      v24 = v18;
    }
    while ( v22 < EntryCount );
  }
  *(_QWORD *)(v12 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v12 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0, v18, (unsigned __int64 *)&v21->BeginAddress, v19);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v26, v27, v28);
  v29 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v30) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_38;
  while ( *(_QWORD *)(v12 + 32) >= *(v29 - 7) )
  {
    v31 = (_QWORD *)v29[1];
    if ( !v31 )
    {
      LOBYTE(v30) = 1;
      goto LABEL_38;
    }
LABEL_36:
    v29 = v31;
  }
  v31 = (_QWORD *)*v29;
  if ( *v29 )
    goto LABEL_36;
  LOBYTE(v30) = 0;
LABEL_38:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v29, v30, v12 + 88);
  v32 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v33) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_45;
  while ( 2 )
  {
    if ( *(_QWORD *)(v12 + 40) >= *(v32 - 10) )
    {
      v34 = (_QWORD *)v32[1];
      if ( !v34 )
      {
        LOBYTE(v33) = 1;
        goto LABEL_45;
      }
      goto LABEL_43;
    }
    v34 = (_QWORD *)*v32;
    if ( *v32 )
    {
LABEL_43:
      v32 = v34;
      continue;
    }
    break;
  }
  LOBYTE(v33) = 0;
LABEL_45:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v32, v33, v12 + 112);
  v35 = (__int64 *)qword_1801782C0;
  if ( *(__int64 **)qword_1801782C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v12 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v12 + 8) = v35;
  *v35 = v12;
  qword_1801782C0 = v12;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v36, v37, v38);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v39, v40, v41);
    v42 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v42 - 1;
    if ( v42 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
