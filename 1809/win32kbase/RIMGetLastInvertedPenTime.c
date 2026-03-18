/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1C010E420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_i @ 0x1C010FB18 (WPP_RECORDER_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x96u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
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
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  WPP_RECORDER_SF_i(v6, v5, v7, 151, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, (char)Flink);
  return Flink;
}
