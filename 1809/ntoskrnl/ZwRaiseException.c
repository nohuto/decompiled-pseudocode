/*
 * XREFs of ZwRaiseException @ 0x1401BAD50
 * Callers:
 *     RtlUnwindEx @ 0x14009DF30 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x1402ED740 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord, Context, SearchFrames);
}
