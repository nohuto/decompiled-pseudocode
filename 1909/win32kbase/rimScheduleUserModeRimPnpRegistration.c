/*
 * XREFs of rimScheduleUserModeRimPnpRegistration @ 0x1C00A4280
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C009CB08 (UserActivateMITInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void rimScheduleUserModeRimPnpRegistration()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  struct _LIST_ENTRY *i; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 62, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !BYTE1(i[4].Flink) && !LOBYTE(i[4].Flink) && LOBYTE(i[23].Blink) )
    {
      if ( LODWORD(i[53].Flink) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
      if ( (HIDWORD(i[4].Flink) & 0x20) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
      ZwSetEvent(i[23].Flink, 0LL);
    }
  }
  qword_1C0215788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 63, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
}
