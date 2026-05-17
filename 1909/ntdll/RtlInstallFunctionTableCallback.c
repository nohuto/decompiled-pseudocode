/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x180065170
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbCopyW @ 0x180016F74 (RtlStringCbCopyW.c)
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

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 *v22; // rax
  int v23; // r8d
  int v25; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v12 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v12 == -1 )
      goto LABEL_48;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v12 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    if ( v10 + 136 >= 0xFF000 )
      goto LABEL_42;
    ProcessHeap = (void *)LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v10 + 136);
  v15 = Heap;
  if ( !Heap )
  {
LABEL_42:
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_48;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
      if ( v25 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v15 + 40) = BaseAddress + v6;
  *(_QWORD *)(v15 + 64) = Context;
  *(_QWORD *)(v15 + 32) = BaseAddress;
  *(_QWORD *)(v15 + 48) = BaseAddress;
  *(_QWORD *)(v15 + 56) = Callback;
  *(_DWORD *)(v15 + 80) = 2;
  *(_QWORD *)(v15 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v15 + 72) = v15 + 136;
    RtlStringCbCopyW((_WORD *)(v15 + 136), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v16 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  LOBYTE(v17) = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_27;
  while ( *(_QWORD *)(v15 + 32) >= *(v16 - 7) )
  {
    v18 = (_QWORD *)v16[1];
    if ( !v18 )
    {
      LOBYTE(v17) = 1;
      goto LABEL_27;
    }
LABEL_25:
    v16 = v18;
  }
  v18 = (_QWORD *)*v16;
  if ( *v16 )
    goto LABEL_25;
  LOBYTE(v17) = 0;
LABEL_27:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMin, v16, v17, v15 + 88);
  v19 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  LOBYTE(v20) = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_34;
  while ( 2 )
  {
    if ( *(_QWORD *)(v15 + 40) >= *(v19 - 10) )
    {
      v21 = (_QWORD *)v19[1];
      if ( !v21 )
      {
        LOBYTE(v20) = 1;
        goto LABEL_34;
      }
      goto LABEL_32;
    }
    v21 = (_QWORD *)*v19;
    if ( *v19 )
    {
LABEL_32:
      v19 = v21;
      continue;
    }
    break;
  }
  LOBYTE(v20) = 0;
LABEL_34:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMax, v19, v20, v15 + 112);
  v22 = (__int64 *)qword_18017A2C0;
  if ( *(__int64 **)qword_18017A2C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v15 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v15 + 8) = v22;
  *v22 = v15;
  qword_18017A2C0 = v15;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
      if ( v23 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_48:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
