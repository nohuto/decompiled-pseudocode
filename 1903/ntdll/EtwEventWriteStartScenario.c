/*
 * XREFs of EtwEventWriteStartScenario @ 0x18008B6A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     sub_1800541F8 @ 0x1800541F8 (sub_1800541F8.c)
 *     EtwEventEnabled @ 0x180054250 (EtwEventEnabled.c)
 *     EtwEventActivityIdControl @ 0x180066190 (EtwEventActivityIdControl.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009FE70 (ZwTraceControl.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

ULONG __cdecl EtwEventWriteStartScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v8; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp-40h] BYREF
  _QWORD InputBuffer[6]; // [rsp+38h] [rbp-38h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v8 = sub_1800541F8(RegHandle, InputBuffer);
  if ( !v8 )
  {
    *(EVENT_DESCRIPTOR *)&InputBuffer[1] = *EventDescriptor;
    *(GUID *)&InputBuffer[3] = NtCurrentTeb()->ActivityId;
    if ( _mm_cvtsi128_si32(*(__m128i *)&InputBuffer[3])
      || HIDWORD(InputBuffer[3])
      || LOBYTE(InputBuffer[4])
      || __PAIR16__(BYTE1(InputBuffer[4]), 0) != BYTE2(InputBuffer[4])
      || *(_WORD *)((char *)&InputBuffer[4] + 3)
      || BYTE5(InputBuffer[4])
      || __PAIR16__(BYTE6(InputBuffer[4]), 0) != HIBYTE(InputBuffer[4])
      || (v8 = EtwEventActivityIdControl(3u, (LPGUID)&InputBuffer[3])) == 0
      && (v8 = EtwEventActivityIdControl(2u, (LPGUID)&InputBuffer[3])) == 0 )
    {
      LODWORD(InputBuffer[5]) = 10;
      v8 = EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
      ZwTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    }
  }
  return v8;
}
