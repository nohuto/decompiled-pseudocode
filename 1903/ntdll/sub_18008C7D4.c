/*
 * XREFs of sub_18008C7D4 @ 0x18008C7D4
 * Callers:
 *     __report_securityfailure @ 0x18008C96C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009BDC0 (RtlUnhandledExceptionFilter.c)
 */

__int64 sub_18008C7D4()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
