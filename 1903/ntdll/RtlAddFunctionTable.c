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
  int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v9; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v11; // rdx
  ULONG v12; // r9d
  unsigned __int64 EndAddress; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 *v17; // rax
  int v18; // r8d
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  int v22; // r11d
  int v23; // ecx

  if ( (int)sub_18007C0A8() >= 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v6 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 0);
      if ( v6 == -1 )
        goto LABEL_45;
      *(_DWORD *)qword_18017A288 = v6 + 1;
      RtlReleaseSRWLockExclusive(&qword_180165010);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)qword_18017A278;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 112LL);
    v9 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 16) = FunctionTable;
      *(_DWORD *)(Heap + 84) = EntryCount;
      ZwQuerySystemTime(Heap + 24);
      BeginAddress = FunctionTable->BeginAddress;
      v11 = FunctionTable + 1;
      *(_QWORD *)(v9 + 32) = BeginAddress;
      v12 = 1;
      EndAddress = FunctionTable->EndAddress;
      *(_DWORD *)(v9 + 80) = 0;
      *(_QWORD *)(v9 + 40) = EndAddress;
      *(_QWORD *)(v9 + 48) = BaseAddress;
      if ( EntryCount > 1 )
      {
        v20 = EndAddress;
        v21 = BeginAddress;
        v22 = 0;
        do
        {
          if ( !v22 && v11->BeginAddress < FunctionTable[v12 - 1].BeginAddress )
          {
            v22 = 1;
            *(_DWORD *)(v9 + 80) = 1;
          }
          BeginAddress = v11->BeginAddress;
          if ( BeginAddress >= v21 )
          {
            BeginAddress = v21;
          }
          else
          {
            v21 = (unsigned int)BeginAddress;
            *(_QWORD *)(v9 + 32) = BeginAddress;
          }
          EndAddress = v11->EndAddress;
          if ( EndAddress <= v20 )
            EndAddress = *(_QWORD *)(v9 + 40);
          else
            *(_QWORD *)(v9 + 40) = EndAddress;
          ++v11;
          ++v12;
          v20 = EndAddress;
        }
        while ( v12 < EntryCount );
      }
      *(_QWORD *)(v9 + 32) = BaseAddress + BeginAddress;
      *(_QWORD *)(v9 + 40) = EndAddress + BaseAddress;
      sub_180035F18(0);
      RtlAcquireSRWLockExclusive(&qword_180164350);
      v14 = (_QWORD *)qword_18017A2A8;
      LOBYTE(v15) = 0;
      if ( qword_18017A2A8 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v9 + 32) < *(v14 - 7) )
          {
            v16 = (_QWORD *)*v14;
            if ( !*v14 )
            {
              LOBYTE(v15) = 0;
              break;
            }
          }
          else
          {
            v16 = (_QWORD *)v14[1];
            if ( !v16 )
            {
              LOBYTE(v15) = 1;
              break;
            }
          }
          v14 = v16;
        }
      }
      RtlAvlInsertNodeEx(&qword_18017A2A8, v14, v15, v9 + 88);
      v17 = (__int64 *)qword_18017A2B8;
      if ( *(__int64 **)qword_18017A2B8 != &qword_18017A2B0 )
        __fastfail(3u);
      *(_QWORD *)v9 = &qword_18017A2B0;
      *(_QWORD *)(v9 + 8) = v17;
      *v17 = v9;
      qword_18017A2B8 = v9;
      RtlReleaseSRWLockExclusive(&qword_180164350);
      sub_180035F18(1);
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return 1;
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v18 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v18 - 1;
        if ( v18 == 1 )
          RtlProtectHeap((_DWORD *)qword_18017A278, 1);
        RtlReleaseSRWLockExclusive(&qword_180165010);
        return 1;
      }
LABEL_45:
      RtlReleaseSRWLockExclusive(&qword_180165010);
      __fastfail(0xEu);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v23 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        goto LABEL_45;
      *(_DWORD *)qword_18017A288 = v23 - 1;
      if ( v23 == 1 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 1);
      RtlReleaseSRWLockExclusive(&qword_180165010);
    }
  }
  return 0;
}
