/*
 * XREFs of sub_1800DC838 @ 0x1800DC838
 * Callers:
 *     RtlReportException @ 0x1800DB920 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x18009F2D0 (ZwRaiseException.c)
 *     sub_1800DCA9C @ 0x1800DCA9C (sub_1800DCA9C.c)
 */

void __fastcall sub_1800DC838(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)sub_1800DCA9C() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)sub_1800DCA9C() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
