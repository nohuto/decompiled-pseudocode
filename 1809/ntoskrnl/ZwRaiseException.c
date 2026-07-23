/*
 * XREFs of ZwRaiseException @ 0x1401BAED0
 * Callers:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x1402EDA30 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
