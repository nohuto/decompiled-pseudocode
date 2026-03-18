/*
 * XREFs of PsGetProcessSilo @ 0x1403070E0
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1408C4BA0 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x140306C3C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 952));
}
