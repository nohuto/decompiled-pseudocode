/*
 * XREFs of WerReportExceptionWorker @ 0x1800DC760
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x18009D8D0 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009D8F0 (NtTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  void *v1; // rbx

  RtlReportExceptionEx(a1 + 16, 2LL, *(_DWORD *)(a1 + 8) & 0x1F, (void *)0xFFFFFFFFFFFFFFFFLL, *(_QWORD *)a1);
  v1 = *(void **)a1;
  ZwFreeVirtualMemory();
  NtSetInformationThread();
  ZwResumeThread();
  LODWORD(v1) = NtClose(v1);
  NtTerminateThread();
  return (unsigned int)v1;
}
