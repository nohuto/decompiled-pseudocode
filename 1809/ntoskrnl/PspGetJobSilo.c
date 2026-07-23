/*
 * XREFs of PspGetJobSilo @ 0x1402E984C
 * Callers:
 *     PsIsProcessInSilo @ 0x1400CB1E8 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x1402E9CF0 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x1402EA310 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x140887970 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
