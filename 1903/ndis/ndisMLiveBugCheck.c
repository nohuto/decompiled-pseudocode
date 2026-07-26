/*
 * XREFs of ndisMLiveBugCheck @ 0x1C007E74C
 * Callers:
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C01197D0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C0123B5C (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a2, a3, a4, a5, a1, ndisFailedAdapterLiveDumpCallback, 0);
}
