/*
 * XREFs of sub_1800A03B0 @ 0x1800A03B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     ZwCallbackReturn @ 0x18009C780 (ZwCallbackReturn.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

__int64 __fastcall sub_1800A03B0(PEXCEPTION_RECORD ExceptionRecord, PVOID TargetFrame, PCONTEXT ContextRecord)
{
  unsigned int ExceptionCode; // [rsp+30h] [rbp-8h]

  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x80000) == 0 )
  {
    sub_1800CFBE0(ExceptionRecord, ContextRecord);
    return 0LL;
  }
  if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    RtlUnwindEx(TargetFrame, &loc_1800A0464, ExceptionRecord, (PVOID)ExceptionRecord->ExceptionCode, ContextRecord, 0LL);
    goto LABEL_5;
  }
  if ( (ExceptionRecord->ExceptionFlags & 0x20) == 0 )
  {
    ExceptionCode = ZwCallbackReturn();
LABEL_5:
    RtlRaiseStatus(ExceptionCode);
  }
  return 1LL;
}
