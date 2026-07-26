/*
 * XREFs of ndisMLiveBugCheck @ 0x1C005036C
 * Callers:
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00F6CF0 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C01036FC (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a2, a3, a4, a5, a1, ndisFailedAdapterLiveDumpCallback, 0);
}
