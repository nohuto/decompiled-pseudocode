/*
 * XREFs of RtlUnhandledExceptionFilter_0 @ 0x14000D0A6
 * Callers:
 *     __report_gsfailure @ 0x14000CE30 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __stdcall RtlUnhandledExceptionFilter_0(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return RtlUnhandledExceptionFilter(ExceptionInfo);
}
