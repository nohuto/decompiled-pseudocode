/*
 * XREFs of WerReportExceptionWorker @ 0x1800DEA90
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x1800A0D20 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1800A0D40 (NtTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800DDDE0 (RtlReportExceptionEx.c)
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
