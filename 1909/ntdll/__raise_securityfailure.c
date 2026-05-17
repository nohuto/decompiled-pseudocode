/*
 * XREFs of __raise_securityfailure @ 0x18008CE74
 * Callers:
 *     __report_securityfailure @ 0x18008D00C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009C570 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
