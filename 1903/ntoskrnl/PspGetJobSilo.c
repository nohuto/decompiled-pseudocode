/*
 * XREFs of PspGetJobSilo @ 0x140306C3C
 * Callers:
 *     PsIsProcessInSilo @ 0x140006498 (PsIsProcessInSilo.c)
 *     PsGetProcessSilo @ 0x1403070E0 (PsGetProcessSilo.c)
 *     PsGetJobSilo @ 0x140307C10 (PsGetJobSilo.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     PsGetParentSilo @ 0x1408C4AD0 (PsGetParentSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetJobSilo(__int64 a1)
{
  while ( a1 && (*(_DWORD *)(a1 + 1304) & 0x40000000) == 0 )
    a1 = *(_QWORD *)(a1 + 1072);
  return a1;
}
