/*
 * XREFs of KiRaiseUserExceptionDispatcher @ 0x1800A4100
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 */

__int64 __fastcall KiRaiseUserExceptionDispatcher()
{
  unsigned int v0; // eax
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v3; // [rsp+C0h] [rbp-8h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v3 = v0;
  ExceptionRecord.ExceptionCode = NtCurrentTeb()->ExceptionCode;
  ExceptionRecord.ExceptionFlags = 0;
  ExceptionRecord.ExceptionRecord = 0LL;
  ExceptionRecord.ExceptionAddress = retaddr;
  ExceptionRecord.NumberParameters = 0;
  RtlRaiseException(&ExceptionRecord);
  return v3;
}
