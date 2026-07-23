/*
 * XREFs of RtlSetLastWin32Error @ 0x18004ED60
 * Callers:
 *     EtwNotificationRegister @ 0x180020CB0 (EtwNotificationRegister.c)
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     TppSetTimer @ 0x18002CFD4 (TppSetTimer.c)
 *     EvtIntReportEventWorker @ 0x18004D38C (EvtIntReportEventWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18004E920 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x18004E980 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18004ED40 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwRegisterTraceGuidsW @ 0x180052970 (EtwRegisterTraceGuidsW.c)
 *     EtwEventActivityIdControl @ 0x18006DBD0 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180071AD0 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwpSetProviderTraits @ 0x1800760F4 (EtwpSetProviderTraits.c)
 *     EtwGetTraceEnableLevel @ 0x1800850E0 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180085120 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180085160 (EtwGetTraceLoggerHandle.c)
 *     EtwpTrackProviderBinary @ 0x18008D304 (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008F430 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18010EDA0 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x18010EE90 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x18004DC20 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF
  LONG v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = Win32Error;
  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v1->LastErrorValue = Win32Error;
    if ( v3 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( v3 != 997 )
        {
          UserData.Ptr = (unsigned __int64)&v3;
          *(_QWORD *)&UserData.Size = 4LL;
          EtwEventWrite(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 1u, &UserData);
        }
      }
    }
  }
}
