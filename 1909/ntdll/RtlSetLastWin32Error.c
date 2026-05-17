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

__int64 __fastcall RtlSetLastWin32Error(unsigned int a1)
{
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  result = (__int64)NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && a1 == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( *(_DWORD *)(result + 104) != a1 )
  {
    *(_DWORD *)(result + 104) = a1;
    result = v3;
    if ( v3 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( v3 != 997 )
        {
          v2[0] = &v3;
          v2[1] = 4LL;
          return EtwEventWrite(g_hUserDiagnosticProvider, (int)&SetLastWin32ErrorEvent, 1, (__int64)v2);
        }
      }
    }
  }
  return result;
}
