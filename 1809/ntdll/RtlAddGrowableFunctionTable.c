/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x18006F8F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlAvlInsertNodeEx @ 0x18006FAF0 (RtlAvlInsertNodeEx.c)
 *     NtSetInformationProcess @ 0x1800A0680 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A0E40 (ZwQuerySystemTime.c)
 *     RtlpFreeReadOnlyHeap @ 0x180106E40 (RtlpFreeReadOnlyHeap.c)
 *     RtlpProtectInvertedFunctionTable @ 0x180106E80 (RtlpProtectInvertedFunctionTable.c)
 *     RtlpProtectReadOnlyHeap @ 0x180106E8C (RtlpProtectReadOnlyHeap.c)
 */

DWORD __cdecl RtlAddGrowableFunctionTable(
        PVOID *DynamicTable,
        PRUNTIME_FUNCTION FunctionTable,
        DWORD EntryCount,
        DWORD MaximumEntryCount,
        ULONG_PTR RangeBase,
        ULONG_PTR RangeEnd)
{
  DWORD result; // eax
  char v10; // bl
  int v11; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  LARGE_INTEGER *v14; // rdi
  NTSTATUS v15; // esi
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  LARGE_INTEGER **v22; // rax
  LARGE_INTEGER *ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  char v24; // [rsp+28h] [rbp-20h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  v10 = 0;
  if ( (result & 0x80000000) != 0 )
    return result;
  RtlpProtectReadOnlyHeap(0LL);
  LOBYTE(v11) = LdrControlFlowGuardEnforced();
  if ( v11 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v14 = Heap;
  if ( !Heap )
  {
    v15 = -1073741670;
    goto LABEL_11;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  v14[5].QuadPart = RangeEnd;
  v14[4].QuadPart = RangeBase;
  v14[6].QuadPart = RangeBase;
  v14[10].LowPart = 3;
  ProcessInformation = v14;
  v24 = 0;
  v15 = NtSetInformationProcess(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          ProcessDynamicFunctionTableInformation,
          &ProcessInformation,
          0x10u);
  if ( v15 < 0 )
  {
    RtlpFreeReadOnlyHeap(v14);
    goto LABEL_11;
  }
  RtlpProtectInvertedFunctionTable(0LL);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v16 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v17) = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( v14[4].QuadPart < *(v16 - 7) )
      {
        v18 = (_QWORD *)*v16;
        if ( !*v16 )
        {
          LOBYTE(v17) = 0;
          break;
        }
      }
      else
      {
        v18 = (_QWORD *)v16[1];
        if ( !v18 )
        {
          LOBYTE(v17) = 1;
          break;
        }
      }
      v16 = v18;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v16, v17, &v14[11]);
  v20 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_24;
  while ( v14[5].QuadPart < *(v20 - 10) )
  {
    v21 = (_QWORD *)*v20;
    if ( !*v20 )
      goto LABEL_24;
LABEL_27:
    v20 = v21;
  }
  v21 = (_QWORD *)v20[1];
  if ( v21 )
    goto LABEL_27;
  v10 = 1;
LABEL_24:
  LOBYTE(v19) = v10;
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v20, v19, &v14[14]);
  v22 = (LARGE_INTEGER **)qword_1801782C0;
  if ( *(__int64 **)qword_1801782C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  v14->QuadPart = (__int64)&RtlpDynamicFunctionTable;
  v14[1].QuadPart = (__int64)v22;
  *v22 = v14;
  qword_1801782C0 = (__int64)v14;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlpProtectInvertedFunctionTable(1LL);
  *DynamicTable = v14;
LABEL_11:
  RtlpProtectReadOnlyHeap(1LL);
  return v15;
}
