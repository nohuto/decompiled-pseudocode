/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C00A871C
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C006B6E0 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMCloseDev @ 0x1C0067DAC (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // si
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // edi

  v3 = a2;
  v4 = a1;
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 29, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
  }
  if ( (*(_DWORD *)(v3 + 184) & 0x40) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        a2,
        1,
        30,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v4,
        v3,
        0);
    }
    return 0LL;
  }
  else
  {
    v5 = RIMCloseDev(v3);
    v7 = v5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qqd(
        (_DWORD)gRimLog,
        v6,
        1,
        31,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        v4,
        v3,
        v5);
    }
    return v7;
  }
}
