/*
 * XREFs of WerReportExceptionWorker @ 0x1800DC6A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x18009D120 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  unsigned int v1; // ebx

  RtlReportExceptionEx(a1 + 16, 2LL, *(_DWORD *)(a1 + 8) & 0x1F, -1LL, *(_QWORD *)a1);
  ZwFreeVirtualMemory();
  ZwSetInformationThread();
  ZwResumeThread();
  v1 = ZwClose();
  ZwTerminateThread();
  return v1;
}
