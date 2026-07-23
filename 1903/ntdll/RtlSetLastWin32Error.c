/*
 * XREFs of RtlSetLastWin32Error @ 0x180053B90
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x18000A300 (EtwRegisterTraceGuidsW.c)
 *     sub_18000A434 @ 0x18000A434 (sub_18000A434.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     sub_1800326A0 @ 0x1800326A0 (sub_1800326A0.c)
 *     sub_18005287C @ 0x18005287C (sub_18005287C.c)
 *     EtwUnregisterTraceGuids @ 0x180053750 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180053B70 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180063820 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwEventActivityIdControl @ 0x180066190 (EtwEventActivityIdControl.c)
 *     EtwGetTraceEnableLevel @ 0x180080110 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180080150 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180080190 (EtwGetTraceLoggerHandle.c)
 *     sub_180080290 @ 0x180080290 (sub_180080290.c)
 *     EtwRegisterSecurityProvider @ 0x18008BA20 (EtwRegisterSecurityProvider.c)
 *     sub_18010CD40 @ 0x18010CD40 (sub_18010CD40.c)
 *     EtwCreateTraceInstanceId @ 0x18010CE30 (EtwCreateTraceInstanceId.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 * Callees:
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  LONG v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = Win32Error;
  v1 = NtCurrentTeb();
  if ( dword_1801669C4 && Win32Error == dword_1801669C4 )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v1->LastErrorValue = Win32Error;
    if ( v3 )
    {
      if ( byte_18016655C )
      {
        if ( v3 != 997 )
        {
          v2[0] = &v3;
          v2[1] = 4LL;
          EtwEventWrite(qword_180163B90, &stru_18012C160, 1u, (PEVENT_DATA_DESCRIPTOR)v2);
        }
      }
    }
  }
}
