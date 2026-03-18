/*
 * XREFs of DbgPrompt @ 0x14030AC00
 * Callers:
 *     RtlAssert @ 0x14030DE60 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x140328558 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x1408C9224 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1401CC520 (DebugPrompt.c)
 */

ULONG __stdcall DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
