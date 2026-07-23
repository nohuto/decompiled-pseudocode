/*
 * XREFs of DbgPrompt @ 0x1402ECB80
 * Callers:
 *     RtlAssert @ 0x1402EFA50 (RtlAssert.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     PspCatchCriticalBreak @ 0x14088C6D0 (PspCatchCriticalBreak.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 * Callees:
 *     DebugPrompt @ 0x1401C54E0 (DebugPrompt.c)
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
