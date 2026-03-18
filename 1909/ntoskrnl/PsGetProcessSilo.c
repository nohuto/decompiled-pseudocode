/*
 * XREFs of PsGetProcessSilo @ 0x140306B90
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1408C4470 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x1403066EC (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 952));
}
