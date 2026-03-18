/*
 * XREFs of VfErrorStoreTriageInformation @ 0x1409360D8
 * Callers:
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140936178 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409392B0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x14093E9B8 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140941CD8 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfErrorStoreTriageInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d

  v5 = 1;
  if ( _InterlockedExchange(&VfErrorBugcheckDataReady, 1) )
  {
    return 0;
  }
  else
  {
    VfErrorBugcheckData = a1;
    qword_140987190 = a2;
    qword_140987198 = a3;
    qword_1409871A0 = a4;
    qword_1409871A8 = a5;
  }
  return v5;
}
