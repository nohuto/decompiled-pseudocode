/*
 * XREFs of RtlAddFunctionTable @ 0x180065A00
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180065E70 (RtlAvlInsertNodeEx.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     ZwQuerySystemTime @ 0x18009D220 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v11; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v13; // rdx
  ULONG v14; // r9d
  unsigned __int64 EndAddress; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 *v19; // rax
  int v20; // eax
  int v21; // r8d
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r8
  int v25; // r11d
  int v26; // eax
  int v27; // ecx

  if ( (int)sub_18007C0A8() >= 0 )
  {
    LOBYTE(v6) = LdrControlFlowGuardEnforced();
    if ( v6 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v7 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        RtlProtectHeap(qword_18017A278, 0);
      if ( v7 == -1 )
        goto LABEL_45;
      *(_DWORD *)qword_18017A288 = v7 + 1;
      RtlReleaseSRWLockExclusive(&stru_180165010);
    }
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
      ProcessHeap = qword_18017A278;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x70uLL);
    v11 = (__int64)Heap;
    if ( Heap )
    {
      Heap[2].QuadPart = (LONGLONG)FunctionTable;
      Heap[10].HighPart = EntryCount;
      ZwQuerySystemTime(Heap + 3);
      BeginAddress = FunctionTable->BeginAddress;
      v13 = FunctionTable + 1;
      *(_QWORD *)(v11 + 32) = BeginAddress;
      v14 = 1;
      EndAddress = FunctionTable->EndAddress;
      *(_DWORD *)(v11 + 80) = 0;
      *(_QWORD *)(v11 + 40) = EndAddress;
      *(_QWORD *)(v11 + 48) = BaseAddress;
      if ( EntryCount > 1 )
      {
        v23 = EndAddress;
        v24 = BeginAddress;
        v25 = 0;
        do
        {
          if ( !v25 && v13->BeginAddress < FunctionTable[v14 - 1].BeginAddress )
          {
            v25 = 1;
            *(_DWORD *)(v11 + 80) = 1;
          }
          BeginAddress = v13->BeginAddress;
          if ( BeginAddress >= v24 )
          {
            BeginAddress = v24;
          }
          else
          {
            v24 = (unsigned int)BeginAddress;
            *(_QWORD *)(v11 + 32) = BeginAddress;
          }
          EndAddress = v13->EndAddress;
          if ( EndAddress <= v23 )
            EndAddress = *(_QWORD *)(v11 + 40);
          else
            *(_QWORD *)(v11 + 40) = EndAddress;
          ++v13;
          ++v14;
          v23 = EndAddress;
        }
        while ( v14 < EntryCount );
      }
      *(_QWORD *)(v11 + 32) = BaseAddress + BeginAddress;
      *(_QWORD *)(v11 + 40) = EndAddress + BaseAddress;
      sub_180035F18(0);
      RtlAcquireSRWLockExclusive(&stru_180164350);
      v16 = (_QWORD *)qword_18017A2A8;
      LOBYTE(v17) = 0;
      if ( qword_18017A2A8 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v11 + 32) < *(v16 - 7) )
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
      RtlAvlInsertNodeEx(&qword_18017A2A8, v16, v17, v11 + 88);
      v19 = (__int64 *)qword_18017A2B8;
      if ( *(__int64 **)qword_18017A2B8 != &qword_18017A2B0 )
        __fastfail(3u);
      *(_QWORD *)v11 = &qword_18017A2B0;
      *(_QWORD *)(v11 + 8) = v19;
      *v19 = v11;
      qword_18017A2B8 = v11;
      RtlReleaseSRWLockExclusive(&stru_180164350);
      sub_180035F18(1);
      LOBYTE(v20) = LdrControlFlowGuardEnforced();
      if ( !v20 )
        return 1;
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v21 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v21 - 1;
        if ( v21 == 1 )
          RtlProtectHeap(qword_18017A278, 1u);
        RtlReleaseSRWLockExclusive(&stru_180165010);
        return 1;
      }
LABEL_45:
      RtlReleaseSRWLockExclusive(&stru_180165010);
      __fastfail(0xEu);
    }
    LOBYTE(v26) = LdrControlFlowGuardEnforced();
    if ( v26 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v27 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        goto LABEL_45;
      *(_DWORD *)qword_18017A288 = v27 - 1;
      if ( v27 == 1 )
        RtlProtectHeap(qword_18017A278, 1u);
      RtlReleaseSRWLockExclusive(&stru_180165010);
    }
  }
  return 0;
}
