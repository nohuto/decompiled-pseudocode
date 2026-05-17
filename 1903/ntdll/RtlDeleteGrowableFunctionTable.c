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

signed __int64 __fastcall RtlDeleteGrowableFunctionTable(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  void *ProcessHeap; // rcx
  int v7; // edx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
    RtlRaiseStatus(3221225485LL);
  v9 = a1;
  v10 = 1;
  v2 = ZwSetInformationProcess(-1LL, 53LL, &v9, 16LL);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  sub_180035F18(0);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v3 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap((_DWORD *)qword_18017A278, 0);
    if ( v3 == -1 )
      goto LABEL_21;
    *(_DWORD *)qword_18017A288 = v3 + 1;
    RtlReleaseSRWLockExclusive(&qword_180165010);
  }
  RtlAcquireSRWLockExclusive(&qword_180164350);
  RtlAvlRemoveNode(&qword_18017A2A8, a1 + 88);
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v5 = *(_QWORD **)(a1 + 8), *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  RtlReleaseSRWLockExclusive(&qword_180164350);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)qword_18017A278;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v7 = *(_DWORD *)qword_18017A288;
    if ( *(_DWORD *)qword_18017A288 )
    {
      *(_DWORD *)qword_18017A288 = v7 - 1;
      if ( v7 == 1 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 1);
      RtlReleaseSRWLockExclusive(&qword_180165010);
      return sub_180035F18(1);
    }
LABEL_21:
    RtlReleaseSRWLockExclusive(&qword_180165010);
    __fastfail(0xEu);
  }
  return sub_180035F18(1);
}
