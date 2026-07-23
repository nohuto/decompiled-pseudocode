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
  _DWORD *v2; // rsi
  BOOLEAN v3; // di
  __int64 i; // rbx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rcx
  __int64 *v8; // rax
  int v9; // eax
  PVOID v10; // rcx
  int v11; // eax
  int v12; // edx

  v2 = 0LL;
  v3 = 0;
  sub_180035F18(0);
  RtlAcquireSRWLockExclusive(&stru_180164350);
  for ( i = qword_18017A2B0; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_18017A2B0 )
      goto LABEL_16;
    v2 = (_DWORD *)i;
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  LOBYTE(v5) = LdrControlFlowGuardEnforced();
  if ( v5 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v6 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap(qword_18017A278, 0);
    if ( v6 == -1 )
      goto LABEL_30;
    *(_DWORD *)qword_18017A288 = v6 + 1;
    RtlReleaseSRWLockExclusive(&stru_180165010);
  }
  if ( *(_DWORD *)(i + 80) != 3 )
  {
    RtlAvlRemoveNode(&qword_18017A2A8, i + 88);
    v7 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v8 = *(__int64 **)(i + 8), *v8 != i) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  v3 = 1;
LABEL_16:
  RtlReleaseSRWLockExclusive(&stru_180164350);
  sub_180035F18(1);
  if ( v3 )
  {
    if ( v2[20] == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      LOBYTE(v9) = LdrControlFlowGuardEnforced();
      v10 = v9 ? qword_18017A278 : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v10, 0, v2);
    }
    LOBYTE(v11) = LdrControlFlowGuardEnforced();
    if ( v11 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v12 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v12 - 1;
        if ( v12 == 1 )
          RtlProtectHeap(qword_18017A278, 1u);
        RtlReleaseSRWLockExclusive(&stru_180165010);
        return v3;
      }
LABEL_30:
      RtlReleaseSRWLockExclusive(&stru_180165010);
      __fastfail(0xEu);
    }
  }
  return v3;
}
