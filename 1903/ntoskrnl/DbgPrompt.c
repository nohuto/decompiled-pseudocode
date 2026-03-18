/*
 * XREFs of DbgPrompt @ 0x14030B150
 * Callers:
 *     RtlAssert @ 0x14030E410 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x1408C9944 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1401CB9A0 (DebugPrompt.c)
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
