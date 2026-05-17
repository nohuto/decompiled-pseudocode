/*
 * XREFs of KiUserCallbackDispatcherHandler @ 0x1800A3F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A0380 (ZwCallbackReturn.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D14D0 (LdrpLogFatalUserCallbackException.c)
 */

__int64 __fastcall KiUserCallbackDispatcherHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        PCONTEXT ContextRecord)
{
  int ExceptionCode; // [rsp+30h] [rbp-8h]
  int v5; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) != 0 )
  {
    if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    {
      ExceptionCode = ExceptionRecord->ExceptionCode;
      RtlUnwindEx(
        TargetFrame,
        &KiUserCallbackDispatcherContinue,
        ExceptionRecord,
        (PVOID)(unsigned int)ExceptionRecord->ExceptionCode,
        ContextRecord,
        0LL);
      RtlRaiseStatus(ExceptionCode);
    }
    if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
    {
      v5 = ZwCallbackReturn();
      RtlRaiseStatus(v5);
    }
    return 1LL;
  }
  else
  {
    LdrpLogFatalUserCallbackException(ExceptionRecord, ContextRecord);
    return 0LL;
  }
}
