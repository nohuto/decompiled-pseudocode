/*
 * XREFs of TpCheckTerminateWorker @ 0x18006D7B0
 * Callers:
 *     RtlExitUserThread @ 0x18006D750 (RtlExitUserThread.c)
 * Callees:
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     TppIsWorkerThread @ 0x18006D7FC (TppIsWorkerThread.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     TppReportExceptionFilter @ 0x18010F178 (TppReportExceptionFilter.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)TppIsWorkerThread(Thread) )
  {
    DbgPrintEx(
      0x54u,
      0,
      "ThreadPool: attempt to terminate a worker thread via handle %p\n"
      "Contact the owner of the function calling Terminate/Exit thread.\n",
      Thread);
    memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
    ExceptionRecord.ExceptionCode = -1073740004;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = (unsigned __int64)Thread;
    RtlRaiseException(&ExceptionRecord);
  }
}
