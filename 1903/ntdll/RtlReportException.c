/*
 * XREFs of RtlReportException @ 0x1800DB920
 * Callers:
 *     sub_18002507C @ 0x18002507C (sub_18002507C.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D45D0 @ 0x1800D45D0 (sub_1800D45D0.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800F9050 @ 0x1800F9050 (sub_1800F9050.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800FA340 (RtlUnhandledExceptionFilter2.c)
 *     sub_18010F048 @ 0x18010F048 (sub_18010F048.c)
 *     sub_18010F9F4 @ 0x18010F9F4 (sub_18010F9F4.c)
 *     sub_18010FA78 @ 0x18010FA78 (sub_18010FA78.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 *     sub_1800DC838 @ 0x1800DC838 (sub_1800DC838.c)
 */

NTSTATUS __cdecl RtlReportException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, ULONG Flags)
{
  int v3; // ebx
  NTSTATUS v8; // ebx
  _BYTE ProcessInformation[32]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( (Flags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  sub_1800DC838(ExceptionRecord, ContextRecord);
  if ( byte_180165430 )
    return 0;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageInformation, ProcessInformation, 0x40u, 0LL) >= 0
    && v10 == 1 )
  {
    v3 = 1;
    v11 = -300000000LL;
  }
  v8 = sub_1800DBEC0(ExceptionRecord, ContextRecord, Flags, (unsigned __int64)&v11 & -(__int64)(v3 != 0));
  sub_1800DC838(ExceptionRecord, ContextRecord);
  return v8;
}
