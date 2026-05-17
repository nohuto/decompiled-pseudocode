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

signed __int64 __fastcall RtlGrowFunctionTable(__int64 a1, unsigned int a2)
{
  int v4; // edi
  signed __int64 result; // rax
  int v6; // edx

  if ( *(_DWORD *)(a1 + 80) != 3 || a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(3221225485LL);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v4 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap((_DWORD *)qword_18017A278, 0);
    if ( v4 == -1 )
    {
LABEL_10:
      RtlReleaseSRWLockExclusive(&qword_180165010);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18017A288 = v4 + 1;
    RtlReleaseSRWLockExclusive(&qword_180165010);
  }
  *(_DWORD *)(a1 + 84) = a2;
  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v6 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      goto LABEL_10;
    *(_DWORD *)qword_18017A288 = v6 - 1;
    if ( v6 == 1 )
      RtlProtectHeap((_DWORD *)qword_18017A278, 1);
    return RtlReleaseSRWLockExclusive(&qword_180165010);
  }
  return result;
}
