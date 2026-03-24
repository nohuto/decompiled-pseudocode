/*
 * XREFs of PspGetJobSilo @ 0x1402E965C
 * Callers:
 *     PsIsProcessInSilo @ 0x1400CB108 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x1402E9B00 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x1402EA120 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x140886710 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
