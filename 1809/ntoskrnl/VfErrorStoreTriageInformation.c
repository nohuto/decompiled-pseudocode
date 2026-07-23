/*
 * XREFs of VfErrorStoreTriageInformation @ 0x1409370D8
 * Callers:
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViErrorFinishReport @ 0x140937178 (ViErrorFinishReport.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x14093A2B0 (ViShutdownWatchdogExecuteDpc.c)
 *     ViWdIrpTimedOut @ 0x14093F9B8 (ViWdIrpTimedOut.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140942CD8 (ViCtxCheckAndReleaseIsrState.c)
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
    qword_140988190 = a2;
    qword_140988198 = a3;
    qword_1409881A0 = a4;
    qword_1409881A8 = a5;
  }
  return v5;
}
