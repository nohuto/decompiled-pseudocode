/*
 * XREFs of RtlGrowFunctionTable @ 0x1800DFCA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __cdecl RtlGrowFunctionTable(PVOID DynamicTable, DWORD NewEntryCount)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx

  if ( *((_DWORD *)DynamicTable + 20) != 3 || NewEntryCount < *((_DWORD *)DynamicTable + 21) )
    RtlRaiseStatus(-1073741811);
  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v5 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap(qword_18017A278, 0);
    if ( v5 == -1 )
    {
LABEL_10:
      RtlReleaseSRWLockExclusive(&stru_180165010);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18017A288 = v5 + 1;
    RtlReleaseSRWLockExclusive(&stru_180165010);
  }
  *((_DWORD *)DynamicTable + 21) = NewEntryCount;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(&stru_180165010);
    v7 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      goto LABEL_10;
    *(_DWORD *)qword_18017A288 = v7 - 1;
    if ( v7 == 1 )
      RtlProtectHeap(qword_18017A278, 1u);
    RtlReleaseSRWLockExclusive(&stru_180165010);
  }
}
