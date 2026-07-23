/*
 * XREFs of TpCheckTerminateWorker @ 0x18006D560
 * Callers:
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     sub_18006D5AC @ 0x18006D5AC (sub_18006D5AC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010F048 @ 0x18010F048 (sub_18010F048.c)
 */

void __cdecl TpCheckTerminateWorker(HANDLE Thread)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_18006D5AC(Thread) )
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
    ExceptionRecord.ExceptionInformation[0] = (ULONG_PTR)Thread;
    RtlRaiseException(&ExceptionRecord);
  }
}
