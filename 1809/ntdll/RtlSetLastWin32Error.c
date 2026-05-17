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
 *     EtwpSetProviderTraits @ 0x1800760E4 (EtwpSetProviderTraits.c)
 *     EtwGetTraceEnableLevel @ 0x1800850D0 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180085110 (EtwGetTraceEnableFlags.c)
 *     EtwGetTraceLoggerHandle @ 0x180085150 (EtwGetTraceLoggerHandle.c)
 *     EtwpTrackProviderBinary @ 0x18008D2F4 (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008F420 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18010EDA0 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x18010EE90 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x18004DC20 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
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
