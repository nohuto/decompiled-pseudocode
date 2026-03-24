/*
 * XREFs of DbgPrompt @ 0x1402EC990
 * Callers:
 *     RtlAssert @ 0x1402EF860 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x14030AE18 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14088B470 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x140936178 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1401C5380 (DebugPrompt.c)
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
