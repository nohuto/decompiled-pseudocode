/*
 * XREFs of RtlDeleteFunctionTable @ 0x180065490
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180065670 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x180065820 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 v2; // rdi
  BOOLEAN v3; // si
  __int64 i; // rbx
  int v5; // esi
  int v6; // esi
  __int64 *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rax
  void *v11; // rcx
  int v12; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
      goto LABEL_20;
    v2 = i;
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v5 == -1 )
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v6 = *(_DWORD *)(i + 80);
  if ( v6 != 3 )
  {
    v7 = &RtlpDynamicCallbackTableTreeMin;
    if ( v6 != 2 )
      v7 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode(v7, i + 88);
    v8 = &RtlpDynamicCallbackTableTreeMax;
    if ( v6 != 2 )
      v8 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v8, i + 112);
    v9 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v10 = *(__int64 **)(i + 8), *v10 != i) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  v3 = 1;
LABEL_20:
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v2 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v11 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v11, 0, v2);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v12 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_30;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v12 - 1;
      if ( v12 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v3;
}
