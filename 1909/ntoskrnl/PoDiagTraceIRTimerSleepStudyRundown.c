/*
 * XREFs of PoDiagTraceIRTimerSleepStudyRundown @ 0x1402FB1B0
 * Callers:
 *     ExStopRecordingIRTimerExpiries @ 0x14090CA28 (ExStopRecordingIRTimerExpiries.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PoDiagTraceIRTimerSleepStudyRundown(int a1, __int16 a2, const WCHAR *a3)
{
  BOOLEAN result; // al
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  __int16 *v7; // [rsp+68h] [rbp+27h]
  int v8; // [rsp+70h] [rbp+2Fh]
  int v9; // [rsp+74h] [rbp+33h]
  wchar_t *Buffer; // [rsp+78h] [rbp+37h]
  int Length; // [rsp+80h] [rbp+3Fh]
  int v12; // [rsp+84h] [rbp+43h]
  int v13; // [rsp+A8h] [rbp+67h] BYREF
  __int16 v14; // [rsp+B0h] [rbp+6Fh] BYREF

  v14 = a2;
  v13 = a1;
  result = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_IR_TIMER_DATA);
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, a3);
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      UserData.Ptr = (ULONGLONG)&v13;
      v7 = &v14;
      Buffer = DestinationString.Buffer;
      Length = DestinationString.Length;
      UserData.Size = 4;
      v8 = 2;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_IR_TIMER_DATA, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
