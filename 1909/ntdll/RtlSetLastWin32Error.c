/*
 * XREFs of RtlSetLastWin32Error @ 0x180053C30
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x18000A300 (EtwRegisterTraceGuidsW.c)
 *     EtwpSetProviderTraits @ 0x18000A434 (EtwpSetProviderTraits.c)
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x18000A800 (EtwNotificationRegister.c)
 *     TppSetTimer @ 0x1800326A0 (TppSetTimer.c)
 *     EvtIntReportEventWorker @ 0x18005291C (EvtIntReportEventWorker.c)
 *     EtwUnregisterTraceGuids @ 0x1800537F0 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x180053850 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180053C10 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x1800638C0 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwEventActivityIdControl @ 0x1800663E0 (EtwEventActivityIdControl.c)
 *     EtwGetTraceEnableLevel @ 0x1800807B0 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x1800807F0 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180080830 (EtwGetTraceLoggerHandle.c)
 *     EtwpTrackProviderBinary @ 0x180080930 (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008C0C0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18010CE70 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x18010CF60 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x180052D50 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
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
