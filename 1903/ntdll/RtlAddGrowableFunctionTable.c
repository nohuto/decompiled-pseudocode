/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180065C10
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180065E70 (RtlAvlInsertNodeEx.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18009D220 (ZwQuerySystemTime.c)
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
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  LONGLONG *v15; // rbx
  NTSTATUS v16; // ebp
  __int64 v17; // r8
  __int64 *i; // rax
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  LONGLONG **v23; // rax
  int v24; // eax
  int v25; // ecx
  bool v26; // zf
  int v27; // eax
  PVOID v28; // rcx
  int v29; // eax
  int v30; // r8d
  int v31; // eax
  PVOID v32; // rcx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  LONGLONG *ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  char v38; // [rsp+28h] [rbp-20h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = sub_18007C0A8();
  if ( (result & 0x80000000) != 0 )
    return result;
  LOBYTE(v10) = LdrControlFlowGuardEnforced();
  if ( v10 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v11 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap(qword_18017A278, 0);
    if ( v11 == -1 )
      goto LABEL_60;
    *(_DWORD *)qword_18017A288 = v11 + 1;
    RtlReleaseSRWLockExclusive(&stru_180165010);
  }
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 )
    ProcessHeap = qword_18017A278;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x70uLL);
  v15 = (LONGLONG *)Heap;
  if ( !Heap )
  {
    LOBYTE(v35) = LdrControlFlowGuardEnforced();
    if ( v35 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v36 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        goto LABEL_60;
      *(_DWORD *)qword_18017A288 = v36 - 1;
      if ( v36 == 1 )
        RtlProtectHeap(qword_18017A278, 1u);
      RtlReleaseSRWLockExclusive(&stru_180165010);
    }
    return -1073741670;
  }
  Heap[2].QuadPart = (LONGLONG)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  v15[4] = RangeBase;
  v15[5] = RangeEnd;
  v15[6] = RangeBase;
  *((_DWORD *)v15 + 20) = 3;
  ProcessInformation = v15;
  v38 = 0;
  v16 = ZwSetInformationProcess(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          ProcessDynamicFunctionTableInformation,
          &ProcessInformation,
          0x10u);
  if ( v16 < 0 )
  {
    LOBYTE(v27) = LdrControlFlowGuardEnforced();
    if ( v27 )
      v28 = qword_18017A278;
    else
      v28 = NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v28, 0, v15);
    LOBYTE(v29) = LdrControlFlowGuardEnforced();
    if ( v29 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v30 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        goto LABEL_60;
      v26 = v30 == 1;
      *(_DWORD *)qword_18017A288 = v30 - 1;
LABEL_30:
      if ( v26 )
        RtlProtectHeap(qword_18017A278, 1u);
      RtlReleaseSRWLockExclusive(&stru_180165010);
    }
    return v16;
  }
  sub_180035F18(0);
  RtlAcquireSRWLockExclusive(&stru_180164350);
  for ( i = (__int64 *)qword_18017A2B0; i != &qword_18017A2B0; i = (__int64 *)*i )
  {
    v19 = i[5];
    if ( RangeBase < v19 )
    {
      v20 = i[4];
      if ( RangeEnd > v20 )
      {
        if ( v20 != RangeBase || v19 != RangeEnd )
        {
          RtlReleaseSRWLockExclusive(&stru_180164350);
          sub_180035F18(1);
          v38 = 1;
          ZwSetInformationProcess(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            ProcessDynamicFunctionTableInformation,
            &ProcessInformation,
            0x10u);
          LOBYTE(v31) = LdrControlFlowGuardEnforced();
          if ( v31 )
            v32 = qword_18017A278;
          else
            v32 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap(v32, 0, v15);
          LOBYTE(v33) = LdrControlFlowGuardEnforced();
          if ( v33 )
          {
            RtlAcquireSRWLockExclusive(&stru_180165010);
            v34 = *(_DWORD *)qword_18017A288;
            if ( !*(_DWORD *)qword_18017A288 )
              goto LABEL_60;
            *(_DWORD *)qword_18017A288 = v34 - 1;
            if ( v34 == 1 )
              RtlProtectHeap(qword_18017A278, 1u);
            RtlReleaseSRWLockExclusive(&stru_180165010);
          }
          return -1073741800;
        }
        break;
      }
    }
  }
  v21 = (_QWORD *)qword_18017A2A8;
  LOBYTE(v17) = 0;
  if ( !qword_18017A2A8 )
    goto LABEL_26;
  while ( (unsigned __int64)v15[4] < *(v21 - 7) )
  {
    v22 = (_QWORD *)*v21;
    if ( !*v21 )
    {
      LOBYTE(v17) = 0;
      goto LABEL_26;
    }
LABEL_22:
    v21 = v22;
  }
  v22 = (_QWORD *)v21[1];
  if ( v22 )
    goto LABEL_22;
  LOBYTE(v17) = 1;
LABEL_26:
  RtlAvlInsertNodeEx(&qword_18017A2A8, v21, v17, v15 + 11);
  v23 = (LONGLONG **)qword_18017A2B8;
  if ( *(__int64 **)qword_18017A2B8 != &qword_18017A2B0 )
    __fastfail(3u);
  *v15 = (LONGLONG)&qword_18017A2B0;
  v15[1] = (LONGLONG)v23;
  *v23 = v15;
  qword_18017A2B8 = (__int64)v15;
  RtlReleaseSRWLockExclusive(&stru_180164350);
  sub_180035F18(1);
  *DynamicTable = v15;
  LOBYTE(v24) = LdrControlFlowGuardEnforced();
  if ( v24 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v25 = *(_DWORD *)qword_18017A288;
    if ( *(_DWORD *)qword_18017A288 )
    {
      v26 = v25 == 1;
      *(_DWORD *)qword_18017A288 = v25 - 1;
      goto LABEL_30;
    }
LABEL_60:
    RtlReleaseSRWLockExclusive(&stru_180165010);
    __fastfail(0xEu);
  }
  return v16;
}
