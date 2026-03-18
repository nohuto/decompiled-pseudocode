/*
 * XREFs of PspGetJobSilo @ 0x1402E955C
 * Callers:
 *     PsIsProcessInSilo @ 0x1400CB0E8 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x1402E9A00 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x1402EA020 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x140886730 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
