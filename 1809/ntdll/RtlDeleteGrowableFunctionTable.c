/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x18006ED50
 * Callers:
 *     RtlDeleteFunctionTable @ 0x18006EB60 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlAvlRemoveNode @ 0x18006EF10 (RtlAvlRemoveNode.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     NtSetInformationProcess @ 0x1800A0660 (NtSetInformationProcess.c)
 */

signed __int64 __fastcall RtlDeleteGrowableFunctionTable(unsigned __int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  void *ProcessHeap; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  unsigned __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
    RtlRaiseStatus(3221225485LL);
  v18 = a1;
  v19 = 1;
  v2 = NtSetInformationProcess(-1LL, 53LL, &v18);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  LdrProtectMrdata(0, v3, v4, v5);
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
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v6, v7, v8);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, a1 + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, a1 + 112);
  v10 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v11 = *(_QWORD **)(a1 + 8), *v11 != a1) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
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
  return LdrProtectMrdata(1, v13, v14, v15);
}
