/*
 * XREFs of RtlDeleteFunctionTable @ 0x18006EB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x18006EF10 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  unsigned __int64 v5; // rdi
  BOOLEAN v6; // si
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 *i; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  int v14; // esi
  int v15; // esi
  __int64 *v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 **v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  __int64 v22; // r9
  void *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 *v25; // r8
  __int64 v26; // r9
  int v27; // edx

  v5 = 0LL;
  v6 = 0;
  LdrProtectMrdata(0, v1, v2, v3);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v7, v8, v9);
  for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
  {
    v5 = (unsigned __int64)i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
        v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        if ( v14 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      v15 = *((_DWORD *)i + 20);
      if ( v15 != 3 )
      {
        v16 = &RtlpDynamicCallbackTableTreeMin;
        if ( v15 != 2 )
          v16 = &RtlpDynamicFunctionTableTreeMin;
        RtlAvlRemoveNode(v16, i + 11);
        v17 = &RtlpDynamicCallbackTableTreeMax;
        if ( v15 != 2 )
          v17 = &RtlpDynamicFunctionTableTreeMax;
        RtlAvlRemoveNode(v17, i + 14);
        v18 = *i;
        if ( *(__int64 **)(*i + 8) != i || (v19 = (__int64 **)i[1], *v19 != i) )
          __fastfail(3u);
        *v19 = (__int64 *)v18;
        *(_QWORD *)(v18 + 8) = v19;
      }
      v6 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v20, v21, v22);
  if ( v6 )
  {
    if ( *(_DWORD *)(v5 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v5);
    }
    else
    {
      v23 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v23, 0, v5);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v24, v25, v26);
      v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
      if ( v27 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v6;
}
