/*
 * XREFs of ndisLiveBugCheck @ 0x1C007E704
 * Callers:
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C0123B5C (ndisReportTimeoutWaitingForExternalDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLiveBugCheck(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return DbgkWerCaptureLiveKernelDump(L"NDIS", 350LL, a1, a2, a3, a4, 0LL, 0LL, 0);
}
