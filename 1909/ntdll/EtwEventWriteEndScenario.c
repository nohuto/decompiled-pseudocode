/*
 * XREFs of EtwEventWriteEndScenario @ 0x180051A70
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180052D50 (EtwEventWrite.c)
 *     EtwpGetKmRegHandle @ 0x180054298 (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x1800542F0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A0620 (NtTraceControl.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

ULONG __cdecl EtwEventWriteEndScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG result; // eax
  _GUID ActivityId; // xmm1
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  _QWORD InputBuffer[6]; // [rsp+38h] [rbp-50h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  result = EtwpGetKmRegHandle(RegHandle, InputBuffer);
  if ( !result )
  {
    *(EVENT_DESCRIPTOR *)&InputBuffer[1] = *EventDescriptor;
    ActivityId = NtCurrentTeb()->ActivityId;
    LODWORD(InputBuffer[5]) = 11;
    *(_GUID *)&InputBuffer[3] = ActivityId;
    NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    return EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
  }
  return result;
}
