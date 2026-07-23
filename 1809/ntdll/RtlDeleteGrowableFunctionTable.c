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
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtSetInformationProcess @ 0x1800A0680 (NtSetInformationProcess.c)
 */

void __cdecl RtlDeleteGrowableFunctionTable(PVOID DynamicTable)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  _QWORD *v5; // rdx
  PVOID *v6; // rax
  int v7; // eax
  PVOID ProcessHeap; // rcx
  int v9; // eax
  int v10; // ecx
  PVOID v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)DynamicTable + 20) != 3 )
    RtlRaiseStatus(-1073741811);
  v11 = DynamicTable;
  v12 = 1;
  v2 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDynamicFunctionTableInformation, &v11, 0x10u);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  LdrProtectMrdata(0);
  LOBYTE(v3) = LdrControlFlowGuardEnforced();
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v4 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v4 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v4 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, (char *)DynamicTable + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, (char *)DynamicTable + 112);
  v5 = *(_QWORD **)DynamicTable;
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable
    || (v6 = (PVOID *)*((_QWORD *)DynamicTable + 1), *v6 != DynamicTable) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  v5[1] = v6;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LOBYTE(v7) = LdrControlFlowGuardEnforced();
  if ( v7 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v10 - 1;
    if ( v10 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LdrProtectMrdata(1);
}
