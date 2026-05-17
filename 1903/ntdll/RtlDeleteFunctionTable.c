/*
 * XREFs of RtlDeleteFunctionTable @ 0x180065340
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x180065660 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 v2; // rsi
  BOOLEAN v3; // di
  __int64 i; // rbx
  int v5; // edi
  __int64 v6; // rcx
  __int64 *v7; // rax
  void *v8; // rcx
  int v9; // edx

  v2 = 0LL;
  v3 = 0;
  sub_180035F18(0);
  RtlAcquireSRWLockExclusive(&qword_180164350);
  for ( i = qword_18017A2B0; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_18017A2B0 )
      goto LABEL_16;
    v2 = i;
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v5 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap((_DWORD *)qword_18017A278, 0);
    if ( v5 == -1 )
      goto LABEL_30;
    *(_DWORD *)qword_18017A288 = v5 + 1;
    RtlReleaseSRWLockExclusive(&qword_180165010);
  }
  if ( *(_DWORD *)(i + 80) != 3 )
  {
    RtlAvlRemoveNode(&qword_18017A2A8, i + 88);
    v6 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v7 = *(__int64 **)(i + 8), *v7 != i) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  v3 = 1;
LABEL_16:
  RtlReleaseSRWLockExclusive(&qword_180164350);
  sub_180035F18(1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v2 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v8 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)qword_18017A278 : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v8, 0, v2);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v9 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v9 - 1;
        if ( v9 == 1 )
          RtlProtectHeap((_DWORD *)qword_18017A278, 1);
        RtlReleaseSRWLockExclusive(&qword_180165010);
        return v3;
      }
LABEL_30:
      RtlReleaseSRWLockExclusive(&qword_180165010);
      __fastfail(0xEu);
    }
  }
  return v3;
}
