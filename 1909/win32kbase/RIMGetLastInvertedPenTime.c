/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C0136BD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_i @ 0x1C0138400 (WPP_RECORDER_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *RIMGetLastInvertedPenTime()
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v4; // rcx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  Flink = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 148, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    v4 = i - 1;
    if ( i == (struct _LIST_ENTRY *)16 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v1, v2);
    }
    else if ( (HIDWORD(v4[5].Flink) & 4) != 0 && v4[38].Flink > Flink )
    {
      Flink = v4[38].Flink;
    }
  }
  qword_1C0215788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_i(v6, v5, v7, 149, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, (char)Flink);
  }
  return Flink;
}
