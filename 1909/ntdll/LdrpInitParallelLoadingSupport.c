/*
 * XREFs of LdrpInitParallelLoadingSupport @ 0x18007D66C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 */

__int64 LdrpInitParallelLoadingSupport()
{
  qword_1801652F8 = (__int64)&LdrpWorkQueue;
  LdrpWorkQueue = (__int64)&LdrpWorkQueue;
  qword_1801652A8 = (__int64)&LdrpRetryQueue;
  LdrpRetryQueue = (__int64)&LdrpRetryQueue;
  RtlInitializeCriticalSectionEx(&LdrpWorkQueueLock, 0, 0);
  return LdrpCreateLoaderEvents();
}
