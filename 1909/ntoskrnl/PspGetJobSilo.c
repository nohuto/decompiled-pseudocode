/*
 * XREFs of PspGetJobSilo @ 0x1403066EC
 * Callers:
 *     PsIsProcessInSilo @ 0x140006528 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x140306B90 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x1403076C0 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x1408C43A0 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
