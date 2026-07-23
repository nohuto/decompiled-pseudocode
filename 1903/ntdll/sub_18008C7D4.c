/*
 * XREFs of sub_18008C7D4 @ 0x18008C7D4
 * Callers:
 *     __report_securityfailure @ 0x18008C96C (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009BDC0 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall sub_18008C7D4(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
