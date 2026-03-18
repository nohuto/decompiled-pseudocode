/*
 * XREFs of VfErrorStoreTriageInformation @ 0x140975790
 * Callers:
 *     VfReportIssueWithOptions @ 0x140328558 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140975830 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409778E0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x14097E24C (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x1409815AC (ViCtxCheckAndReleaseIsrState.c)
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
    qword_1409C94C8 = a2;
    qword_1409C94D0 = a3;
    qword_1409C94D8 = a4;
    qword_1409C94E0 = a5;
  }
  return v5;
}
