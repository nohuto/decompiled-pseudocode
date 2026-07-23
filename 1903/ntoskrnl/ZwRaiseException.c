/*
 * XREFs of ZwRaiseException @ 0x1401C2CD0
 * Callers:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     RtlUnwindEx @ 0x140019840 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x14030BFC0 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRaiseException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context, BOOLEAN SearchFrames)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExceptionRecord);
}
