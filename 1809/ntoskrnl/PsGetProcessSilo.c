/*
 * XREFs of PsGetProcessSilo @ 0x1402E9B00
 * Callers:
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x1408867E0 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E965C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 944));
}
