/*
 * XREFs of PsGetProcessSilo @ 0x1402E9CF0
 * Callers:
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PsIsProcessInAppSilo @ 0x140887A40 (PsIsProcessInAppSilo.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E984C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetProcessSilo(__int64 a1)
{
  return PspGetJobSilo(*(_QWORD *)(a1 + 944));
}
