/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800654E0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180065340 (RtlDeleteFunctionTable.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlAvlRemoveNode @ 0x180065660 (RtlAvlRemoveNode.c)
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
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
  int v10; // edx
  PVOID v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)DynamicTable + 20) != 3 )
    RtlRaiseStatus(-1073741811);
  v11 = DynamicTable;
  v12 = 1;
  v2 = ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDynamicFunctionTableInformation, &v11, 0x10u);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  sub_180035F18(0);
  LOBYTE(v3) = LdrControlFlowGuardEnforced();
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v4 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap(qword_18017A278, 0);
    if ( v4 == -1 )
      goto LABEL_21;
    *(_DWORD *)qword_18017A288 = v4 + 1;
    RtlReleaseSRWLockExclusive(&stru_180165010);
  }
  RtlAcquireSRWLockExclusive(&stru_180164350);
  RtlAvlRemoveNode(&qword_18017A2A8, (char *)DynamicTable + 88);
  v5 = *(_QWORD **)DynamicTable;
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable
    || (v6 = (PVOID *)*((_QWORD *)DynamicTable + 1), *v6 != DynamicTable) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  v5[1] = v6;
  RtlReleaseSRWLockExclusive(&stru_180164350);
  LOBYTE(v7) = LdrControlFlowGuardEnforced();
  if ( v7 )
    ProcessHeap = qword_18017A278;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v10 = *(_DWORD *)qword_18017A288;
    if ( *(_DWORD *)qword_18017A288 )
    {
      *(_DWORD *)qword_18017A288 = v10 - 1;
      if ( v10 == 1 )
        RtlProtectHeap(qword_18017A278, 1u);
      RtlReleaseSRWLockExclusive(&stru_180165010);
      goto LABEL_17;
    }
LABEL_21:
    RtlReleaseSRWLockExclusive(&stru_180165010);
    __fastfail(0xEu);
  }
LABEL_17:
  sub_180035F18(1);
}
