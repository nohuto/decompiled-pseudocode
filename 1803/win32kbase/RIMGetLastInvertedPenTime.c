/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C00E2770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_x @ 0x1C00E6530 (WPP_RECORDER_SF_x.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *RIMGetLastInvertedPenTime()
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v1; // rdx
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v3; // rcx
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  int v8; // [rsp+20h] [rbp-18h]

  Flink = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x92u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v3 = i - 1;
    if ( i == (struct _LIST_ENTRY *)16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v1);
    }
    else if ( (HIDWORD(v3[4].Blink) & 4) != 0 && v3[37].Flink > Flink )
    {
      Flink = v3[37].Flink;
    }
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  WPP_RECORDER_SF_x(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v8, (char)Flink);
  return Flink;
}
