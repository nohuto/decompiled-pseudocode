/*
 * XREFs of rimScheduleUserModeRimPnpRegistration @ 0x1C00917FC
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C007A558 (UserActivateMITInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 rimScheduleUserModeRimPnpRegistration()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  struct _LIST_ENTRY *i; // rbx

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Eu, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
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
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Fu, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
}
