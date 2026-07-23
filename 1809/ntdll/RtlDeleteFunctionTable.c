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
  __int64 *v2; // rdi
  BOOLEAN v3; // si
  __int64 *i; // rbx
  int v5; // eax
  int v6; // esi
  int v7; // esi
  __int64 *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 **v11; // rax
  int v12; // eax
  PVOID v13; // rcx
  int v14; // eax
  int v15; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
  {
    v2 = i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      LOBYTE(v5) = LdrControlFlowGuardEnforced();
      if ( v5 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap(LdrpMrdataHeap, 0);
        if ( v6 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      v7 = *((_DWORD *)i + 20);
      if ( v7 != 3 )
      {
        v8 = &RtlpDynamicCallbackTableTreeMin;
        if ( v7 != 2 )
          v8 = &RtlpDynamicFunctionTableTreeMin;
        RtlAvlRemoveNode(v8, i + 11);
        v9 = &RtlpDynamicCallbackTableTreeMax;
        if ( v7 != 2 )
          v9 = &RtlpDynamicFunctionTableTreeMax;
        RtlAvlRemoveNode(v9, i + 14);
        v10 = *i;
        if ( *(__int64 **)(*i + 8) != i || (v11 = (__int64 **)i[1], *v11 != i) )
          __fastfail(3u);
        *v11 = (__int64 *)v10;
        *(_QWORD *)(v10 + 8) = v11;
      }
      v3 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *((_DWORD *)v2 + 20) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      LOBYTE(v12) = LdrControlFlowGuardEnforced();
      v13 = v12 ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v13, 0, v2);
    }
    LOBYTE(v14) = LdrControlFlowGuardEnforced();
    if ( v14 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
      if ( v15 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v3;
}
